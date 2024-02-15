#include<stdio.h>
#include<stdlib.h>
struct SinglyLL
{
    int data;
    struct SinglyLL *link;
};

typedef struct SinglyLL SinglyLL;

SinglyLL *head=NULL;


SinglyLL* search(int val){
    SinglyLL *temp=head;
    while(temp!=NULL){
        if(temp->data==val){
            return temp;
        }
        temp=temp->link;
    }
    return NULL;
}
SinglyLL *newSinglyLL(int value){
    SinglyLL *temp=(SinglyLL*)malloc(sizeof(SinglyLL));
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
        SinglyLL *temp=head;
        for(temp;temp!=NULL;temp=temp->link){
            printf("%d->",temp->data);
            
        }
    }
    
}
//insert at beggining
int insertAtBegin(int val){
    if(head==NULL){
        head=newSinglyLL(val);
    }
    else{
        SinglyLL *temp=newSinglyLL(val);
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
        SinglyLL *temp=head;
        head=head->link;
        free(temp);
    }

}
//insert at ending
int insertAtEnd(int val){
    if(head==NULL){
        head=newSinglyLL(10);
    }
    else{
        SinglyLL *temp=head;
        while(temp->link!=NULL){
            temp=temp->link;    
        }
        SinglyLL *temp1=newSinglyLL(val);
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
        SinglyLL *temp=head;
        while(temp->link->link!=NULL){
            temp=temp->link;    
        }
        SinglyLL *temp1=temp->link;
        temp->link=NULL;
        free(temp1);
    }
}
void insertAfter(int prev,int val){
    SinglyLL *temp1=newSinglyLL(val);
    SinglyLL* prevSinglyLL = search(prev);
    if(!prevSinglyLL){
        return;
    }
    else{
        temp1->link=prevSinglyLL->link;
        prevSinglyLL->link=temp1;
    }
}

void deleteAfter(int prev){
    
    SinglyLL* prevSinglyLL = search(prev);
    if(!prevSinglyLL){
        return;
    }
    else{
        SinglyLL* tmp = prevSinglyLL->link->link;
        free(prevSinglyLL->link);
        prevSinglyLL->link = tmp;
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