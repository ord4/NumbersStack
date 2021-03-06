/*
	Orion Davis (3003072) ord4@zips.uakron.edu
	The University of Akron
	Computer Science II, Prof. Will
	ASSGN6: Numbers Stack
*/
#ifndef STACK_HPP
#define STACK_HPP

#include "NumStack.hpp"

template <class T>
class Stack : public NumStack<T>{
public:
   // Constructor
   Stack(int s) : NumStack<T>(s) {}

   // MathStack operations
   void add();
   void sub();
   void mult();
   void div();
   void addAll(Stack&);
   void multAll(Stack&);
};

/*
	Orion Davis (3003072) ord4@zips.uakron.edu
	The University of Akron
	Computer Science II, Prof. Will
	ASSGN6: Numbers Stack
*/

/***************************************************************************
* This function will add the top two items and replace them with their sum *
* PRE:  None                                                               *
* POST: Top two values popped from stack and new sum placed on top         *
***************************************************************************/
template<class T>
void Stack<T>::add(){
   T num, sum;

   // Pop the first two values off the stack.
   pop(sum);
   pop(num);

   // Add the two values, store in sum.
   sum += num;

   // Push sum back onto the stack.
   push(sum);
}

/****************************************************************************
* This function will subtract the top two items and replace them with their *
* difference                                                                *
* PRE:  None                                                                *
* Post: Top two values popped from stack and their difference pushed on top *
****************************************************************************/
template<class T>
void Stack<T>::sub(){
   T num, diff;

   // Pop the first two values off the stack.
   pop(diff);
   pop(num);

   // Subtract num from diff.
   diff -= num;

   // Push diff back onto the stack.
   push(diff);
}

/**********************************************************************
* This function will mutliple the top two items and replace them with *
* their product                                                       *
* PRE:  None                                                          *
* POST: Top two values popped and their product pushed on top         *
**********************************************************************/
template<class T>
void Stack<T>::mult(){
	T num;
	T prod;

	this->pop(prod);
	this->pop(num);

	prod *= num;

	this->push(prod);
}

/*************************************************************************
* This function will divide the second number popped by the first number *
* popped and replace them with their quotient                            *
* PRE:  None                                                             *
* POST: Top two values popped and their quotient pushed on top           *
*************************************************************************/
template<class T>
void Stack<T>::div(){
	T num, quot;

	pop(num);
	pop(quot);

	quot /= num;

	push(quot);
}

/************************************************************************
* This function will one by one pop all of the numbers off of the stack *
* and then push their total sum onto the stack                          *
* PRE: A stack                                                          *
* POST: All numbers popped and replaced by their total sum pushed       *
************************************************************************/
template<class T>
void Stack<T>::addAll(Stack &myStack){
	T num;
	T sum = 0;

	while(!myStack.isEmpty()){
		pop(num);
		sum += num;
	}

	push(sum);
}

template<class T>
void Stack<T>::multAll(Stack &myStack){
	T num, prod;
	pop(prod);

	while(!myStack.isEmpty()){
		pop(num);
		prod *= num;
	}

	push(prod);
}

#endif
