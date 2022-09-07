#include <iostream>
#include <vector>
#include <algorithm>

int main(){

	std::vector<int> collection {1,2,3,4};
	collection.push_back(5);

	// lambda function
	// 'auto' automatically deduces the return type from the function
	//  auto in general, allows us to use C++ 'more-like' a dynamic language.
	//  (But keep in mind, C++ is a strongly statically typed language)
	auto println = [] (const auto& element){
					std::cout << element << std::endl;
					};

	// Call the function 'println' that we've made, on each element.
	std::for_each(cbegin(collection),cend(collection),println);

	return 0;
}



