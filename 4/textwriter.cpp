// g++ -std=c++17 -g textwriter.cpp -o prog
// @file textwriter.cpp
#include <iostream>
#include <vector>
#include <string>
#include <fstream>

int main(){

    std::string line = "";

    std::vector<std::string> lines;

    std::cout << "Type: 'quit' to exit " << std::endl;
    // Main loop, that reads in lines
    while(1){
        std::cout << ": ";
        //std::cin >> line;
        std::getline(std::cin,line);
		if(line!="quit"){
        	lines.push_back(line+'\n');
		}else{
			break; // terminate the current loop
		}
    }

    std::ofstream myFile("textWriterOutput.txt");
    if(myFile.is_open()){
        for(int i=0; i < lines.size(); i++){
            myFile << lines[i];
        }
    }else{
        std::cout << "Could not save file...sorry\n";
    }

    return 0;
}


