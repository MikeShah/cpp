/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 insights.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g insights.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file insights.cpp
#include <iostream> // I/O stream library

template<class T>
T squareTemplated(T x){
    return x*x;
}

// Handling a special situation
template<>
bool squareTemplated<bool>(bool x)
{
	std::cout << "bool version" << std::endl;
	// Always return false when handling booleans
	// alternative...maybe just through an error...
	return false;
}

// Entry point to program 'main' insights
int main(int argc, char* argv[]){

    std::cout << squareTemplated<int>(5) << std::endl;
    std::cout << squareTemplated<float>(5.0f) << std::endl;
    std::cout << squareTemplated<bool>(1) << std::endl;

    return 0;
}

