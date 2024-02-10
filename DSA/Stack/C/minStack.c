#include<stdio.h>
#define n 20
int stack[n];
int min[n];
int top=-1;
int mintop=-1;
int isEmpty(){
    if(top==-1 && mintop==-1)
        return 1;
    else
        return 0;
}
int isFull(){
    if(top==n-1 && mintop==n-1)
        return 1;
    else
        return 0;
}
void push(int x){
    if(isFull())
        printf("Stack Overflow....\n");
    else{
        top++;
        stack[top]=x;
    }    
        
}
void pop(){
    if(isEmpty())
        printf("Stack is Empty....\n");
    else
        stack[top--];
}

void minpush(int num){
    if(isFull())
        printf("MinStack Overflow....\n");
    else{
        mintop++;
        min[mintop]=num;
    }

}
void minpop(){
    if(isEmpty())
        printf("MinStack is Empty....\n");
    else
        min[mintop--];
}
int minpeek(){
    if(isEmpty()){
        printf("Stack is Empty....\n");
        return -1;
    }
    else
        return min[mintop];
}
void display(){
    for (int i = 0; i < mintop; i++)
    {
        printf("%d ",min[i]);
    }
    
}
int main(){
    int num,choice;
    int flag=1;
    while(flag){
        printf("1.push 2.pop 3.Min 4.Exit 5.display\nEnter the Choice: ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
                printf("\nEnter the number: ");
                scanf("%d",&num);
                push(num);
                if(mintop==-1 || num<minpeek())
                    minpush(num);
                else
                    minpush(minpeek());
                break;
        case 2:
                pop();
                minpop();
                break;
        case 3:
                printf("%d is Minimum element in the Stack.\n",minpeek());
                break;
        case 4:
                flag=0;
                break;
        case 5:
                display();
                break;
        default:
                printf("Enter valid Choice...\n");
                break;
        }
    }
    return 0;
}