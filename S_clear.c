#include<stdio.h>
#include"l_list_stack.h"
#include<stdlib.h>

/*clear all the data in stack*/
void Clear(Node *Top)
{
	Node* pt;          /*the point to move backward*/
	Node* temp;
	pt = Top->next;    /*initial*/
	while (pt)
	{
		temp = pt;
		pt = pt->next;       /*move the point from top to bottom*/
		free(temp);          /*free the space*/
	}
	Top->next = pt;
}