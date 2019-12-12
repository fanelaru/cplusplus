#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#define MAX 3

class Stack {
	int top;

public:
	int a[MAX]; // Maximum size of Stack

	Stack() { top = -1; }
	bool push_stack(int x);
	int pop_stack();
	int peek_stack();
	bool isEmpty_stack();
};


#endif // STACK_H_INCLUDED
