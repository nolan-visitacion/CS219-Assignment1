//Coded By Nolan Visitacion on 09/30/2022

#include <iostream>
#include <fstream>
#include <string>

#include "hex.h"
using namespace std;

int main () {

    Hex hex, hex2, sum;
    std::string operation;
    std::ifstream file("Programming-Project-1.txt");

    if(!file.is_open()){                                                                        //Open the .txt file
        std::cout << "Unable to open file." << std::endl;                                       //Display error message if file cannot be opened    
    }

    while (!file.eof()) {                                                                       //Reads until end of file is reached
    file >> operation >> std::hex >> hex >> hex2;                                               //Reads text file and saves first line as "operation" and next two values as hex values        
    
    std::cout << operation << " 0x" << std::hex << hex << " 0x" << hex2 << std::endl;
    
    sum = hex + hex2;                                                                           //Adds hex1 and hex2 objects. If the sum is greater than either addend, a message is displayed to indicate an overflow.
    if (sum < hex || sum < hex2){                                                  
        std::cout << "There was an overflow." << std::endl;
    }
    else {
    std::cout << "The sum is 0x" << std::hex << sum << std::endl;
}
    }

    file.close();                                                                               //Close .txt file

    return 0;
}