#include <iostream>
#include <cmath>

int main(){
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	std::cout << "Input a: "; std::cin >> a;
	std::cout << "Input b: "; std::cin >> b;
	std::cout << "Input c: "; std::cin >> c;
	double x1, x2 = 0;
	if(a != 0){
		int D = b*b - 4 * a * c;
		std::cout << "sqrt(D) = " << sqrt(D) << std::endl;
		if(D < 0){
			std::cout << "No roots" << std::endl;
			return 0;
		} else if(D == 0){
			std::cout << "The equation has only one root"<< std::endl;
			x1 = (-b + sqrt(D)) / (2 * a);
			x2 = (-b - sqrt(D)) / (2 * a);
			if(x1 > x2) std::cout << "x1 = " << x1 << std::endl;
			else std::cout << "x2 = " << x2 << std::endl;

		} else {
			std::cout << "The equation has two roots" << std::endl;
			x1 = (-b + sqrt(D)) / (2 * a);
			x2 = (-b - sqrt(D)) / (2 * a);
			std::cout << "x1 = " << x1 << "; x2 = " << x2 << std::endl;
		}
	} else {
		if(b != 0){
			std::cout << "The equatioon has only one root (a = 0, b != 0)" << std::endl;
			x1 = -c / b;
		} else {
			std::cout << "The equation has no solutions because a = 0, b = 0" << std::endl;
		}
	}
	return 0;
}
