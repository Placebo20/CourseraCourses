#include <iostream>

void updateIfGreater(int& a, int& b){
	if(a > b){
		b = a;
	} else if(b > a){
		a = b;
	}
}

int main() {
	int a = 2;
	int b = 4;
	std::cout << "Before changing: a = " << a << " b = " << b << std::endl;
	updateIfGreater(a, b);
	std::cout << "After changing: a = " << a << " b = " << b << std::endl;
	return 0;
}
