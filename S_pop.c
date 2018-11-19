#include<stdio.h>
#include"l_list_stack.h"
#include<stdlib.h>

/*Pop the data at the top of stack*/
void Pop(Node* Top)
{
	Node* temp;      /*a temporary point*/
	if (Top->next)     /*when the stack is not empty*/
	{
		temp = Top->next->next;
		free(Top->next);         /*free the space*/
		/*change the point of the top*/
		Top->next = temp;
	}
	else
		printf("The stack is empty.\n");   /*stack is empty*/
}