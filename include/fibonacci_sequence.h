/**
* @file	 fibonacci_sequence.h
* @author Humayun Kabir, Instructor, CSCI 261, VIU
* @version 1.0.0
* @date July 20, 2021
*
* Defines a function that accepts an array to place fibonacci sequence values and an index of
* fibonacci sequence (there is max limit of the index).
* This function computes all the fibonacci sequence values for index 0 to max_index and
* places the sequence values at appropriate position into the array.
*
* It is expected that this function will be implemented in ARM assembly language.
* Although the assembly code will not require to include this header file, the
* implementer will comply with the following prototype:
* 	 		
* 	 	int fibonacci_sequence(int fibonacci_seq[], int max_index);
*
* Assembly code of this function will receive the parameter 'fibonacci_seq', i.e., address of
* the integer array, through ARM register x0 and the parameter 'fib_index' through ARM register x1.
* The caller of this function has to make sure it has passed the address of the integer array to
* ARM register x0 and the 'max_index' value to ARM register x1.
*
* Implementer can use following hints to implement this function.
* Implementer has full freedom to implement the function his own way complying with the function
* prototype given above. 
*/


/*
 * Data segment
 */
//Define data segment using assembler directive, if necessary
//Define data using assembler directives, if necessary

/*
* Code segment
*/			
//Define the code segment using assembler directive
//Define the name of the function global using assembler directive
			

//Start implementing the function with the function name as a label in your assembly code 
//Save the return address onto stack

//Move the max index value from w1 to w8
//Compare the max index value with zero
//Branch to 'one', if the max index is not equal to zero
//If the max index is equal to zero, its fibonacci sequence value is also zero, 
//place zero at zero index of the array and branch to done to return from the function appropriately

//Define label 'one' to handle max index value equal to 1 case
//Compare the max index value with one
//Branch to 'seq' if the max index is not equal to one
//If the max index is equal to one, its fibonacci sequence value
//is also one, place zero at zero index and one at one index of the array
//Branch to the end of the function to return from the function appropriately


//Define label 'seq' to handle max index value is greater than 1 case
//Use x9 as your loop counter and initialize it to 1
			
		
//Use x2 to keep track of your fib[n-2] and initialize it to 0
//Place w2 value (0) at the zero index of the array
//Use x1 to keep track of your fib[n-1] and initialize it to 1
//Place w1 value (1) at one index of the array
//Use w3 to hold your fib[n] and initialize it to 0


//Define the beginning of a loop with an appropriate loop label
//Compare loop counter with the max index value
//End the loop if they are equal by branching to the end of the function
//Compute fib[n] = fib[n-1] + fib[n-2]
//Move fib[n-1] to fib[n-2] 
//Move fib[n] to fib[n-1]		
//Increment the loop counter
//Place fib[n] at the appropriate position in the array
//Branch to the beginning of the loop


//Define the end of the function with an appropriate label
//Retrieve the return address from the stack
//Return from the function


