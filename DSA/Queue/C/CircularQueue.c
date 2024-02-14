#include<stdio.h>
#define n 5
// int n=5; can't be possible cause it is a varriable
int arr[n];
int front=-1;
int rear=-1;

void enqueue(int num){
    if((rear+1) % n == front){
        printf("Queue is Full...\n");
    }
    else if (front==-1){
        front=0;    
        rear=0;
        arr[rear]=num;
        printf("%d is pushed!!!\n",arr[rear]);
    }
    else{
        rear = (rear+1) % n;
        arr[rear]=num;
        printf("%d is pushed!!!\n",arr[rear]);
    }
}
void dequeue(){
    if (front==-1){
        printf("Empty Queue\n");
    }
    else if(front == rear){
        printf("%d is popped...\n",arr[front]);
        front=-1;
        rear=-1;
    }
    else{
        printf("%d is popped...\n",arr[front]);
        front = (front+1) % n;
    }
}
void peek(){
    if (front==-1 && rear==-1){
        printf("Empty Queue nothing to show...\n");
    }
    else{
        printf("%d is the last inserted value...\n",arr[rear]);
    }
}
void display(){
    if(front==-1){
        printf("Empty queue...\n");
    }
    else if(front<=rear){
        for(int i=front ; i < n ; i++){
            printf("%d ",arr[i]);
        }
        printf("\n");
    }
    else{
        for(int i=front ; i < n ; i++){
            printf("%d ",arr[i]);
        }
        for(int i=0 ; i < rear + 1 ; i++){
            printf("%d ",arr[i]);
        }
    }
    
}

int getChoice(){
    int choice;
    printf("1.Push 2.Pop 3.Peek 4.Display 5.Exit\nEnter the Choice: ");
    scanf("%d",&choice);
    return choice;
}

int getValue(){
    int enter;
    printf("Enter the Number you want to insert: ");
    scanf("%d",&enter);
    return enter;
} 
int main(){
    int choice;
    do{   
        choice=getChoice();
        switch (choice)
        {
        case 1:
            enqueue(getValue());
            break;
        case 2:
            dequeue();
            break;
        case 3:
            peek();
            break;    
        
        case 4:
            display();
            break;
        case 5:break;    

        default:
            printf("Enter the valid choice!!!!\n");
            break;
        }

    }while (choice!=5);
    
    
    return 0;
}

