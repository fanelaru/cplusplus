#ifndef LINKEDLIST_H_INCLUDED
#define LINKEDLIST_H_INCLUDED

// A structure to represent a stack
typedef struct StackNode
{
	int data;
	StackNode* next;
} StackNode;

int isEmpty(StackNode* root);
void push(StackNode** root, int data);
int pop(StackNode** root);
int peek(StackNode* root);
#endif // LINKEDLIST_H_INCLUDED
