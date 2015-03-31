#include<stdio.h>
#include<stdlib.h>
#define vtype int  //value type
struct node{
	vtype data;
	struct node* next;
};
//link queue
struct lqueue{
	struct node* front;
	struct node* rear;
};
struct lqueue* init()
{
	struct lqueue* lqueue=(struct lqueue*)malloc(sizeof(struct lqueue));
	if(lqueue){
		lqueue->front=lqueue->rear=NULL;
	}
	return lqueue;
}
int enterqueue(struct lqueue* q,vtype x)
{
	struct node* node=(struct node*)malloc(sizeof(struct node));
	if(!node)
		return -1;
	node->data=x;
	node->next=NULL;
	if(!q->rear){
		q->front=q->rear=node;
	}else{
		q->rear->next=node;
		q->rear=node;
	}
	return 0;
}
int deletequeue(struct lqueue* q,vtype* x)
{
	struct node* temp;
	if(!q->rear){
		return -1;
	}
	if(q->front==q->rear){
		temp=q->front;
		q->front=q->rear=NULL;
	}else{
		temp=q->front;
		q->front=q->front->next;
	}
	*x=temp->data;
	free(temp);
}
int main()
{
	struct lqueue* lqueue=init();
	int i,x;
	for(i=0;i<10;i++){
		enterqueue(lqueue,i);
	}
	for(i=0;i<10;i++){
		deletequeue(lqueue,&x);
		printf("%d\n",x);
	}
	return 0;
}
