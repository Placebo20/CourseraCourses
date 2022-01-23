#include <iostream>

int main() {
	int a, b;
	std::cout << "Input A (a can't be bigger than 1 000 000): "; std::cin >> a;
	std::cout << "Input B (b can't be less than 0 or bigger than 1 000 000):"; std::cin >> b;
	while(b < 0 || b > 1000000){
		std::cout << "Incorrect b value, try again (b can't be less than 0 or bigger than 1 000 000): ";
		std::cin >> b;
	}
	while(a > 1000000){
		std::cout << "Incorrect a value, try again (a can't be bigger than 1 000 000): ";
		std::cin >> a;
	}

	if(b == 0)
		std::cout << "Impossible" << std::endl;
	else
		std::cout << b / a << std::endl;
}
