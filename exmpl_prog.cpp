#include <iostream>
#include <string>

int main() {
	string first, last;
	
	std::cout << "Enter your first name: ";
	std::cin >> first;
	first.resize(first.size() + 1); first[first.size() - 1] = ' '; // Adds a space to the end
	
	std::cout << "Now enter your last name: ";
	std::cin >> last;
	
	std::cout << first.size() << std::endl; // Debug line
	
	std::cout << "Hello, " << first << last;
	
	return 0;
}