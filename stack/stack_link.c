#include<stdio.h>
#include<stdlib.h>
typedef int TYPE;
struct node{
	TYPE value;
	struct node* next;
};
struct node* top;

void init()
{
	top=NULL;
}
void empty()
{
	struct node* temp;
	for(;top;){
		temp=top;
		top=top->next;
		free(temp);
	}
}
int push(TYPE value)
{
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	if(!temp)
		return 0;
	temp->value=value;
	temp->next=top;
	top=temp;
	return 1;
}
int pop(TYPE* value)
{
	if(!top)
		return 0;
	struct node* temp;
	temp=top;
	*value=top->value;
	top=top->next;
	free(temp);
	return 1;
}
