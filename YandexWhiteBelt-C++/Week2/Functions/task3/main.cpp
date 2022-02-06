#include <iostream>
#include <string>
#include <vector>

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

std::vector<std::string> filterPalindrom(std::vector<std::string> words, int minLength){
	std::vector<std::string> resultVector;
	for(int i = 0; i < words.size(); i++){
		if(isPalindrom(words[i]) && words[i].length() >= minLength){
			resultVector.push_back(words[i]);
		}
	}
	return resultVector;
}

int main(){
	std::vector<std::string> vec = {"abacaba", "aba"};
	std::vector <std::string> resultVector = filterPalindrom(vec, 5);
	for(int i = 0; i < resultVector.size(); i++){
		std::cout << resultVector[i] << " ";
	}
	std::cout << std::endl;
	vec = {"abacaba", "aba"};
	resultVector = filterPalindrom(vec, 2);
	for(int i = 0; i < resultVector.size(); i++){
		std::cout << resultVector[i] << " ";
	}
	std::cout << std::endl;
	vec = {"weew", "bro", "code"};
	resultVector = filterPalindrom(vec, 4);
	for(int i = 0; i < resultVector.size(); i++){
		std::cout << resultVector[i] << " ";
	}
	return 0;
}
