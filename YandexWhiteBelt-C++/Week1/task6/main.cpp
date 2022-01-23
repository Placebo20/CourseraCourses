#include <iostream>

int main(){
	int a, b;
	std::cout << "Enter down bound: "; std::cin >> a;
	std::cout << "Enter top bound: "; std::cin >> b;
	for (int i = a; i <= b; i++) {
		if (i % 2 == 0) {
			std::cout << i << ' ';
		}
	}
	return 0;
}
