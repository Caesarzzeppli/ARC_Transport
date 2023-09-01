/**
* @file	 main.h
* @author Humayun Kabir, Instructor, CSCI 261, VIU
* @version 1.0.0
* @date July 20, 2021
*
* Defines the main function that is the entry point of this application.
* This main function does not need any parameter and it returns zero as the return value.
* This main function calls scanf C library fuction to get user input.
* This main function calls printf C library function to show outout to the user.
* This main function calls all the functions implemented under this application.
*
* It is expected that this function will be implemented in ARM assembly language.
* Although the assembly code will not require to include this header file, the
* implementer will comply with the following prototype:
* 	 		
* 	 	int main();
*
* Implementer can use following hints to implement this function.
* Implementer has full freedom to implement the function his own way complying with the function
* prototype given above. 
*/

/*
* Set up frequently used vlues to sybmols using assembler directive
*/
//Set the size in bytes of each fibonacci value to a symbol
//Set the maximum allowed fibonacci index in this program to a symbol


/*
 * Data segment
 */
//Define data segment using assembler directive
//Define array of integer to hold fibonacci sequence values
//Align the data segment pointer appropriately 
//Define formatted string (const char*) for printf() function to ask user to enter a fibonacci index
//Align the data segment pointer appropriately
//Define tormatted string (const char*) for printf() function to show user entered a fibonacci index
//Aling the data segment pointer appropriately
//Define formatted string (const char*) for printf() function to show the fibonacci value of user entered fibonacci index
//Align the data segment pointer appropriately
//Define formatted string (const char*) for printf() function to show the fibonacci value of user entered fibonacci index
//Align the data segment pointer appropriately
//Define formatted string (const char*) for printf() function to show the fibonacci sequence values up to user entered index
//Align the data segement pointer appropriately
//Define formatted string (const char*) for scanff() function to get user entered fibonacci index
//Align the data segment pointer appropriately
//Define an integer variable to hold user entered fibonacci index


/*
* Code segment
*/			
//Define the code segment using assembler directive
//Define the name of the function global using assembler directive
			

//Start implementing the function with the function name as a label in your assembly code 
//Save the return address onto stack			

//Initialize ARM regigeter x0 with the address of correct format string
//Call printf() function to ask user to enter a Fibonacci Index

//Initialize ARM regigeter x0 with the address of correct format string
//Initialize ARM register x1 with the address of integer variable that was defined to hold user input
//Call scanf() function to take user input (fibonacci index)

//Initialize ARM regigeter x0 with the address of correct format string
//Initialize ARM register x2 with the address of integer variable that was defined to hold user input
//Initialize ARM register x1 with the value of integer variable
//Call printf() function to show user entered Fibonacci Index

//Initialize ARM register x1 with the address of integer variable that was defined to hold user input
//Initialize ARM register x0 with the value of integer variable
//Call fibonacci_dynamic() function to get the fibonacci Value of user entered index using dynamic
//programming technique.


//Copy the return value of fibonacci_dynamic() function from ARM x0 register to x2 register
//in order to pass it as the third parameter to next printf() function call.
//Initialize ARM register x0 with the address of integer variable that was defined to hold user input
//Initialize ARM register w1 with the value of integer variable
//Initialize ARM regigeter x0 with the address of correct format string
//Call printf() function to show the fibonacci value of the user entered Index

//Initialize ARM register x1 with the address of integer variable that was defined to hold user input
//Initialize ARM register w0 with the value of integer variable
//Call fibonacci_recursive function to get the fibonacci value of user entered index using recursive
//function call technique.

//Copy the return value of fibonacci_dynamic() function from ARM x0 register to x2 register
//in order to pass it as the third parameter to next printf() function call.
//Initialize ARM register x0 with the address of integer variable that was defined to hold user input
//Initialize ARM register w1 with the value of integer variable
//Initialize ARM regigeter x0 with the address of correct format string
//Call printf() function to show the fibonacci value of the user entered Index


//Initialize ARM register x0 with the address of the integer array that was defined to fibonacci sequence values
//Initialize ARM register x2 with the address of integer variable that was defined to hold user input
//Initialize ARM register w1 with the value of integer variable
//Call fibonacci_sequence() function to get the sequence of fibonacci values for all indices strating 
//from 0 and enfing at user entered index

//Initialize ARM register x0 with the address of integer variable that was defined to hold user input
//Initialize ARM register w2 with the value of integer variable.
//Initialize ARM register w1 with zero.
//Initialize ARM regigeter x0 with the address of correct format string
//Call printf() function to print a header before showing the fibonacci sequence values from the array


//Initialize ARM register x0 with the address of the integer array that was defined to fibonacci sequence values
//Initialize ARM register x2 with the address of integer variable that was defined to hold user input
//Initialize ARM register w1 with the value of integer variable
//Call show_fibonacci_seq() function to show the sequence of fibonacci values for
//all indices strating from 0 and ending at user entered index

//Initialize ARM regisetr x0 with 0 in order to return 0 from the function
//Retrieve the return address from the stack
//Return from the function



