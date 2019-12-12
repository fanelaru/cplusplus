/* C++ program to implement basic stack operations */
#include <bits/stdc++.h>
#include "stack.h"
#include "linkedlist.h"
using namespace std;

int main()
{
	class Stack s;
	s.push_stack(10);
	s.push_stack(20);
	s.push_stack(30);
	s.push_stack(40);
	cout << s.pop_stack() << " Popped from stack\n";

    StackNode* root = NULL;

	push(&root, 10);
	push(&root, 20);
	push(&root, 30);

	cout << pop(&root) << " popped from stack" << endl;
	cout << "Top element is " << peek(root) << endl;

	return 0;
}
