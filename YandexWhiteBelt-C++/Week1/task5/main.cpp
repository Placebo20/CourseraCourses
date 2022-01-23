#include <iostream>

int main() {
	double n, a, b, x, y; // a < b
	std::cout << "Input original cost of goods(N): "; std::cin >> n;
	std::cout << "Input A value: "; std::cin >> a;
	std::cout << "Input B value: "; std::cin >> b;
	std::cout << "Input X percent discount: "; std::cin >> x;
	std::cout << "Input Y percent discount: "; std::cin >> y;

	if(n > b){
		std::cout << "Original cost is  bigger then B value." << std::endl;
		n *= (1 - y / 100);
		std::cout << "Cost with X discount = " << n << std::endl;
	}else if(n > a){
		std::cout << "Original cost is less then B value and bigger than A value." << std::endl;
		n *= (1 - x / 100);
		std::cout << "Cost with Y discount = " << n << std::endl;
	}
	else {
		std::cout << "Original cost is less then A value. No discount";
	}
	return 0;
}
