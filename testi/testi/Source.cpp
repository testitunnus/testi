#include <iostream>
#include <string>

int main() {
	std::cout << "Hello world" << std::endl;
	std::string name;
	std::cout << "Enter name: ";
	std::cin >> name;
	std::cout << "Hello " << name << std::endl;
	return 0;
}