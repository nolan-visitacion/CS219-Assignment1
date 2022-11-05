//Coded By Nolan Visitacion on 09/30/2022

#include "hex.h"

 Hex::Hex(){}

 Hex::Hex(int newValue) {
      value = newValue;
 }

 uint32_t Hex::getValue(){
  return value;
 }

 std::istream& operator>>(std::istream& input, Hex &hex){      
   input >> hex.value;
   return input;
 }

std::ostream& operator<<(std::ostream& output, Hex &hex){     
   output << hex.value;
   return output;
 }

