#include<stdio.h>
#define n 5
// int n=5; can't be possible cause it is a varriable
int arr[n];
int top=-1;

void push(int num){
    if (top==n-1){
        printf("Overflow\n");
    }
    else{
        top=top+1;
        arr[top]=num;
        printf("%d is pushed!!!\n",arr[top]);
    }
}
void pop(){
    if(top==-1){
        printf("Empty\n");
    }
    else{
        printf("%d\n popped",arr[top]);
        top=top-1;
    }
}
void peek(){
    if(top==-1){
        printf("Nothing to show\n");
    }
    else{
        printf("%d\n",arr[top]);
    }
}
int main(){
    int enter;
    int choice;
    do{
        
        printf("Enter the Choice:1.Push 2.Pop 3.Peek 4.Exit\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("Enter the Number you want to insert: ");
            scanf("%d",&enter);
            push(enter);
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;    
        
        default:
            printf("Enter the valid choice!!!!\n");
            break;
        case 4:break;    
        }

    }while (choice!=4);
    
    
    return 0;
}

