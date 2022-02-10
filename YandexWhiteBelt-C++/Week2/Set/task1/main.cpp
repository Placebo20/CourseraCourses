#include <iostream>
#include <set>

int main(){
	int countOfStrings = 0;
	std::cin >> countOfStrings;
	set<std::string> strings;
	for(int i = 0; i < countOfStrings; i++){
		std::string str;
		std::cin >> str;
		strings.insert(str);
	}
	std::cout << strings.size() << std::endl;
	return 0;
}
