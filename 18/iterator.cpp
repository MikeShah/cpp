// iterator.cpp
// g++ -std=c++20 iterator.cpp -o prog
#include <iostream>
#include <vector>


int main(){

	std::vector<int> collection {1,2,3};
	collection.push_back(4);

	for(std::vector<int>::iterator it = collection.begin();
							       it != collection.end();
								   ++it){
		std::cout << *it << std::endl;
	}

	return 0;
}
