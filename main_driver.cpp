/*
	Orion Davis (3003072) ord4@zips.uakron.edu
	The University of Akron
	Computer Science II, Prof. Will
	ASSGN6: Numbers Stack
*/
#include <iostream>
#include "Stack.hpp"

int main()
{
   int catchVar;  // To hold values popped off the stack

   // Create a MathStack object.
   Stack stack(5);

   // Push 3 and 6 onto the stack.
   std::cout << "Pushing 3\n";
   stack.push(3);
   std::cout << "Pushing 6\n";
   stack.push(6);

   // Add the two values.
   stack.add();

   // Pop the sum off the stack and display it.
   std::cout << "The sum is ";
   stack.pop(catchVar);
   std::cout << catchVar << std::endl << std::endl;

   // Push 7 and 10 onto the stack
   std::cout << "Pushing 7\n";
   stack.push(7);
   std::cout << "Pushing 10\n";
   stack.push(10);

   // Subtract 7 from 10.
   stack.sub();

   // Pop the difference off the stack and display it.
   std::cout << "The difference is ";
   stack.pop(catchVar);
   std::cout << catchVar << std::endl;
   return 0;
}
