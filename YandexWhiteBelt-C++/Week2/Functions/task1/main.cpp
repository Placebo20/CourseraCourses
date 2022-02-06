#include <iostream>

int Factorial(int x) {
	int i = 1;
	for(int j = 1; j <= x; j++){
		i *= j;
	}
	return i;
}

int main() {
	std::cout << Factorial(4) << std::endl;
	std::cout << Factorial(1) << std::endl;
	std::cout << Factorial(-2) << std::endl;
	return 0;
}
