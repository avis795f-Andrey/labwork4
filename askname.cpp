#include <iostream>
#include <string>

void askname(string first, string last) {
	std::cout << "Enter your first name: ";
	std::cin >> first;
	first.resize(first.size() + 1); first[first.size() - 1] = ' '; // Adds a space to the end
	
	std::cout << "Now enter your last name: ";
	std::cin >> last;
}