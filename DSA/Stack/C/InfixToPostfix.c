#include<stdio.h>
#include<ctype.h>
char stack[100];
int top=-1;
char pop(){
    if(top==-1){
        return -1;
    }
    else{
        return stack[top--];
    }

}
void push(char e){
    top=top+1;
    stack[top]=e;
}
int priority(char e){
    if(e=='('){
        return 0;
    }
    if(e=='+'||e=='-'){
        return 1;
    }
    if(e=='*'||e=='/'){
        return 2;
    }
    if(e=='^')
        return 3;
    return 0;
}
int main(){
    char str[100];
    char *e,x;
    printf("Enter the line: ");
    scanf("%s",str);
    printf("\n");
    e=str;
    while(*e!='\0'){
        if(isalnum(*e)){
            printf("%c",*e);
        }
        else if(*e=='('){
            push(*e);
        }
        else if(*e == ')')
        {
            while((x = pop()) != '(')
                printf("%c", x);
        }
        else{
            while(priority(stack[top])>=priority(*e)){
                printf("%c",pop());
            }
            push(*e);
        }
        e++;
    }
    while(top!=-1){
        printf("%c",pop());
    }
    return 0;
}