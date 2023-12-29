#include<stdio.h>
#include<stdlib.h>
// int main(){
//     int a=10;
//     int *ptr=NULL;
//     int *ptr1=NULL;

// }


// int *func(){
//     static int a;
//     return &a;
// }

// int main(){
//     int a=10;
//     int *ptr=func();

//     return 0;
// }


int main(){

    int arr[5]={1,2,3,4,5};
    int *ptr=NULL;
    int *temp=NULL;
    // ptr=&arr[0];
    // printf("\n%d",*ptr);

    // arr[]<=>*arr both are same
    // &* it will nullify each other
    // &*arr <=> arr

    // printf("%d\n",arr[0]);
    // printf("%d\n",*(arr+1));
    // 0 here means index 1 it can be 0,1,2,...n-1

    // ptr= &arr[0];
    // ptr=&*(arr+0);
    // ptr=arr;
    ptr=(int *)malloc(sizeof(int)*5);
    temp=ptr;
    *ptr=10;
    ptr++;
    *ptr=20;
    ptr++;
    *ptr=30;
    ptr++;
    *ptr=40;
    ptr++;
    *ptr=50;
    ptr=temp;
    printf("ptr= %d\n",*ptr);
    printf("ptr= %d\n",ptr[1]);

    // printf("\nBA arr=  %d\n",&arr[0]);
    // printf("BA arr=  %d\n",arr);
    // printf("BA &ptr= %d\n",&ptr);
    // printf("BA ptr=  %d\n",ptr);

    // printf("\nptr= %d\n",*ptr);
    // ptr+=2;
    // printf("ptr= %d\n",*ptr);

    return 0;
}