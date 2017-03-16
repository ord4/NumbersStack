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
   Stack<int> stack(5);

   /*std::cout << "Pushing 1.5, 2.2, 3.3, 4.7...\n";
   stack.push(1.5);
   stack.push(2.2);
   stack.push(3.3);
   stack.push(4.7);*/


   std::cout << "Pushing 1, 2, 3, 4, and 5..\n";
   stack.push(1); // Bottom of stack
   stack.push(2);
   stack.push(3);
   stack.push(4);
   stack.push(5); // Top of stack


   //Testing mult()
   std::cout << "Multiplying top two should yield: 20\n"; // 5*4
   stack.mult();
   stack.pop(catchVar);
   std::cout << "It yielded: " << catchVar << '\n';

   std::cout << "Multiplying top two should yield: 6\n"; // 3*2
   stack.mult();
   stack.pop(catchVar);
   std::cout << "It yielded: " << catchVar << '\n';


   /*// Testing div()
   std::cout << "Dividing top two should yield: 2\n"; // 8/4
   stack.div();
   stack.pop(catchVar);
   std::cout << "It yielded: " << catchVar << '\n';

   std::cout << "Dividing top two should yield: 0 (integer division)\n"; // 2/3
   stack.div();
   stack.pop(catchVar);
   std::cout << "It yielded: " << catchVar << '\n';
   */

   /*//Testing addAll()
   std::cout << "Adding all together should yield: 18\n";
   stack.addAll(stack);
   stack.pop(catchVar);
   std::cout << "It yielded: " << catchVar << '\n';

   std::cout << "\nPushing 2, 4, 6, 8, and 10...\n";
   stack.push(2); // Bottom of stack
   stack.push(4);
   stack.push(6);
   stack.push(8);
   stack.push(10); // Top of stack

   std::cout << "Adding all together should yield: 30\n";
   stack.addAll(stack);
   stack.pop(catchVar);
   std::cout << "It yielded: " << catchVar << '\n';
   */

   /*//Testing multAll()
   std::cout << "Multiplying all together should yield: 120\n";
   stack.multAll(stack);
   stack.pop(catchVar);
   std::cout << "It yielded: " << catchVar << '\n';

   std::cout << "\nPushing 2, 4, 6, 8, and 10...\n";
   stack.push(2); // Bottom of stack
   stack.push(4);
   stack.push(6);
   stack.push(8);
   stack.push(10); // Top of stack

   std::cout << "Multiplying all together should yield: 3840\n";
   stack.multAll(stack);
   stack.pop(catchVar);
   std::cout << "It yielded: " << catchVar << '\n';
   */

   /*
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
   */
   return 0;
}
