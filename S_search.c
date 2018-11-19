#include<stdio.h>
#include"l_list_stack.h"
#include<string.h>

/*search the asked data in stack,and return 0/1*/
int Search(Node* Top, void *data,int type)
{
	Node* pt;    /*the point to visit through*/
	pt = Top->next;   /*initial*/
	while (pt)
	{
		if (pt->dtype == type)
		{
			switch (type) {
			case 1: 
				if (*(int*)(pt->data) == *(int*)(data))
					return 1;                               /*Integer*/
				else
					break;
			case 2: 
				if (*(char*)(pt->data) == *(char*)(data))
					return 1;                               /*Character*/
				else
					break;
			case 3: 
				if (*(double*)(pt->data) == *(double*)(data))
					return 1;                               /*Double*/
				else
					break;
			case 4: 
				if (strcmp((char*)(pt->data), (char*)(data)) == 0)
					return 1;                              /*Character Array*/
				else
					break;
			default: printf("Type error.\n"); break;                            /*error*/
			}
		}
		pt = pt->next;
	}
	
	return 0;
	
}