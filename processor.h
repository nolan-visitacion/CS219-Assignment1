//Coded By Nolan Visitacion on 11/4/2022

#ifndef PROCESSOR_H
#define PROCESSOR_H

#include <iostream>
#include "hex.h"

class Processor : public Hex  {
    u_int32_t result;
    public:
        Processor();                                                               
        ~Processor(){};                                                               

        Hex ADD(Hex, Hex);
        Hex SUB(Hex, Hex);
        Hex ASR(Hex, Hex);
        Hex LSR(Hex, Hex);
        Hex LSL(Hex, Hex);
        Hex AND(Hex, Hex);
        Hex NOT(Hex);
        Hex ORR(Hex, Hex);
        Hex XOR(Hex, Hex);                                                     
};  

#endif //PROCESSOR