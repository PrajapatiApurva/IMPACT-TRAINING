#include<stdio.h>
void pattern(int num){
    // star Pattern
    // *
    // **
    // ***
    // ****
    // *****
    for (int i = 1; i <= num; i++)
    {   for (int j = 1; j <= i; j++)
    {
        printf("*");
    }
        printf("\n");
    }
    return;   
}
void pattern2(int num){
    // number pattern
    // 1
    // 12
    // 123
    // 1234
    // 12345
    for (int i = 1; i <= num; i++)
    {   for (int j = 1; j <= i; j++)
    {
        printf("%d",j);
    }
        printf("\n");
    }
    return;   
}
void pattern3(int num){
    // number pattern reverse
    // 54321
    // 5432
    // 543
    // 54
    // 5
    for (int i = 1; i <= num; i++)
    {   for (int j = num; j >= i; j--)
    {
        printf("%d",j);
    }
        printf("\n");
    }
    return;   
}
void pattern4(int num){
    // number pattern 
    // 1 2 3 4 5
    // 1 2 3 4
    // 1 2 3
    // 1 2
    // 1
    for (int i = num; i >= 1; i--)
    {   for (int j = 1; j <= i; j++)
    {
        printf("%d ",j);
    }
        printf("\n");
    }
    return;   
}
void pattern5(int num){
    // Star Pattern 
    //     *
    //    **
    //   ***
    //  ****
    // *****
    for (int i = 1; i <= num; i++){   
        for (int j = 1; j <= num; j++){   
            if(j<=num-i)
                printf("  ");
            else
                printf("* ");    
        }
        printf("\n");
    }
    return;   
}
void pattern6(int num){
    // Number Pattern 
    //     1
    //    12
    //   123
    //  1234
    // 12345
    for (int i = 1; i <= num; i++){
        int temp=1;   
        for (int j = 1; j <= num; j++){   
            if(j<=num-i)
                printf("  ");
            else{
                printf("%d ",temp);
                temp++;    
            }
                
        }
        temp=1;
        printf("\n");
    }
    return;   
}
void pattern7(int num){
    // Number Pattern 
    //     5
    //    54
    //   543
    //  5432
    // 54321
    for (int i = 1; i <= num; i++){
        int temp=num;   
        for (int j = 1; j <= num; j++){   
            if(j<=num-i)
                printf("  ");
            else{
                printf("%d ",temp);
                temp--;    
            }
                
        }
        temp=num;
        printf("\n");
    }
    return;   
}
void pattern8(int num){
    // Number Pattern 
    //     5
    //    45
    //   345
    //  2345
    // 12345
    for (int i = 1; i <= num; i++){
        int temp=num;   
        for (int j = 1; j <= num; j++){   
            if(j<=num-i)
                printf("  ");
            else{
                printf("%d ",temp-(i-1));
                temp++;    
            }
                
        }
        // temp=num-(i-1);
        printf("\n");
    }
    return;   
}
void pattern9(int num){
    // Rectangle Star Pattern 
    // * * * * *
    // *       * 
    // *       *
    // *       *
    // * * * * *
    for (int i = 1; i <= num; i++){
        for (int j = 1; j <= num; j++){   
            if(i==1||i==num)
                printf("* ");
            else{
                if(j==1||j==num)
                    printf("* ");
                else{
                    printf("  ");
                }
            }
                
        }
        printf("\n");
    }
    return;   
}
void pattern10(int num){
    // Cross Pattern 
    // *       *
    //   *   * 
    //     *  
    //   *   *  
    // *       *
    for (int i = 1; i <= num; i++){
        for (int j = 1; j <= num; j++){   
            if(i==j||(i==num-(j-1)))
                printf("* ");
            else{
                printf("  ");
            }
                
        }
        printf("\n");
    }
    return;   
}
void pattern11(int num){
    // Rectangle Number Pattern 
    // 1 2 3 4 5
    // 1       5 
    // 1       5
    // 1       5
    // 1 2 3 4 5
    for (int i = 1; i <= num; i++){
        for (int j = 1; j <= num; j++){   
            if(i==1||i==num)
                printf("%d ",j);
            else{
                if(j==1||j==num)
                    printf("%d ",j);
                else
                    printf("  ");
            }
                
        }
        printf("\n");
    }
    return;   
}
void pattern12(int num){
    // Rhombus Star Pattern 
    // 0|1|2|3|4|5|6|7|8|9|10|     
    // 1| | | | |*|*|*|*|*|  |  
    // 2| | | |*| | | |*| |  |              
    // 3| | |*| | | |*| | |  |                             
    // 4| |*| | | |*| | | |  |                         
    // 5|*|*|*|*|*| | | | |  |                 
    for (int i = 1; i <= num; i++){
        for (int j = 1; j <= num*2; j++){   
            if((i==1&&j>=num)||(i==num&&j<=num)||(j==num-(i-1))||(j==(num*2)-(i-1)))
                printf("* ");
            else
                printf("  ");    
        }
        printf("\n");
    }
    return;   
}
int main(){
    int num;
    printf("Enter the Number: ");
    scanf("%d",&num);
    // pattern(num);
    // pattern2(num);
    // pattern3(num);
    // pattern4(num);
    // pattern5(num);
    // pattern6(num);
    // pattern7(num);
    // pattern8(num);
    // pattern9(num);
    // pattern10(num);
    // pattern11(num);
    // pattern12(num);
    return 0;
}
