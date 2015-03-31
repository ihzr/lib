/*实现一个基于顺序栈的双端栈
 * 作者：hzr
 * 时间：2014.11.13
 */
#include<stdio.h>
#define SIZE 100
typedef int TYPE;
struct DoubleStack{
	TYPE Stack[SIZE];
	int top[2];
};
struct DoubleStack DStack;
void init()
//init or empty doublestack
{
	DStack.top[0]=-1;
	DStack.top[1]=SIZE;
}
int push(TYPE value,int choice)
// select a stack and push the value, 0 for fail, 1 for success
{
	if(DStack.top[0]+1==DStack.top[1])
		return 0;
	switch(choice){
		case 0:
			DStack.Stack[++DStack.top[0]]=value;
			break;
		case 1:
			DStack.Stack[--DStack.top[1]]=value;
			break;
		default:
			return 0;
	}
	return 1;
}
int pop(TYPE* value,int choice)
//select a stack and pop the top value, put the value into *value
{
	if((choice==0&&DStack.top[0]==-1)
		||(choice==1&&DStack.top[1]==SIZE))
		return 0;
	switch(choice){
		case 0:
			*value=DStack.Stack[DStack.top[0]--];
			break;
		case 1:
			*value=DStack.Stack[DStack.top[1]++];
			break;
		default:
			return 0;
	}
	return 1;
}

