#include <iostream>
#include <string>

int main() {
	std::string first, second, third;
	std::cin >> first >> second >> third;
	if(first <= second && first <= third)
		std::cout << first << std::endl;
	else if(second <= first && second <= third)
		std::cout << second << std::endl;
	else
		std::cout << third << std::endl;
}
