//Written by Nolan Visitacion 11/04/22

#include "processor.h"

 Processor::Processor(){}
 
 Hex Processor::ADD(Hex operand1, Hex operand2){
  result = operand1.getValue() + operand2.getValue();
  return result;
 }

 Hex Processor::SUB(Hex operand1, Hex operand2){
  result = operand1.getValue() - operand2.getValue();
  return result;
 }

 Hex Processor::LSL(Hex operand, Hex shift){
   result = operand.getValue() << shift.getValue();
   return result;
 }

 Hex Processor::LSR(Hex operand, Hex shift){
   return (operand.getValue() >> shift.getValue());
 }

 Hex Processor::ASR(Hex operand, Hex shift){
   int32_t shiftValue = operand.getValue();
   return (shiftValue >> shift.getValue());
 }

 Hex Processor::AND(Hex operand1, Hex operand2){
  return (operand1.getValue() & operand2.getValue());
 }

 Hex Processor::NOT(Hex operand){
  return (~operand.getValue());
 }

 Hex Processor::XOR(Hex operand1, Hex operand2){
  return (operand1.getValue() ^ operand2.getValue());
 }

 Hex Processor::ORR(Hex operand1, Hex operand2){
  return (operand1.getValue() | operand2.getValue());
 }
