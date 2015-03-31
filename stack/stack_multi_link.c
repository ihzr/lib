/* we bulid a multi link stack at here.
 * the stack number is SIZE*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 100
typedef int TYPE;
struct node{
	TYPE data;
	struct node* next;
};
struct node* top[SIZE];
void init()
{
	memset(top,'\0',sizeof(top));
}
int push(TYPE value,int i)
{
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	if(!temp)
		return 0;
	temp->next=top[i];
	temp->data=value;
	top[i]=temp;
	return 1;
}
int pop(TYPE* value,int i)
{
	if(!top[i])
		return 0;
	struct node* temp;
	temp=top[i];
	*value=temp->data;
	top[i]=temp->next;
	free(temp);
}
