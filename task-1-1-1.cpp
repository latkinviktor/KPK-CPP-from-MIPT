#include <iostream>
#include <map>

int main() {
	int N;
	
	std::map<int, int> myMap;
	
	for (std::cin >> N; N--;) {
		int val;
		std::cin >> val;
		if (myMap.count(val)) {
			myMap[val]++;
		}
		else {
			myMap[val] = 1;
		}
	}

	int sum = 0;
	for (auto iter = myMap.begin(); iter != myMap.end(); iter++) {
		
		sum += iter->second % 2;
	}
	std::cout << (sum < 2);
}