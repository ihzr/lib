#include<stdio.h>


int* find(int* head, int num, int value)
{
	int low=0,high=num-1,mid;
	while(low<=high){
		mid=(low+high)/2;
		if(*(head+mid)==value)
			return head+mid;
		else if(*(head+mid)>value)
			high=mid-1;
		else
			low=mid+1;
	}
	return NULL;
}
int main(){
	int a[]={1,2,3,4,5,6};
	int* result=find(a,6,1);
	if(result==NULL)
		printf("Not find\n");
	else
		printf("%d\n",*result);
	return 0;
}
