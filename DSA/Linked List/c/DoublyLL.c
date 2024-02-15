#include<stdio.h>
#include<stdlib.h>
struct DoublyLL
{
    int data;
    struct DoublyLL *prev;
    struct DoublyLL *next;
};

typedef struct DoublyLL DoublyLL;

DoublyLL *head=NULL;


DoublyLL* search(int val){
    DoublyLL *temp=head;
    while(temp!=NULL){
        if(temp->data==val){
            return temp;
        }
        temp=temp->next;
    }
    return NULL;
}
DoublyLL *newDoublyLL(int value){
    DoublyLL *temp=(DoublyLL*)malloc(sizeof(DoublyLL));
    if(temp==NULL){
        printf("No memory Allocated\n");
    }
    temp->prev=NULL;
    temp->data=value;
    temp->next=NULL;
    return temp;
}
void display(){
    if(head==NULL)
        printf("No Linked List to Display\n");
    else{
        DoublyLL *temp=head;
        for(temp;temp!=NULL;temp=temp->next){
            printf("%d->",temp->data);
            
        }
    }
    
}
//insert at beggining
int insertAtBegin(int val){
    if(head==NULL){
        head=newDoublyLL(val);
    }
    else{
        DoublyLL *temp=newDoublyLL(val);
        temp->next=head;
        head->prev=temp;
        head=temp;
    }
    
}
//delete at the begining
void deleteAtBeggining(){
    if(head==NULL){
        printf("Empty...\n");
    }
    else{
        DoublyLL *temp=head;
        head=head->next;
        head->prev=NULL;
        free(temp);
    }
}
//insert at ending
int insertAtEnd(int val){
    if(head==NULL){
        head=newDoublyLL(10);
    }
    else{
        DoublyLL *temp=head;
        while(temp->next!=NULL){
            temp=temp->next;    
        }
        DoublyLL *new=newDoublyLL(val);
        temp->next=new;
        new->prev=temp;   
    }
}
//delete at ending
void deleteAtEnd(){
    if(head==NULL){
        printf("LL is Empty");
    }
    else if(head->next==NULL){
        DoublyLL* temp=head;
        head=NULL;
        free(temp);
    }
    else{
        DoublyLL *temp=head;
        while(temp->next!=NULL){
            temp=temp->next;    
        }
        DoublyLL *remove=temp;
        temp->prev->next=NULL;
        free(remove);
    }
}
void insertAfter(int prev,int val){
    DoublyLL *newNode=newDoublyLL(val);
    DoublyLL* prevDoublyLL = search(prev);
    if(!prevDoublyLL){
        return;
    }
    else{
        newNode->next=prevDoublyLL->next;
        newNode->prev=prevDoublyLL;
        prevDoublyLL->next=newNode;
    }
}

void deleteAt(int curr){   
    DoublyLL* currDoublyLL = search(curr);
    if(!currDoublyLL){
        // printf("Element Not Found...\n");
        return;
    }
    else{
        if(currDoublyLL->prev==NULL && currDoublyLL->next==NULL){
            DoublyLL* temp=head;
            head=NULL;
            free(head);
        }
        else if(currDoublyLL->prev==NULL){
            deleteAtBeggining();
        }
        else if (currDoublyLL->next==NULL)
        {
            deleteAtEnd();
        }
        else{
            DoublyLL* temp=currDoublyLL;
            currDoublyLL->prev->next = currDoublyLL->next;
            currDoublyLL->next->prev = currDoublyLL->prev;
            free(temp);
        }
        
    }
}



int main(){
    // insertAtEnd(20);
    // insertAtEnd(30);
    // insertAtEnd(40);
    // insertAtEnd(50);
    // insertAtBegin(20);
    insertAtBegin(10);
    // insertAtBegin(30);
    // insertAtBegin(40);
    display();
    // insertAtEnd(10);
    // insertAtEnd(20);
    // insertAtEnd(30);
    // insertAtEnd(40);
    // insertAfter(10,70);
    // deleteAtBeggining();
    printf("\n");
    deleteAt(10);
    display();
    // deleteAtBeggining();
    // display();
    // printf("\n");
    // deleteAtEnd();
    // display();
}