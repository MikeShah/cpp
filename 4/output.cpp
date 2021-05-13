/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 output.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g output.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file output.cpp
#include <iostream> // I/O stream library
#include <string>   // std::string object
#include <fstream>  // Filestream objects

// Entry point to program 'main' output
int main(int argc, char* argv[]){

    // (O)utput (F)ile stream is the way to read ofstream.
    std::ofstream myFile("output.txt");
    if(myFile.is_open()){
        // We can use the same 'stream' operator, but this
        // time on our myFile to output data.
        myFile << "Line 1 of our file\n";
        myFile << "Line 2 of our file\n";
        myFile << "Line 3 of our file\n";
        // Close the file when we are done with it.
        myFile.close();
    }else{
        std::cout << "Unable to create file\n";
    }


    return 0;
}

