# CS219-Assignment1

What This Program Does:

    This executable opens and reads a .txt file that, when given an operation and two values in hex form, completes the operation and displays the resulting number in hex form.  

How This Program Works:
    
    Each individual line is read and the operation is stored in string "operation". Because the "NOT" operation only excepts operand, an if statement is used to read either two operands, saved as "operand1" and "operand2" or just one. "operand1". 

    After the line has been read from the file, another if else statement checks to see if the operation is an ASR, LSR, or LSL and if they are, displays the operation and operand 2 without the prefix "0x" the shift is meant to be a regular integer value. In all other cases, the operands have the begin with "0x" to indicate they are hex values.

    Once the line has been copied from the file and printed, the "performOperation" function takes the operation, operand1, and operand2 and, using many if statements to check the operation, performs said operation using functions from the processor class. The result is printed and the process repeats until file.peek() returns the EOF delimiter.

    The processor functions are able to access "Hex" object attributes through the use of the .getValue() functions which returns the value of the attribute.
