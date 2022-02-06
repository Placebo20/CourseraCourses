#include <iostream>
#include <vector>

std::vector<int> Reverse(const std::vector<int>& v){
	std::vector<int> reversedV;
	for(int i = v.size() - 1; i >= 0; i--){
		reversedV.push_back(v[i]);
	}
	return reversedV;
}

int main(){
	std::vector<int> v = {1, 5, 3, 4, 2};
	std::vector<int> reversedV = Reverse(v);
	for(auto i : reversedV){
		std::cout << i << " ";
	}
	return 0;
}
