#include<stdio.h>
int main(){
    int num,count;
    printf("Enter the Number: ");
    scanf("%d",&num);
    for(int i=31;i>=0;i--){
        printf("%d ",(num>>i));
    }
    printf("\n");
    for(int i=31;i>=0;i--){
        printf("%d",(num>>i)&1);
    }
    return 0;
}

// (num>>i)&1
// 00000000000000000000000000001111
// 15


// if(num<16)
    //     count=3;
    // if(num<32)
    //     count=4;
    // if(num<64)
    //     count=5;
    // if(num<128)
    //     count=6;
    // if(num<256)
    //     count=7;
    // if(num<512)
    //     count=8;
