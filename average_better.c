#include<stdio.h>
int main(){
     int i=1;
    double x,avg=0;
    for(i=1;scanf("%lf",&x)==1;i++){
        avg+=(x-avg)/i;
        }
    printf("%f",avg);
    return 0;
}
