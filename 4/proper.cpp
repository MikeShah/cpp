/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 sscanf.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g sscanf.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file scanf.cpp
#include <iostream> // I/O stream library
#include <string>   // std::string object

// Entry point to program 'main' sscanf
int main(int argc, char* argv[]){

    std::string formatted_data = "11 13 15\n5 7 8";

    int values[6];
    // Read in 3 values at a time
    for(int i=0; i < 6; i+=3){
        if(i==0){
            std::sscanf(formatted_data.c_str(),"%d %d %d", &values[i],
                                                       &values[i+1],
                                                       &values[i+2]);
        }else{ // an 'okay solution for our problem' 
               // we learned how to break our string down
               // into two pieces.
            int index = formatted_data.find('\n');
            std::string nextString = formatted_data.substr(index);
            std::sscanf(nextString.c_str(),"%d %d %d", &values[i],
                                                       &values[i+1],
                                                       &values[i+2]);

        }
    }

    // Print out all of the values
    for(int i=0; i < 6; i++){
        std::cout << values[i] << std::endl;
    }

    return 0;
}

