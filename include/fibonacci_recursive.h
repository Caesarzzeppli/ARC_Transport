/**
* @file	 fibonacci_recursive.h
* @author Humayun Kabir, Instructor, CSCI 261, VIU
* @version 1.0.0
* @date July 20, 2021
*
* Defines a function that accepts an index of fibonacci sequence (there is max limit of the index) 
* and computes the fibonacci sequence value of the index using recursive function call technique.
*
* It is expected that this function will be implemented in ARM assembly language.
* Although the assembly code will not require to include this header file, the
* implementer will comply with the following prototype:
* 	 		
* 	 	int fibonacci_recursive(int fib_index);
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
//Adjust the stack pointer to hold return address, current index value, and the temporary 
//results (fibonacci sequence values from recursive calls).
//Save the return address at the appropriate address onto stack			
//Save the index value at the appropriate address onto stack
//Compare the index value with zero.
//If the index value is equal to zero, it's a base case branch to base case
//Compare the index value with one
//If the index value is equal to one, it's a base case, follow through
//If not it is a recursive case, branch to recursion case

//Define appropriate label to handle the base case.
//For the base case, fibonacci sequence value is equal to its index value
//Save the fibonacci sequence value of the index onto stack
//Branch to the end of the function in order to return from the current call 
//with appropriate return value.


//Define appropriate lable to handle recursion case.
//Retrive the current index value from the stack into an ARM register
//Decrement the index value by 1 and pass it to ARM register x0.
//Recursively call the function with the decremented index
//Save the result of the recursive call return at the appropriate address onto stack
//Retrive the current index value from the stack into an ARM register again
//Decrement the index value by 2 and pass it ARM register x0.
//Recursively call the function again with the decremented index
//Retrive the previously saved result from the stack into an ARM register
//Add two results from the recursive returns to compute fibonacci sequence
//value of the current index (undecremented)
//Save the computed fibonacci sequence value of the current index at the appropriate 
//address onto stack


//Define the end of the function with an appropriate label
//Retrive the fibonacci sequence value of the current index from stack into ARM register x0
//Retrieve the return address from the stack
//Adjust the stack pointer to its original address before this function was called
//Return from the function

