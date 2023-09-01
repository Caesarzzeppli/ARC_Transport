/**
* @file	 fibonacci_dynamic.h
* @author Humayun Kabir, Instructor, CSCI 261, VIU
* @version 1.0.0
* @date July 20, 2021
*
* Defines a function that accepts an index of fibonacci sequence (there is max limit of the index) 
* and computes the fibonacci sequence value of the index using dynamic programming technique.
*
* It is expected that this function will be implemented in ARM assembly language.
* Although the assembly code will not require to include this header file, the
* implementer will comply with the following prototype:
* 	 		
* 	 	int fibonacci_dynamic(int fib_index);
*
* Assembly code of this function will receive the parameter 'fib_index' through ARM register x0.
* The caller of this function has to make sure it has passed the 'fib_index' value to ARM register x0.
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
//Compare the index with zero
//If it is zero, return it as the return value of the function and branch to the end of the function
//Compare the index value with one
//If it is one, return it as the return value of the function and branch to the end of the function
			
//Move the index value from x0 to x4
//Use x3 as your loop couner and initialize it to 1
			
//Use x2 to keep track of your fib[n-2] and initialize it to 0
//Use x1 to keep track of your fib[n-1] and initialize it to 1
//Use x0 to hold your fib[n] and initialize it to 0
			
//Define the beginning of a loop with an appropriate loop label
//Compare loop counter with the current index value
//End the loop if they are equal by branching to the end of the function
//Compute fib[n] = fib[n-1] + fib[n-2]
//Move fib[n-1] to fib[n-2] 
//Move fib[n] to fib[n-1]		
//Increment the loop counter
//Branch to the beginning of the loop

//Define the end of the function with an appropriate label
//Retrieve the return address from the stack
//Return from the function

