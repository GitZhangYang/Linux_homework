#include<stdio.h>
#include"l_list_stack.h"
#include<string.h>
#include<stdlib.h>

/*delete one data from stack*/
int Delete(Node* Top, void *data,int type)
{
	Node* pt;    /*the point to visit through*/
	Node* tempStack;  /*define a temporary stack*/
	Node* tpt;        /*the point to visit through the temporary stack*/
	tempStack = (Node*)malloc(sizeof(Node));
	tempStack->next = NULL;    /*initial*/
	tpt = tempStack->next;     /*initial*/
	pt = Top->next;   /*initial*/
	while (pt)
	{
		//printf("%d", pt->dtype);
		if (pt->dtype == type)
		{
			switch (type) {
			case 1:                                           /*Integer*/
				if (*(int*)(pt->data) == *(int*)(data))
				{
					pt = pt->next;
					Pop(Top);                 /*delete the data*/
					break;
				}
				else
				{
					Push(tempStack, pt->data, 1);          /*put the top data to a temporary stack*/
					pt = pt->next;
					Pop(Top);
					break;
				}
			case 2:                                                /*Character*/
				if (*(char*)(pt->data) == *(char*)(data))
				{
					pt = pt->next;
					Pop(Top);                 /*delete the data*/
					break;
				}
				else
				{
					Push(tempStack, pt->data, 2);             /*put the top data to a temporary stack*/
					pt = pt->next;
					Pop(Top);
					break;
				}
			case 3:                                                /*Double*/
				if (*(double*)(pt->data) == *(double*)(data))
				{
					pt = pt->next;
					Pop(Top);                         /*delete the data*/
					break;
				}
				else
				{
					Push(tempStack, pt->data, 3);             /*put the top data to a temporary stack*/
					pt = pt->next;
					Pop(Top);
					break;
				}
			case 4:                                                  /*String*/
				if (strcmp((char*)(pt->data), (char*)(data)) == 0)
				{
					pt = pt->next;
					Pop(Top);                      /*delete the data*/
					break;
				}
				else
				{
					Push(tempStack, pt->data, 4);            /*put the top data to a temporary stack*/
					pt = pt->next;
					Pop(Top);
					break;
				}
			default: printf("Type error."); break;                            /*error*/
			}
		}
		else
		{
			Push(tempStack, pt->data, pt->dtype);          /*put the top data to a temporary stack*/
			pt = pt->next;
			Pop(Top);
		}
	}
	/*move other data from temporary stack to original stack*/
	tpt = tempStack->next;
	while (tpt)
	{
		Push(Top, tpt->data, tpt->dtype);
		tpt = tpt->next;
	}
	return 0;
}