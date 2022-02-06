#include <iostream>
#include <string>

bool isPalindrom(std::string str){
	bool flag = false;
	std::string reversed;
	if(str.length() <= 1){
		flag = true;
	} else{
		for(int i = str.length() - 1; i >= 0; i--){
			reversed.push_back(str[i]);
		}
		for(int i = 0; i < str.length() - 1; i++){
			if(str[i] == reversed[i]){
				flag = true;
			} else {
				flag = false;
				break;
			}
		}
	}
	return flag;
}

int main(){
	std::cout << isPalindrom("madam") << std::endl;
	std::cout << isPalindrom("gentlemen") << std::endl;
	std::cout << isPalindrom("X") << std::endl;
	return 0;
}
