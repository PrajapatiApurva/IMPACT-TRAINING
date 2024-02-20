#include<stdio.h>
#include<stdlib.h>
struct CircSLL
{
    int data;
    struct CircSLL *link;
};

typedef struct CircSLL CircSLL;

CircSLL *head=NULL;

CircSLL* search(int val){
    CircSLL *temp=head;
    while(temp!=NULL){
        if(temp->data==val){
            return temp;
        }
        temp=temp->link;
    }
    return NULL;
}
CircSLL *newCircSLL(int value){
    CircSLL *new=(CircSLL*)malloc(sizeof(CircSLL));
    if(new==NULL){
        printf("No memory Allocated\n");
    }
    new->data=value;
    new->link=NULL;
    return new;
}
void display(){
    if(head==NULL)
        printf("No Linked List to Display\n");
    else{
        CircSLL *temp=head;
        printf("%d->",temp->data);
        temp=temp->link;
        for(temp;temp!=head;temp=temp->link){
            printf("%d->",temp->data);
        }
        printf("\n");
    }
    
}
//insert at beggining
int insertAtBegin(int val){
    CircSLL *new=newCircSLL(val);
    if(head==NULL){
        head=new;
        head->link=head;
    }
    else{
        new->link=head;
        CircSLL *temp=head;
        while (temp->link!=head)
        {
            temp=temp->link;
        }
        temp->link=new;
        head=new;
    }
                      
}
//delete at the begining
void deleteAtBeggining(){
    if(head==NULL){
        printf("Empty...\n");
    }
    else{
        CircSLL *temp=head;
        if (head->link==head){
            head=NULL;
            free(head);
        }
        else{
            while (temp->link!=head)
            {
                temp=temp->link;
            }
            CircSLL *temp1=head;
            temp->link=head->link;
            head=head->link;
            free(temp1);
        }
    }
}
//insert at ending
int insertAtEnd(int val){
    CircSLL *new=newCircSLL(val);
    if(head==NULL){
        head=new;
        new->link=head;
    }
    else{
        CircSLL *temp=head;
        while(temp->link!=head){
            temp=temp->link;    
        }
        temp->link=new;
        new->link=head;
    }
}
//delete at ending
int deleteAtEnd(){
    if(head==NULL){
        printf("LL is Empty");
    }
    else{
        CircSLL *temp=head;
        if (temp->link==head)
        {
            head=NULL;
            free(head);
        }
        else{
            while(temp->link->link!=head){
                temp=temp->link;    
            }
            CircSLL *last=temp->link;
            temp->link=head;
            free(last);
        }
        
    }
}
void insertAfter(int val, int newVal) {
    CircSLL *prevNode = search(val);
    if (prevNode == NULL) {
        printf("Element not found.\n");
        return;
    }
    CircSLL *newNode = newCircSLL(newVal);
    newNode->link = prevNode->link;
    prevNode->link = newNode;
}
void deleteAfter(int prev){
    
    CircSLL* prevCircSLL = search(prev);
    if(!prevCircSLL){
        return;
    }
    else{
        CircSLL* tmp = prevCircSLL->link->link;
        free(prevCircSLL->link);
        prevCircSLL->link = tmp;
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