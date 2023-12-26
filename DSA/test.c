#include<stdio.h>
int main(){
    int a=10;
    int b[2]={2,3};
    int c=20;

    printf("\n%d %d",b[0],b[1]);
    printf("\n%d %d",a,c);
    printf("\n%d %d",b[-1],b[2]);

    // CO(BA +IV*sizeOf(dt))
    // AO(BA +IV*sizeOf(dt))
    // CO=content of 
    // AO=address of 
    // BA=base address
    // IV=initial value
    // dt=data type


    printf("\n\n%d %d",&b[0],&b[1]);
    printf("\n%d %d",&a,&c);
    printf("\n%d %d",&b[-1],&b[2]);
    return 0;
}