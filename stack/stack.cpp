/* C++ program to implement basic stack operations */
#include <bits/stdc++.h>
#include "stack.h"
#include "linkedlist.h"
using namespace std;

bool Stack::push_stack(int x)
{
	if (top >= (MAX - 1))
    {
		cout << "Stack Overflow" << endl;
		return false;
	}
	else
	{
		a[++top] = x;
		cout << x << " pushed into stack" << endl;
		return true;
	}
}

int Stack::pop_stack()
{
	if (top < 0)
    {
		cout << "Stack Underflow" << endl;
		return 0;
	}
	else
	{
		int x = a[top--];
		return x;
	}
}
int Stack::peek_stack()
{
	if (top < 0)
    {
		cout << "Stack is Empty" << endl;
		return 0;
	}
	else
	{
		int x = a[top];
		return x;
	}
}

bool Stack::isEmpty_stack()
{
	return (top < 0);
}
