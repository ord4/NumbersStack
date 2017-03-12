/*
	Orion Davis (3003072) ord4@zips.uakron.edu
	The University of Akron
	Computer Science II, Prof. Will
	ASSGN6: Numbers Stack
*/
#ifndef NUMSTACK_HPP
#define NUMSTACK_HPP

class NumStack
{
private:
   int *stackArray;  // Pointer to the stack array
   int stackSize;    // The stack size
   int top;          // Indicates the top of the stack

public:
   // Constructor
   NumStack(int);

   // Copy constructor
   NumStack(const NumStack &);

   // Destructor
   ~NumStack();

   // Stack operations
   void push(int);
   void pop(int &);
   bool isFull() const;
   bool isEmpty() const;
};

#endif 
