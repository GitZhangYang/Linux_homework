#include<stdio.h>
#include"l_list_stack.h"

/*visit through all the node of stack*/
void VisitThrough(Node* Top)
{
	Node* pt;          /*the point to move backward*/
	pt = Top->next;    /*initial*/
	int type = -1;
	printf("Stack:\n");
	while (pt)
	{
		type = pt->dtype;
		/*print each element*/
		switch (type) {
		case 1: printf("%d\t", *(int*)(pt->data)); break;
		case 2: printf("%c\t", *(char*)(pt->data)); break;
		case 3: printf("%lf\t", *(double*)(pt->data)); break;
		case 4: printf("%s\t", (char*)(pt->data)); break;
		default: printf("type error."); 
		}
		pt = pt->next;
	}
	printf("\n");

}