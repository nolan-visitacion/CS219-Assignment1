//Coded By Nolan Visitacion on 09/30/2022

#include <iostream>
#include <fstream>
#include <string>
#include <bitset>

#include "hex.h"
#include "processor.h"
using namespace std;

void performOperation(std::string, Hex, Hex);

int main () {

    Hex operand1, operand2;
    std::string operation;
    std::ifstream file("Programming-Project-2.txt");
    std::cout << std::uppercase;

    if(!file.is_open()){                                                                                
        std::cout << "Unable to open file." << std::endl;   
                                                        
    }
    else {
        while (file.peek() != EOF) {                                                                               
            file >> operation;
            if (operation == "NOT"){
                file >> std::hex >> operand1;
                operand2 = 0;
            }
            else {
                file >> std::hex >> operand1 >>  std::hex >> operand2;
            }
            
            std::cout << "~~~~~~~~~~~~~~~~~" << std::endl;
            if (operation == "ASR" || operation == "LSR" || operation == "LSL"){
                std::cout << operation << " 0x" << std::hex << operand1 << " " << operand2 << std::endl;
            }
            else {
                std::cout << operation << " 0x" << std::hex << operand1 << " 0x" << operand2 << std::endl;
            }
            performOperation(operation, operand1, operand2);
        }
    }
    file.close();                                                                               

    return 0;
}

void performOperation(std::string operation, Hex operand1, Hex operand2) {
    Processor processor;
    Hex result;

    if(operation == "AND") {
        result = processor.AND(operand1, operand2);
    }
    if(operation == "ADD") {
        result = processor.ADD(operand1, operand2);
    }
    if(operation == "ASR") {
        result = processor.ASR(operand1, operand2);
    }
    if(operation == "LSR") {
        result = processor.LSR(operand1, operand2);
    }
    if(operation == "LSL") {
        result = processor.LSL(operand1, operand2);
    }
    if(operation == "NOT") {
        result = processor.NOT(operand1);
    }
    if(operation == "ORR") {
        result = processor.ORR(operand1, operand2);
    }
    if(operation == "SUB") {
        result = processor.SUB(operand1, operand2);
    }
    if(operation == "XOR") {
        result = processor.XOR(operand1, operand2);
    }

    std::cout << "Result: 0x" << result << std::endl;
    std::cout << "~~~~~~~~~~~~~~~~~" << std::endl;
    std::cout << std::endl;
}