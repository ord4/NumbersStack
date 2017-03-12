/*
	Orion Davis (3003072) ord4@zips.uakron.edu
	The University of Akron
	Computer Science II, Prof. Will
	ASSGN6: Numbers Stack
*/
#ifndef STACK_HPP
#define STACK_HPP

#include <stack>

template<typename T>
using Stack = std::stack<T>;

Stack{
private:
	T *stackArray;
    int stackSize;
    T top;

public:
	// Constructors and destructors
	Stack(int);
	Stack(const Stack&);
	~Stack();

	// Operations
	void push(T);
	void pop(T&);
	bool isFull() const;
	bool isEmpty() const;
};


#endif
