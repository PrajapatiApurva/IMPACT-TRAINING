#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *ptr1;
};

typedef struct Node LL; 

int main(){

    LL s1,s2,s3,s4,s5;
    LL *temp,*head;
    //create nodes and assign the values
    s1.data=10;
    s1.ptr1=NULL;
    s2.data=20;
    s2.ptr1=NULL;
    s3.data=30;
    s3.ptr1=NULL;
    // make the links
    s1.ptr1=&s2;
    s2.ptr1=&s3;

    head=&s1;
    temp=head;

    while(temp){
        printf("Data: %d->\n",temp->data);    
        temp=temp->ptr1;
    }
    s4.data=40;
    s4.ptr1=NULL;

    s2.ptr1=&s4;
    s4.ptr1=&s3;

    head=&s1;
    temp=head;

    printf("\n");
    while(temp){
        printf("Data: %d->\n",temp->data);    
        temp=temp->ptr1;
    }
    s5.data=50;
    s5.ptr1=NULL;

    s5.ptr1=&s1;

    head=&s5;
    temp=head;
    printf("\n");
    while(temp){
        printf("Data: %d->\n",temp->data);    
        temp=temp->ptr1;
    }
    // printf("Data: %d\n",temp->data);
    // temp=&s2;
    // temp=s1.ptr1;
    // temp=temp->ptr1;
    // printf("Data: %d\n",temp->data);
    // temp=temp->ptr1;
    // printf("Data: %d\n",temp->data);
    //after this
    // Segmentation fault(core dumped)
    // temp=temp->ptr1;
    // printf("Data: %d\n",temp->data);
    // temp=temp->ptr1;
    // printf("Data: %d\n",temp->data);
    return 0;

}