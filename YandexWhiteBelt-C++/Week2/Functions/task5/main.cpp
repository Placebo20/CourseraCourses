#include <iostream>
#include <string>
#include <vector>

void MoveStrings(std::vector<std::string>& source, std::vector<std::string>& destination){
	for(int i = 0; i < source.size(); i++){
		destination.push_back(source[i]);
	}
	source.clear();
}

int main() {
	std::vector<std::string> source = {"a", "b", "c"};
	std::vector<std::string> destination = {"z"};
	MoveStrings(source, destination);
	for(auto i : destination){
		std::cout << i << " ";
	}
	return 0;
}
