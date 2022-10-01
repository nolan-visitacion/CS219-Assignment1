//Coded By Nolan Visitacion on 09/30/2022

#include "hex.h"

 Hex::Hex() {
 }

 Hex::Hex(int newValue) {
      value = newValue;
 }

 Hex Hex::operator+(const Hex& rhs){                          //Overloading Operator for adding "hex" objects
    Hex sum;
    sum.value = this->value + rhs.value;
    return sum;
 }

  bool Hex::operator<(const Hex& rhs){                         //Overloading Operator for checking if "hex" objects are less than another value
    if (value < rhs.value) {
      return true;
    }
      return false;
 }

std::istream& operator>>(std::istream& input, Hex &hex){      //Overloading Operator for reading "hex" objects
   input >> hex.value;
   return input;
 }

std::ostream& operator<<(std::ostream& output, Hex &hex){     //Overlodaing operator for displaying "hex" objects
   output << hex.value;
   return output;
 }

