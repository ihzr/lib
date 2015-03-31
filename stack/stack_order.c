/*构造一个顺序栈，栈的存储空间放在全局数组中
 *作者：hzr
 *时间：2014.11.13
 */
#include"stack_order.h"
TYPE stack[STACK_SIZE];
int top=-1;

void init()
//初始化或者清空顺序栈
{
	top=-1;
}
int push(TYPE value)
{
	if(top==STACK_SIZE-1)
		return 0;
	stack[++top]=value;
	return 1;
}
int pop(TYPE* value)
{
	if(top==-1)
		return 0;
	*value=stack[top--];
	return 1;
}
int getTop(TYPE* value)
{
	if(top==-1)
		return 0;
	*value=stack[top];
	return 1;
}
