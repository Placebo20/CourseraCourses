#include <iostream>
#include <map>
#include <string>

int main() {
	int countOfCommands = 0;
	std::cout << "Enter count of commands: ";
	std::cin >> countOfCommands;

	std::string command;
	std::string newCapitalName;
	std::string capitalName;
	std::string newCountryName;
	std::string countryName;

	std::map<std::string, std::string> capitals;

	for(int i = 0; i < countOfCommands; i++){
		std::cin >> command;
		if(command == "CHANGE_CAPITAL"){
			std::cin >> newCountryName;
			std::cin >> newCapitalName;
			if(capitals.find(newCountryName) == capitals.cend()){
				capitals[newCountryName] = newCapitalName;
				std::cout << "Introduce new country " << newCountryName << " with capital " << newCapitalName << std::endl;
			} else if (capitals[newCountryName] == newCapitalName) {
				std::cout << "Country " << newCountryName << " has not changed its capital" << std::endl;
			} else {
				std::cin >> countryName;
				capitalName = capitals[countryName];
				capitals[countryName] = newCapitalName;
				std::cout << "Country " << countryName << " has changed its capital from " << capitalName << " to " << newCapitalName << std::endl;
			}
		} else if(command == "RENAME") {
			std::cin >> countryName;
			std::cin >> newCountryName;
			auto it = capitals.find(countryName);
			if(it != capitals.cend()){
				if(capitals.find(newCountryName) == capitals.cend()){
					capitals[newCountryName] = it->second;
					capitals.erase(it);
					std::cout << "Country "<< countryName << " with capital " << capitals[newCountryName] << " has been renamed to " << newCountryName << std::endl;
				}
				else {
					std::cout << "Incorrect rename, skip, country with name " << newCountryName << " is already exist" << std::endl;
				}
			} else {
				std::cout << "Incorrect rename, skip, country with name " << countryName << "doesn't exist" << std::endl;
			}

		} else if(command == "ABOUT") {
			std::cin >> countryName;
			if(capitals.find(countryName) == capitals.cend()){
				std::cout << "Country " << countryName << " doesn't exist" << std::endl;
			} else {
				std::cout << "Country " << countryName << " has capital " << capitals[countryName] << std::endl;
			}
		} else if(command == "DUMP"){
			for(const auto& [country, capital] : capitals){
				std::cout << country << "/" << capital << std::endl;
			}
		}
	}

	return 0;
}
