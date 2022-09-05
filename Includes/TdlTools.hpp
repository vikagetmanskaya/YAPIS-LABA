#pragma once

inline constexpr char tdl_tools_template[] =
R"(#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>
namespace tdl {
	class table;
	class column;
	typedef std::vector<column> row;

	class string : public std::string {
		public:
		using Base = std::string;
		using Base::Base;
		public:
		string(const Base& other):Base(other){}
		string(Base&& other):Base(std::forward<Base>(other)){}
		string(const string& other):Base(other){}
		string(string&& other):Base(std::forward<string>(other)){}
		//template<class... Args>
		//string(Args&&... args):Base(std::forward<Args>(args)...){}
		string(int value):Base(std::to_string(value)){}
		string(float value):Base(std::to_string(value)){}
		string(bool value):Base(value ? "true" : "false"){}

		string operator +(const string& other) const {
			return (std::string)*this + (std::string)other;
		}

		explicit operator float() const {
			try {
				return stof(*this);
			} catch(...) {
				return 0;
			}
		}
		explicit operator int() const {
			try {
				return stoi(*this);
			} catch(...) {
				return 0;
			}
		}
		explicit operator bool() const {
			if (!Base::size())
				return 0;
			if ((*this)[0] == '0'
				|| std::equal(Base::begin(), Base::end(),
					"false", &"false"[5],
					[](char a, char b) {
						return std::tolower(a) == b;})
				) return 0;
			return 1;
		}
	};

	string operator ""_s(const char *str, size_t n) {
		return string(std::operator ""s(str, n));
	}

	class column {
		public:
		enum Type {
			INVALID,
			FLOAT,
			INT,
			STRING,
			BOOL
		};
		public:
		column(const string& value):m_String(value)
		, m_Type(STRING){}
		column(string&& value)
		: m_String(std::forward<string>(value))
		, m_Type(STRING){}
		column(float value):m_Float(value), m_Type(FLOAT){}
		column(int value):m_Int(value), m_Type(INT){}
		column(bool value):m_Bool(value), m_Type(BOOL){}
		column(const column& other) {
			m_Type = other.m_Type;
			switch(other.m_Type) {
				break; case STRING:
					new(&m_String)string(other.m_String);
				break; case INT:
					m_Int = other.m_Int;
				break; case FLOAT:
					m_Float = other.m_Float;
				break; case BOOL:
					m_Bool = other.m_Bool;
				break; default:
					throw corrupted();
			}
		}
		column(column&& other) {
			m_Type = other.m_Type;
			switch(other.m_Type) {
				break; case STRING:
					new(&m_String)string(std::move(other.m_String));
				break; case INT:
					m_Int = other.m_Int;
				break; case FLOAT:
					m_Float = other.m_Float;
				break; case BOOL:
					m_Bool = other.m_Bool;
				break; default:
					throw corrupted();
			}
		}

		column& operator =(int value) {
			clean();
			m_Type = INT;
			m_Int = value;
			return *this;
		}

		column& operator =(float value) {
			clean();
			m_Type = FLOAT;
			m_Float = value;
			return *this;
		}

		column& operator =(bool value) {
			clean();
			m_Type = BOOL;
			m_Float = value;
			return *this;
		}

		column& operator =(const string& value) {
			clean();
			m_Type = STRING;
			new((void *)&m_String)string(value);
			return *this;
		}

		column& operator =(const column& other) {
			clean();
			m_Type = other.m_Type;
			switch(other.m_Type) {
				break; case STRING:
					new(&m_String)string(std::move(other.m_String));
				break; case INT:
					m_Int = other.m_Int;
				break; case FLOAT:
					m_Float = other.m_Float;
				break; case BOOL:
					m_Bool = other.m_Bool;
				break; default:
					throw corrupted();
			}
			return *this;
		}

