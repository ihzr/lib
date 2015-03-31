#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 50
#define TYPE int
struct cirqueue{
	TYPE element[MAXSIZE];
	int front;
	int rear;
};
struct cirqueue* init()
{
	struct cirqueue* queue=(struct cirqueue*)malloc(sizeof(struct cirqueue));
	if(queue)
		queue->front=queue->rear=0;
	return queue;
}
int enter(struct cirqueue* queue,TYPE value)
{
	if((queue->rear+1)%MAXSIZE==queue->front){
		printf("cir queue is full!\n");
		return 0;
	}
	queue->element[queue->rear]=value;
	queue->rear=(queue->rear+1)%MAXSIZE;
	return 1;
}
int delete(struct cirqueue* queue,TYPE* value)
{
	if(queue->front==queue->rear){
		printf("cir queue is empty!\n");
		return 0;
	}
	*value=queue->element[queue->front];
	queue->front=(queue->front+1)%MAXSIZE;
	return 1;
}
int main()
{
	int i,value;
	struct cirqueue* queue=init();
	for(i=0;i<60;i++){
		enter(queue,i);
	}
	for(i=0;i<60;i++){
		delete(queue,&value);
		printf("%d\n",value);
	}
	return 0;
}
