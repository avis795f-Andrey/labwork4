#include <iostream>
#include <string>

#include "askname.h"

int main() {
	string first, last;
	
	askname(first, last);
	
	std::cout << "Hello, " << first << last;
	
	return 0;
}