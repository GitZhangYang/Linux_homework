#include<stdio.h>
#include"l_list_stack.h"
#include<string.h>
#include<malloc.h>
#include<Windows.h>


int main()
{
	/*initialize a new stack*/
	Node* Head;
	Head = (Node*)malloc(sizeof(Node));
	Head->next = NULL;
	printf("===========================\n");
	printf("Welcome to the STACK space!\n");
	printf("===========================\n");
	printf("\n");

	/*test*/
	Test(Head);

	printf("===========================\n");
	printf("That is the end.\n");
	printf("===========================\n");
	system("pause");
	return 0;
}