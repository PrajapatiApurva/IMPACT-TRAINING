#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *link;
};

typedef struct Node Node;

Node *head=NULL;


Node* search(int val){
    Node *temp=head;
    while(temp!=NULL){
        if(temp->data==val){
            return temp;
        }
        temp=temp->link;
    }
    return NULL;
}
Node *newNode(int value){
    Node *temp=(Node*)malloc(sizeof(Node));
    if(temp==NULL){
        printf("No memory Allocated\n");
    }
    temp->data=value;
    temp->link=NULL;
    return temp;
}
void display(){
    if(head==NULL)
        printf("No Linked List to Display\n");
    else{
        Node *temp=head;
        for(temp;temp!=NULL;temp=temp->link){
            printf("%d->",temp->data);
            
        }
    }
    
}
//insert at beggining
int insertAtBegin(int val){
    if(head==NULL){
        head=newNode(val);
    }
    else{
        Node *temp=newNode(val);
        temp->link=head;
        head=temp;
    }
    
}
//delete at the begining
void deleteAtBeggining(){
    if(head==NULL){
        printf("Empty...\n");
    }
    else{
        Node *temp=head;
        head=head->link;
        free(temp);
    }

}
//insert at ending
int insertAtEnd(int val){
    if(head==NULL){
        head=newNode(10);
    }
    else{
        Node *temp=head;
        while(temp->link!=NULL){
            temp=temp->link;    
        }
        Node *temp1=newNode(val);
        temp->link=temp1;
        // tail=temp1;    
    }
}
//delete at ending
int deleteAtEnd(){
    if(head==NULL){
        printf("LL is Empty");
    }
    else{
        Node *temp=head;
        while(temp->link->link!=NULL){
            temp=temp->link;    
        }
        Node *temp1=temp->link;
        temp->link=NULL;
        free(temp1);
    }
}
void insertAfter(int prev,int val){
    Node *temp1=newNode(val);
    Node* prevNode = search(prev);
    if(!prevNode){
        return;
    }
    else{
        temp1->link=prevNode->link;
        prevNode->link=temp1;
    }
}

void deleteAfter(int prev){
    
    Node* prevNode = search(prev);
    if(!prevNode){
        return;
    }
    else{
        Node* tmp = prevNode->link->link;
        free(prevNode->link);
        prevNode->link = tmp;
    }
}

void choices(){
    printf("\n1.insertAtStart\n2.insertAtEnd\n3.insertAfter\n4.DeleteAtStart\n5.DeleteAtEnd\n6.DeletetAfter\n7.Display\n8.Exit\n");
}
int getPrevValue(){
    int val;
    printf("\nEnter the Number After Which you want to Insert : ");
    scanf("%d",&val);
    return val;
}
int getValue(){
    int val;
    printf("\nEnter the Number You Want to Insert : ");
    scanf("%d",&val);
    return val;
}

int middleNode(Node* head){
    Node* slow=head;
    Node* fast=head;
    if (!head/*Means No head is present or no linkedList is present*/){
        return -1;
    }
    while(fast->link != NULL /*for Odd*/ && fast->link->link != NULL/*For Even*/){
        slow=slow->link;
        fast=fast->link->link;
    }
    return slow->data;
}

int main(){
    
    int choice,flag=1;
    while (flag)
    {   
        choices();
        printf("Enter your Choice : ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            insertAtBegin(getValue());
            break;
        case 2:
            insertAtEnd(getValue());
            break;
        case 3:
            insertAfter(getPrevValue(),getValue());
            break;
        case 4:
            deleteAtBeggining();
            break;
        case 5:
            deleteAtEnd();
            break;
        case 6:
            
            deleteAfter(getValue());
            break;
        case 7:
            display();
            break;
        case 8:
            flag=0;
        default:
            break;
        }
    }
    
    int ans = middleNode(head);
    printf("\n%d is the middle Elem of the LL!!!",ans);
}