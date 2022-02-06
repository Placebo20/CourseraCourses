#include <iostream>
#include <vector>

void Reverse(std::vector<int>& v){
	std::vector<int> bufferVector;
	for(int i = v.size() - 1; i >= 0; i--){
		bufferVector.push_back(v[i]);
	}
	v.clear();
	for(int i = 0; i < bufferVector.size(); i++){
		v.push_back(bufferVector[i]);
	}
}

int main(){
	std::vector<int> v = {1, 5, 3, 4, 2};
	Reverse(v);
	for(auto i : v){
		std::cout << i << " ";
	}
	return 0;
}
