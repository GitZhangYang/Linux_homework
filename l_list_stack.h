#include<stdio.h>

/*declaration of the linked list node*/
typedef struct node
{
	void *data;
	int dtype;
	struct node* next;
}Node;

void Push(Node* Top, void *data,int type);   /*declaration of PUSH operation */
void Pop(Node* Top);                /*declaration of POP operation*/
int Delete(Node* Top,void *data,int type);  /*declaration of DELETE operation*/
int Search(Node* Top,void *data,int type);   /*declaration of SEARCH operation*/
void VisitThrough(Node* Top);       /*declaration of VISITTHROUTH operation*/
void Clear(Node* Top);              /*declaration of CLEAR operation*/
void Test(Node* Top);               /*declaration of TEST operation*/
