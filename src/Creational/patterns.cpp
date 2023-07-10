

#include <iostream>
#include <string>
#include "factory.hpp"
#include "builder.hpp"

int main() {
	builder_test();
	factory_test();
	struct s {
		std::string field;
		int intField;
	};
	auto [stringer, intVal] = s{ "String", 5 };
	std::cout << stringer << " " << intVal << "\n";
	return 0;
}