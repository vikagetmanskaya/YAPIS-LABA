all: compile
.SUFFIXES:
#*
#* ************************************************************************** *#
#*                              Project Type                                  *#
#* ************************************************************************** *#
#*
LIBRARY         =
HAS_BONUS	=
#*
#* ************************************************************************** *#
#*                             Executable name                                *#
#* ************************************************************************** *#
#*
NAME            =tdl
DEBUG_NAME      =deb_tdl
BONUS_NAME      =
DEBUG_BONUS     =
#*
#* ************************************************************************** *#
#*                               Run Arguments                                *#
#* ************************************************************************** *#
#*
RUN                     =
DEBUG_RUN               =
#*
#* ************************************************************************** *#
#*                            Antlr Grammar Rule                              *#
#* ************************************************************************** *#
#*
antlr:
	java -jar antlr-4.8-complete.jar -Dlanguage=Cpp -visitor -o Sources/gen Tdl.g4
	@< Sources/gen/TdlLexer.cpp sed -E 's/u8"/"/g' > Sources/gen/TdlLexerTemporary.cpp
	@mv Sources/gen/TdlLexerTemporary.cpp Sources/gen/TdlLexer.cpp

.PHONY: antlr
#*
#* ************************************************************************** *#
#*                          Compilation variables                             *#
#* ************************************************************************** *#
#*
DEBUG_PROGRAM           =gdb -tui -arg
SRCS_EXT                =.cpp
OBJS_EXT                =.cpp.o
HEADER_EXT              =.hpp
DFILES_EXT              =.cpp.d
CC                      =clang++ -std=c++2a
ARCHIVE                 =ar rc
CFLAG                   =-Wextra -Wall -Ofast
DEBUG_FLAG              =-g3 -Wextra -Wall
DFLAG                   =-MT $@ -MD -MP -MF $(DFILES_DIR)$*$(DFILES_EXT)
CLINK                   =-lantlr4-runtime #-lft -ljz
DEPENDENCIES_PATHS      =.#ft/libft.a jz/libjz.a
#*
#* ************************************************************************** *#
#*                               Directories                                  *#
#* ************************************************************************** *#
#*
SRCS_DIR        =Sources/
INCLUDES_DIR    =Includes/ Sources/gen Dependencies/Antlr
OBJS_DIR        =Objects/
DFILES_DIR      =HeaderDependencies/
DEPENDENCIES    =Dependencies/
DEP_INCLUDES    =
#*
#* ************************************************************************** *#
#*                                  Files                                     *#
#* ************************************************************************** *#
#*
SOURCES_NAME            = 

BONUS_SOURCES_NAME      = 

MAIN_NAME               =

BONUS_MAIN_NAME         =
#*
#* ************************************************************************** *#
#*                               Conversions                                  *#
#* ************************************************************************** *#
#*
SOURCES                 = $(shell find Sources/ -name "*.cpp"| sed -E "s/Sources\///g")
#$(addsuffix $(SRCS_EXT), $(SOURCES_NAME) $(MAIN_NAME))
BONUS_SOURCES           =$(addsuffix $(SRCS_EXT), $(BONUS_SOURCES_NAME) $(BONUS_MAIN_NAME))
DEPS                    =$(addprefix $(DEPENDENCIES), $(DEPENDENCIES_PATHS))

ifeq ($(SRCS_DIR),)
SRCS                    =$(SOURCES)
else
SRCS                    =$(addprefix $(SRCS_DIR),$(SOURCES))
endif

ifeq ($(OBJS_DIR),)
MAIN                    =$(patsubst %,%$(OBJS_EXT), $(MAIN_NAME))
else
MAIN                    =$(patsubst %,$(OBJS_DIR)%$(OBJS_EXT), $(MAIN_NAME))
endif

ifeq ($(OBJS_DIR),)
BONUS_MAIN              =$(patsubst %,%$(OBJS_EXT), $(BONUS_MAIN_NAME))
else
BONUS_MAIN              =$(patsubst %,$(OBJS_DIR)%$(OBJS_EXT), $(BONUS_MAIN_NAME))
endif

ifeq ($(OBJS_DIR),)
OBJS                    =$(patsubst %$(SRCS_EXT),%$(OBJS_EXT), $(SOURCES))
else
OBJS                    =$(patsubst %$(SRCS_EXT),$(OBJS_DIR)%$(OBJS_EXT), $(SOURCES))
endif

ifeq ($(OBJS_DIR),)
BOBJS                   =$(patsubst %$(SRCS_EXT),%$(OBJS_EXT), $(BONUS_SOURCES))
else
BOBJS                   =$(patsubst %$(SRCS_EXT),$(OBJS_DIR)%$(OBJS_EXT), $(BONUS_SOURCES))
endif

ifeq ($(DFILES_DIR),)
DFS                     =$(patsubst %$(SRCS_EXT),%$(DFILES_EXT), $(SOURCES))
else
DFS                     =$(patsubst %$(SRCS_EXT),$(DFILES_DIR)%$(DFILES_EXT), $(SOURCES))
endif

