#include<stdio.h>
#include"l_list_stack.h"
#include<stdlib.h>

/*test all the functions*/
void Test(Node* Top)
{
	printf("======Let's begin the test!======\n");
	
	int a[] = { 0,1,2,3,4,5 };       /*Integers*/
	void* temp = NULL;
	char ch1 = 'a';                  /*Characters*/
	char ch2 = 'b';
	double dou = 3.1415;            /*Double*/
	char STRING[] = "hello";        /*String*/
	int i = 0;

	/*test for push*/
	printf("0. test for Push\n");
	printf("PUSH: 0 1 2 3 4 5 a b 3.1415 hello\n");
	for (i = 0; i < 6; i++)          /*push Integers into stack*/
	{
		temp = &a[i];
		Push(Top, temp, 1);          
	} 
	Push(Top, &ch1, 2);               /*push characters into stack*/
	Push(Top, &ch2, 2);
	Push(Top, &dou, 3);               /*push double number*/
	Push(Top, &STRING, 4);            /*push string*/
	/*show stack*/
	VisitThrough(Top); 
	/*test for Pop*/
	printf("---------------------------------------\n");
	printf("1. test for Pop\n");
	printf("POP:3 times\n");
	Pop(Top);
	VisitThrough(Top);
	Pop(Top);
	VisitThrough(Top);
	Pop(Top);
	VisitThrough(Top);
	/*test for Search*/
	printf("---------------------------------------\n");
	printf("2. test for Search\n");
	printf("SEARCH:2 and hello\n");
	temp = &a[2];
	if (Search(Top, temp, 1))
		printf("Found.\n");
	else
		printf("Not Found.\n");
	temp = STRING;
	if (Search(Top, temp, 4))
		printf("Found.\n");
	else
		printf("Not Found.\n");
	/*test for Delete*/
	printf("---------------------------------------\n");
	printf("3. test for Delete\n");
	printf("DELETE:3 and a\n");
	temp = &a[3];
	Delete(Top, temp, 1);
	VisitThrough(Top);
	temp = &ch1;
	Delete(Top, temp, 2);
	VisitThrough(Top);
	/*test for Clear*/
	printf("---------------------------------------\n");
	printf("4. test for Clear\n");
	Clear(Top);
	VisitThrough(Top);

	printf("======The test is done.======\n");
}