		explicit operator string() const {
			check_valid();
			switch (m_Type) {
				case FLOAT:
					return (string)m_Float;
				case INT:
					return (string)m_Int;
				case STRING:
					return (string)m_String;
				case BOOL:
					return (string)m_Bool;
				default:
					throw corrupted();
			}
		}
		explicit operator int() const {
			check_valid();
			switch (m_Type) {
				case FLOAT:
					return (int)m_Float;
				case INT:
					return (int)m_Int;
				case STRING:
					return (int)m_String;
				case BOOL:
					return (int)m_Bool;
				default:
					throw corrupted();
			}
		}
		explicit operator float() const {
			check_valid();
			switch (m_Type) {
				case FLOAT:
					return (float)m_Float;
				case INT:
					return (float)m_Int;
				case STRING:
					return (float)m_String;
				case BOOL:
					return (float)m_Bool;
				default:
					throw corrupted();
			}
		}
		explicit operator bool() const {
			check_valid();
			switch (m_Type) {
				case FLOAT:
					return (bool)m_Float;
				case INT:
					return (bool)m_Int;
				case STRING:
					return (bool)m_String;
				case BOOL:
					return (bool)m_Bool;
				default:
					throw corrupted();
			}
		}
		Type type() const {
			return m_Type;
		}
		~column() {
			clean();
		}
		private:
		void clean() {
			if (m_Type == STRING)
				m_String.~string();
		}
		void check_valid() const {
			if (m_Type == INVALID)
				throw uninit();
		}
		static std::runtime_error uninit() {
			return std::runtime_error{"attempt to "
			"access uninitialized value of type column"};
		}
		static std::runtime_error corrupted() {
			return std::runtime_error{"attempt to "
			"access corrupted value of type column"};
		}
		private:
		union {
			float m_Float;
			int m_Int;
			string m_String;
			bool m_Bool;
		};
		Type m_Type = INVALID;
	};

	class table : public std::vector<row> {
	public:
	using Base = std::vector<row>;
	using Base::Base;

	operator row() {
		row temp;
		temp.reserve(Base::size());
		for (const auto& e : *this) {
			for (const auto& l : e)
				temp.push_back(l);
		}
		return temp;
	}
	};
	std::ostream& operator << (std::ostream& stream, bool other) {
		stream << (other ? "true" : "false");
		return stream;
	}
	std::ostream& operator << (std::ostream& stream, const column& other) {
		switch (other.type()) {
				break; default:
				case column::Type::STRING:
				stream << (string)other;
				break; case column::Type::FLOAT:
				stream << (float)other;
				break; case column::Type::INT:
				stream << (int)other;
				break; case column::Type::BOOL:
				stream << ((bool)other ? "true" : "false");
		}
		return stream;
	}
	template<class T>
	void print_one(const T& arg) {
		std::cout << arg;
	}
	template<>
	void print_one<bool>(const bool& arg) {
		std::cout << (arg ? "true" : "false");
	}
	template<>
	void print_one<row>(const row& arg) {
		std::cout << "[";
		if (!arg.size()) {
			std::cout << "]";
			return;
		}
		print_one(arg.front());
		for (auto begin = arg.begin(), end = arg.end()
			; ++begin != end;) {
			std::cout << ", ";
			print_one(*begin);
		}
		std::cout << "]";
	}
	template<>
	void print_one<table>(const table& arg) {
		std::cout << "{";
		if (!arg.size()) {
			std::cout << "}";
			return;
		}
		print_one(arg.front());
		for (auto begin = arg.begin(), end = arg.end()
			; ++begin != end;) {
			std::cout << "\n ";
			print_one(*begin);
		}
		std::cout << "}\n";
	}
	template<class T, class...Args>
	void print(const T& arg, const Args&... args) {
		print_one(arg);
		(print_one(args), ...);
	}
	template<class T>
	T scan() {
		T value;
		while (!(std::cin >> value)) {
			std::cin.clear();
			std::cin.ignore(1);
		}
		return value;
	}
	template<>
	string scan<string>() {
		std::string value;
		while (!(std::cin >> value)) {
			std::cin.clear();
			std::cin.ignore(1);
		}
		return string(value);
	}
	template<>
	column scan<column>() {
		string temp = scan<string>();
		try {
			return column(std::stoi(temp));
		}catch(...){}
		try {
			return column(std::stof(temp));
		}catch(...) {}
		return column(std::move(temp));
	}
	template<>
	bool scan<bool>() {
		string temp = scan<string>();
		return (bool)temp;
	}
}
)";
