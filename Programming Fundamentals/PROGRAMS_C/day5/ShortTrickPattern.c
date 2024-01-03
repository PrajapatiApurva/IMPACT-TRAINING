#include<stdio.h>
void pattern(int num){
    //   * * * *
    //     * * *
    //       * *
    //         *
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num; j++)
        {
            if(i-j<=0){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    
}
void pattern1(int num){
// *
// * *
// * * *
// * * * *
// * * * * *
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num; j++)
        {
            if(i-j>=0){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    
}
void pattern3(int num){
// * * * * *
// * * * *
// * * *
// * *
// *
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num; j++)
        {
            if(i+j<=num+1){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    
}
void pattern4(int num){
//         *
//       * *
//     * * *
//   * * * *
// * * * * *
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num; j++)
        {
            if(i+j>=num+1){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }  
}
void pattern5(int num){
//         * * 
//       * * * *
//     * * * * * * 
//   * * * * * * * *
// * * * * * * * * * *
    for (int i =1; i <= num; i++)  
    {  
        for (int j = 1; j <= num - i; j++)  
        {  
            printf ("  ");   
        }  
        // use for loop where j is less than equal to (2 * i -1)  
        for (int j = 1; j <= ( 2 * i - 1); j++)  
        {  
            printf ("* "); // print the Star  
        }
        // for (int j = 1; j < i*2-1; j++)
        // {
        //     if(j<=num-i){
        //         printf("  ");
        //     }
        //     if(j<=(2*i-1)){
        //         printf("* ");
        //     }
        // }
          
        printf ("\n");  
    }    
}
int main(){
    int num=5;
    printf("Enter the Number: \n");
    // scanf("%d",&num);
    // pattern(num);
    // printf("\n");
    // pattern1(num);
    // printf("\n");
    // pattern3(num);
    // printf("\n");
    // pattern4(num);
    // printf("\n");
    pattern5(num);
    printf("\n");
    return 0;
}