/*
	Orion Davis (3003072) ord4@zips.uakron.edu
	The University of Akron
	Computer Science II, Prof. Will
	ASSGN6: Numbers Stack
*/
#ifndef STACK_HPP
#define STACK_HPP

#include "NumStack.hpp"

class Stack : public NumStack{
public:
   // Constructor
   Stack(int s) : NumStack(s) {}

   // MathStack operations
   void add();
   void sub();
   void mult();
   void div();
   void addAll(Stack&);
   void multAll(Stack&);
};

#endif
