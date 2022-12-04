# CS219-Assignment1

What This Program Does:

    This executable opens and reads a .txt file that, when given an operation, registers, and/or immediate values, performs the operation and stores the result in the proper registers.  

How This Program Works:
    
    Each individual line is read and the operation is stored in string "operation". If statements then check the value of operation. If the operation is a "MOV", the program saves the next two items as "registerA" and "operand1". If the operation is a shift, the items are saved as "registerA", "registerB" and "operand1". Any any other case, the items are saved as "registerA", "registerB", and "registerC". 

    After the line has been read from the file, another if else statement checks to see if the operation is an ASR, LSR, or LSL and if they are, displays the operation and operand 2 without the prefix "0x" the shift is meant to be a regular integer value. If the operation is MOV, the program prints the operation, registerA, and the immediate value with the prefix "0x". In all other cases, the program prints all three registers.

    Once the line has been copied from the file and printed, the more if statements again check the value of operation and call the matching processor function on the processor object.

    The processor functions receive the registerA, registerB, and registerC strings and converts the 2nd character to an integer using the sstream function atoi(). An array of hex objects is used as an abstraction for the registers and holds hex values. When an operation is performed, the converted int values are used to access the corressponding elements. The ADD operation, for example, takes the values of registers[b] and registers[c], adds them together, and stores the value in registers[a].

    Finally, the program prints the value of all registers using the displayRegisters processor function.
