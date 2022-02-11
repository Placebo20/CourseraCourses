#include <iostream>
#include <algorithm>
#include <vector>

int main() {
	int countOfNumbers = 0;
	std::cin >> countOfNumbers;
	std::vector<int> nums(countOfNumbers);
	for(int i = 0; i < countOfNumbers; i++){
		int num;
		std::cin >> num;
		nums[i] = num;
	}
	std::sort(std::begin(nums), std::end(nums), [](int left, int right){return std::abs(left) < std::abs(right);});
	for(const auto& i : nums){
		std::cout << i << " ";
	}
	return 0;
}
