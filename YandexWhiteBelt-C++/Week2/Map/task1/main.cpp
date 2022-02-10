#include <iostream>
#include <map>
#include <string>

int main(){
	int countOfCommands = 0;
	std::cout << "Enter count of commands: ";
	std::cin >> countOfCommands;

	std::string firstWord, secondWord;
	std::map<char, int> anno1;
	std::map<char, int> anno2;
	bool isAnnogram;

	for(int i = 0; i < countOfCommands; i++){
		std::cout << "=================" << std::endl;
		isAnnogram = false;

		std::cout << "Enter words \n[1]: ";
		std::cin >> firstWord;
		std::cout << "[2]: ";
		std::cin >> secondWord;


		if(firstWord.size() == secondWord.size()){
			for(int i = 0; i < firstWord.size(); i++){
				anno1[firstWord[i]]++;
				anno2[secondWord[i]]++;
			}
		}

		for(const auto& [key, value] : anno1){
			if(value == anno2[key]){
				isAnnogram = true;
			} else {
				isAnnogram = false;
			}
		}

		std::cout << isAnnogram << std::endl;
		anno1.clear();
		anno2.clear();
	}
	std:: cout << "================\nFINISH" << std::endl;
	return 0;
}
