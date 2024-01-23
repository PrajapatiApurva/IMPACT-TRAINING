#include<stdio.h>
#define n 5
// int n=5; can't be possible cause it is a varriable
int arr[n];
int front=-1;
int rear=-1;

void push(int num){
    if(rear==n-1){
        printf("\nQueue has been Overflow \n");
    }
    else if (front==-1 && rear==-1){
        rear++;
        arr[rear]=num;
    }
    else if(rear!=-1){
        rear++;
        arr[rear]=num;
        printf("\n%d is pushed!!!\n",arr[rear]);
    }
    if(rear==0){
        front=0;
    }
    
}
void pop(){
    if (front==-1 && rear==-1){
        printf("Empty Queue\n");
    }
    else if(front!=rear){
        printf("\n%d is popped...\n",arr[front++]);
    }
    else if(front==rear){
        front=-1;
        rear=-1;
    }
}
void peek(){
    if (front==-1 && rear==-1){
        printf("\nEmpty Queue nothing to show\n");
    }
    else{
        printf("\n%d\n",arr[rear]);
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

