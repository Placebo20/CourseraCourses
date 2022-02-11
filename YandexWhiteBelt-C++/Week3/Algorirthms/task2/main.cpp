#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cctype>

int main() {
	int countOfStrings = 0;
	std::cin >> countOfStrings;
	std::vector<std::string> strings(countOfStrings);
	for(int i = 0; i < countOfStrings; i++){
		std::string buffer;
		std::cin >> buffer;
		strings[i] = buffer;
	}
	std::sort(std::begin(strings), std::end(strings), [](std::string left, std::string right){
		return tolower(left) < tolower(right);
	});
}
