#include<stdio.h>
#include<ctype.h>
char stack[100];
int top=-1;
void push(char e){
    if(top==100)
        printf("Overflow\n");
    else
        stack[++top]=e;
}
int pop(){
    if(top==-1)
        return -1;
    else
        return stack[top--];
}
int priority(char x){
    if(x=='(')
            return 0;
}
int main(){

}