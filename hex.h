//Coded By Nolan Visitacion on 09/30/2022

#ifndef HEX_H
#define HEX_H

#include <iostream>
#include <ostream>
#include <fstream>

class Hex {
        uint32_t value;
    public:
        Hex();                                                                  //Hex Constructor
        Hex(int);                                                               //Hex Parameterized Constructor
        ~Hex(){};                                                               //Hex Destructor

        Hex operator + (const Hex& rhs);                                        //Addition Operator 
        bool operator < (const Hex& rhs);                                       //Less Than Operator
        friend std::istream& operator>>(std::istream& input, Hex& hex);         //Reading Operator
        friend std::ostream& operator<<(std::ostream& output, Hex& hex);        //Displaying Operator
};  


#endif //HEX_H