//Coded By Nolan Visitacion on 09/30/2022

#ifndef HEX_H
#define HEX_H

#include <iostream>
#include <ostream>
#include <fstream>

class Hex {
        uint32_t value;
    public:
        Hex();                                                                  
        Hex(int);                                                               
        ~Hex(){};                                                               

        uint32_t getValue();

        friend std::istream& operator>>(std::istream& input, Hex& hex);         
        friend std::ostream& operator<<(std::ostream& output, Hex& hex);
};  
#endif //HEX_H