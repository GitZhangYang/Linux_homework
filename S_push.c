#include<stdio.h>
#include"l_list_stack.h"
#include<malloc.h>

/*Push the data into the top of stack*/
void Push(Node* Top, void *data,int type)
{
	/*generate a new Node for the new data*/
	Node* newNode; 
	newNode = (Node*)malloc(sizeof(Node));
	newNode->next = NULL;
	switch (type) {
	case 1: newNode->data = (int*)data; newNode->dtype = 1; break;      /*Integer*/
	case 2: newNode->data = (char*)data; newNode->dtype = 2; break;     /*Character*/
	case 3: newNode->data = (double*)data; newNode->dtype = 3; break;   /*Double*/
	case 4: newNode->data = data; newNode->dtype = 4; break;    /*Character Array*/
	default: printf("Type error."); break;                            /*error*/
	}
	/*push the data into stack*/
	newNode->next = Top->next;
	Top->next = newNode;
}