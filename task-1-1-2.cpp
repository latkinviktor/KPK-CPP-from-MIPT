#include <iostream>
#include <string>
int main() {
	std::string arg1, arg2;
	std::cin >> arg1 >> arg2;
	std::cout << (arg1 == arg2 ? arg1 : "1");
}