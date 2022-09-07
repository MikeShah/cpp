#include <iostream>
#include <algorithm>

int main(){

	std::vector<int> collection {1,2,3,4};
	collection.push_back(5);

	std::for_each(cbegin(collection),cend(collection),[] (const auto& element){
					std::cout << element << std::endl;
					});

	return 0;
}
