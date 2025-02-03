#include <iostream>
#include <string>

int main() {
	string name;
	
	std::cout << "Enter your name: ";
	std::cin >> name;
	name[name.size() - 1] = ' '; // Replace the last character with a space
	
	std::cout << "Hello, " << name;
	return 0;
}