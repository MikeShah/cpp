/////////////////////////////////////////////////
// See preprocessor output: g++ -std=c++17 informationHiding.cpp -
//
// Compile with: g++ -std=c++17 informationHiding.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g informationHiding.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file informationHiding.cpp

struct POD{
    float x,y,z;
private:
    int important;
};

// Entry point to program 'main' informationHiding.cpp
int main(){

    POD object;
    object.x = 1;
    object.y = 1;
    object.z = 1;

    // We want to avoid exposing all of our internals
    // to the user.
    object.important = 7;

    return 0;
}
