#include<stdio.h>

struct stdinfo{
    int rollno;
    char name[20];
    struct stdinfo *ptr; 
};
int main(){
    //initializing
    struct stdinfo S1,S2,S3, *head,*temp;

    //value assigning
    S1.rollno=101;
    // S1.name='A';
    S2.rollno=102;
    // S2.name='B';
    S3.rollno=103;
    // S3.name='C';
    
    //linking
    head=&S1;
    S1.ptr=&S2;
    S2.ptr=&S3;
    S3.ptr=NULL;

    temp=&S1;
    printf("%d\n",temp->rollno);
    temp=temp->ptr; //for going to the 2nd node
    printf("%d\n",temp->rollno);
    temp=temp->ptr; //for going to the 3rd node
    printf("%d\n",temp->rollno);

    return 0;
}