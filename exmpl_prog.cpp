#include <iostream>
#include <string>

#include "askname.h"

int main() {
	string first, last;
	
	askname(first, last);
	
	std::cout << "Hi, " << first << last;
	
	return 0;
}