#include<stdio.h>
#include<stdlib.h>

typedef struct list{
    int val;
    struct list *next;
}LLIST;

void dispList(LLIST *);
// int updateList(LLIST*,int,int);
// int sortListA(LLIST *);
// int deleteNode(LLIST *,int);
// int insertNewNode()

int main(){
    LLIST *newNode=NULL;
    LLIST *tempNode=NULL;
    LLIST *head=NULL;

    int ch=1,val,repValue;
    int firstVal,secVal;

    while (ch)
    {
        newNode=(LLIST *)malloc(sizeof(LLIST));
        printf("\n\tEnter the Value: ");
        scanf("%d",&newNode->val);
        newNode->next=NULL;
        //end of creating new node
        if(head==NULL){
            head=newNode;
            tempNode=newNode;
        }
        else{
            tempNode->next=newNode;
            tempNode=tempNode->next;
        }
        printf("\n\tDo you want to add new element (0/1): ");
        scanf("%d",&ch);
    }
    dispList(head);

    printf("\n\n");
    free(newNode);
    free(head);
    return 0;
}

void dispList(LLIST *head){

    printf("\n\tList is\n");
    while(head!=NULL){
        printf("%d->",head->val);
        head=head->next;
    }
    printf("NULL");
    printf("\n");
}