ifeq ($(DFILES_DIR),)
BDFS                     =$(patsubst %$(SRCS_EXT),%$(DFILES_EXT), $(BONUS_SOURCES))
else
BDFS                     =$(patsubst %$(SRCS_EXT),$(DFILES_DIR)%$(DFILES_EXT), $(BONUS_SOURCES))
endif

CADDLINK                =$(addprefix -L, $(dir $(DEPS)))

INCS                    =$(addprefix -I, $(INCLUDES_DIR) $(addprefix $(DEPENDENCIES), $(DEP_INCLUDES)))

#*
#* ************************************************************************** *#
#*                             Directories Rules                              *#
#* ************************************************************************** *#
#*
%/:
	mkdir -p $@
dirs: | $(SRCS_DIR) $(INCLUDES_DIR) $(OBJS_DIR) $(DFILES_DIR) $(DEPENDENCIES)
.PHONY: dirs
#*
#* ************************************************************************** *#
#*                                Bonus Rule                                  *#
#* ************************************************************************** *#
#*
ifneq ($(HAS_BONUS),)
ifeq ($(BONUS_NAME),$(NAME))

bonus:
	@make NAME="$(BONUS_NAME)"\
		OBJS="$(BOBJS)" \
		MAIN="$(BONUS_MAIN)" \
		BONUS_MAIN="$(MAIN)" all
else

$(BONUS_NAME): $(BOBJS) $(DEPS)
ifneq ($(wildcard $(BONUS_MAIN)),)
	rm -f $(BONUS_MAIN:%$(SRCS_EXT)=%$(OBJS_EXT))
endif
	$(CC) $(CFLAG) -o $(NAME) $(BOBJS) $(CADDLINK) $(CLINK)
.PHONY:bonus
endif
endif
#*
#* ************************************************************************** *#
#*                               Objects Rule                                 *#
#* ************************************************************************** *#
#*
.SECONDEXPANSION:
$(OBJS_DIR)%$(OBJS_EXT): $(SRCS_DIR)%$(SRCS_EXT) | \
		$$(dir $$@) \
		$$(dir $$(DFILES_DIR)$$*$$(DFILES_EXT))
	$(CC) $(CFLAG) $(INCS) -c $< -o $@ $(DFLAG)

include $(wildcard $(DFS))
#*
#* ************************************************************************** *#
#*                            Dependencies rules                              *#
#* ************************************************************************** *#
#*
%.a:
	$(MAKE) -C $(dir $@) all
#.PHONY: $(DEPS)
#*
#* ************************************************************************** *#
#*                             Compilation Rule                               *#
#* ************************************************************************** *#
ifneq ($(LIBRARY),)
$(NAME): $(OBJS) $(DEPS)
ifneq ($(wildcard $(BONUS_MAIN)),)
	rm -f $(BONUS_MAIN)
endif
	$(ARCHIVE) $(NAME) $(OBJS)
else
$(NAME): $(OBJS) $(DEPS)
ifneq ($(wildcard $(BONUS_MAIN)),)
	rm -f $(BONUS_MAIN)
endif
	$(CC) $(CFLAG) -o $(NAME) $(OBJS) $(CADDLINK) $(CLINK)
endif
compile: $(NAME)
.PHONY: compile all
#*
#* ************************************************************************** *#
#*                                     Run                                    *#
#* ************************************************************************** *#
#*
ifeq ($(LIBRARY),)
run: $(NAME)
	./$(NAME) $(ARG)
debug_run: $(DEBUG_NAME)
	$(DEBUG_PROGRAM) $(DEBUG_NAME) $(ARG)
drun: debug_run

r: run

dr: drun

der: drun
.PHONY: run debug_run drun r dr der
endif
#*
#* ************************************************************************** *#
#*                                    Debug                                   *#
#* ************************************************************************** *#
#*
ifeq ($(LIBRARY),)
$(DEBUG_NAME): $(SRCS) $(DEPS)
	rm -f $(BONUS_MAIN)
	$(CC) $(DEBUG_FLAG) $(INCS) -o $(DEBUG_NAME) $(SRCS) $(CADDLINK) $(CLINK)
debug: $(DEBUG_NAME)

de: debug

db: debug

.PHONY:de debug db
endif
#*
#* ************************************************************************** *#
#*                                    Cleanup                                 *#
#* ************************************************************************** *#
#*
CLEAN_FILES= $(wildcard $(sort $(OBJS) $(BOBJS) $(DFS)) $(BDFS))
FCLEAN_FILES= $(wildcard $(NAME) $(DEBUG_NAME))

clean:
ifneq ($(CLEAN_FILES),)
	rm -f $(CLEAN_FILES)
endif

fclean: clean
ifneq ($(FCLEAN_FILES),)
	rm -f $(FCLEAN_FILES)
endif

re: fclean all

remake: re

.PHONY: clean fclean re remake
#*
#* ************************************************************************** *#
#*                                   Appendix                                 *#
#* ************************************************************************** *#
#*
