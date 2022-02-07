#include <iostream>
#include <vector>

int main(){
	int tempV = 0;
	int sum = 0;
	std::cin >> tempV;
	std::vector<int> temps(tempV);
	for(int& t : temps){
		std::cin >> t;
		sum += t;
	}
	sum /= tempV;
	int count = 0;
	std::vector<int> result;
	for(int i = 0; i < temps.size(); i++){
		if(temps[i] > tempV){
			result.push_back(i);
			count++;
		}
	}
	std::cout << count << std::endl;
	for(int t : result){
		std::cout << t << " ";
	}
	return 0;
}
