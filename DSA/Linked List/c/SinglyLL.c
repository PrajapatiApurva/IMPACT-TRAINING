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