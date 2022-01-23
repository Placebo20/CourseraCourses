#include <iostream>

int main() {
	int num1, num2;
	std::cout << "Input first number: "; std::cin >> num1;
	std::cout << "Input second number: "; std::cin >> num2;
	while(num1 > 0 && num2 > 0){
		if (num1 > num2) {
			num1 %= num2;
		} else {
			num1 %= num2;
		}
	}
	std::cout << "GCD: " << num1 + num2 << std::endl;
}
