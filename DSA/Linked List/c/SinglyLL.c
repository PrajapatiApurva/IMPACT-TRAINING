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



int main(){
    // insertAtBegin(10);
    // display();
    // printf("\n");
    // insertAtBegin(20);
    // display();
    // printf("\n");
    // insertAtBegin(30);
    // display();
    // insertAtEnd(90);
    // printf("\n");
    // display();
    // printf("\n%p\n",search(90));
    // insertAfter(10,100);
    // display();
    // deleteAfter(20);
    // printf("\n");
    // display();
    insertAtEnd(10);
    insertAtEnd(20);
    insertAtEnd(30);
    insertAtEnd(40);
    display();
    printf("\n");
    deleteAtBeggining();
    display();
    printf("\n");
    deleteAtEnd();
    display();
}