/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 input.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g input.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file input.cpp
#include <iostream> // I/O stream library
#include <string>   // std::string object
#include <fstream>  // Filestream objects

// Entry point to program 'main' input
int main(int argc, char* argv[]){

    std::string line;
    // (I)nput (F)ile stream is the way to read ifstream.
    std::ifstream myFile("text.txt");
    if(myFile.is_open()){
        // Read the file until the end
        while(std::getline(myFile,line)){
            std::cout << line << std::endl;
        }
        // Close the file when we are done with it.
        myFile.close();
    }else{
        std::cout << "Unable to open file\n";
    }


    return 0;
}

