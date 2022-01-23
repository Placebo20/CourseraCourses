#include <iostream>
#include <string>

int main () {
	std::string str;
	std::cin >> str;
	int quantity = 0;
	for(int i = 0; i < str.size(); i++){
		if(str[i] == 'f'){
			quantity++;
		}
		if(quantity == 2){
			std::cout << "Index: " << i << std::endl;
			break;
		}
	}
	if(quantity == 0)
		std::cout << "-2" << std::endl;
	if(quantity == 1)
		std::cout << "-1" << std::endl;
}
