#define STACK_SIZE 50
/*顺序栈的大小*/
typedef int TYPE;
/*栈中元素的类型*/
void init();
/*初始化或者清空栈*/
int push(TYPE);
/*入栈操作，成功返回1，失败返回0*/
int pop(TYPE*);
/*出栈操作,成功返回1，失败返回0，取出的数据放在指针指向的内存中*/
int getTop(TYPE*);
/*获取栈顶元素，成功返回1，失败返回0，取出的数据放在指针指向的内存中*/
