/**
* @file	 show_fibonacci_seq.h
* @author Humayun Kabir, Instructor, CSCI 261, VIU
* @version 1.0.0
* @date July 20, 2021
*
* Defines a function that accepts an array of integer (with fibonacci sequence values in it) and 
* the max index of the array as its paramters and prints the values from the array on the screen.
*
* It is expected that this function will be implemented in ARM assembly language.
* Although the assembly code will not require to include this header file, the
* implementer will comply with the following prototype:
* 	 		
* 	 	int show_fibonacci_seq(int fibonacci_seq[], int max_index);
*
* Assembly code of this function will receive the parameter 'fibonacci_seq', i.e., address of
* the integer array, through ARM register x0 and the parameter 'fib_index' through ARM register x1.
* The caller of this function has to make sure it has passed the address of the integer array to
* ARM register x0 and the 'max_index' value to ARM register x1.
*
* Implementer can use following hints to implement this function.
* Implementer has full freedom to implement the function his own way complying with the function
* prototype given above. 
*
*/


/*
 * Data segment
 */
//Define data segment using assembler directive
//Define data to initialize with the print format for printf function using assembler directives

/*
* Code segment
*/			
//Define the code segment using assembler directive
//Define the name of the function global using assembler directive
			

//Start implementing the function with the function name as a label in your assembly code 
//Save the return address onto stack			
//Array address has been passed through x0, copy it to x3
//Max index has been passed through x1, copy it to x4
//Use x1 as the loop counter and initialize it to zero

//Define the beginning of a loop with an appropriate loop label
//Compare loop counter value with the max index value
//End the loop if they are equal by branching to the end of the function
//Assign the address of the formatted string to x0 to pass it to printf function
//Assign w2 the fibonacci sequence value pointed by index x1 from the array
//Save current index value in x1 onto stack before calling printf function
//Save the address of fibonacci sequence array (in x3) onto stack before calling printf function		
//Save fibonacci sequence array max index (in x4) onto stack before calling printf function
//Call printf() function
//Retrive fibonacci sequence array index limit from the stack into x4
//Retrive the address fibonacci sequence array from the stack into x3
//Retrive current loop counter value from the stack into x1
//Increment the loop counter
//Branch to the beginning of the loop


//Define the end of the function with an appropriate label
//Retrieve the return address from the stack
//Return from the function

