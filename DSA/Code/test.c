#include<stdio.h>
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("Values before swap: a:%d b:%d",a,b);
    swap(&a,&b);
    printf("\nValues after swap:  a:%d b:%d",a,b);
    return 0;
}