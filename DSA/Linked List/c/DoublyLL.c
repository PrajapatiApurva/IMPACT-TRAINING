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
void choices(){
    printf("1.InsertAtBegin\n2.InsertAtEnd\n3.InsertAfter\n4.DeleteAtBegin\n5.DeletAtEnd\n6.DeleteAny\n7.Display\n8.Exit");
}


int main(){
    int choice;
    int flag=1;
    while (flag)
    {   
        choices();
        printf("Enter Your Choice : ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            int val;
            printf("Enter value : ");
            scanf("%d",&val);
            insertAtBegin(val);
            break;
        case 2:
            int val;
            printf("Enter value : ");
            scanf("%d",&val);
            insertAtEnd(val);
            break;
        case 3:
            int val1,val2;
            printf("Enter prev value : ");
            scanf("%d",&val1);
            printf("Enter Insert value : ");
            scanf("%d",&val2);
            insertAfter(val1,val2);
            break;
        case 4:
            deleteAtBeggining();
            break;
        case 5:
            deleteAtEnd();
            break;
        case 6:
            int val;
            printf("Enter value to be deleted: ");
            scanf("%d",&val);
            deleteAfter(val);
            break;
        case 7:
            display();
            break;
        case 8:
            flag=0;
            break;    
        default:
            printf("Enter Valid Choicess.....\n");
            break;
        }
    }
    
    return 0;
}


