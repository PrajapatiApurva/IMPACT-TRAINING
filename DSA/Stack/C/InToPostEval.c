#include<stdio.h>
#include<ctype.h>
#include<string.h>
char stack[100];
int top=-1;
int evalpost(char *exp)
{
    int i=0,j=0,n=strlen(exp);
    int stack[n];
    while (i < n) 
    {
        if (isdigit(exp[i]))
        {
            stack[j++] = exp[i]-'0';
        }
        else
        {
            int op2=stack[--j];
            int op1=stack[--j];
            switch(exp[i])
            {
                case '+':stack[j++]=op1+op2;break;
                case '-':stack[j++]=op1-op2;break;
                case '*':stack[j++]=op1*op2;break;
                case '/':stack[j++]=op1/op2;break;
            }
            
        }
        i++;
    }
    return stack[0];
}
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
    else if(e=='+'||e=='-'){
        return 1;
    }
    else if(e=='*'||e=='/'){
        return 2;
    }
    return 0;
}
int main(){
    char str[100];
    char temp[100]="";
    char *e,x;
    printf("Enter the line: ");
    scanf("%s",str);
    printf("\n");
    e=str;
    printf("The conversion of Infix to PostFix is: ");
    while(*e!='\0'){
        if(isalnum(*e)){
            printf("%c",*e);
            strncat(temp,&*e,1);
        }
        else if(*e=='('){
            push(*e);
        }
        else if(*e == ')')
        {
            while((x = pop()) != '(')
                printf("%c", x);
                strncat(temp,&x,1);
        }
        else{
            while(priority(stack[top])>=priority(*e)){
                x=pop();
                printf("%c",x);
                strncat(temp,&x,1);
            }
            push(*e);
        }
        e++;
    }
    while(top!=-1){
        x=pop();
        printf("%c",x);
        strncat(temp,&x,1);
    }
    printf("\nEval of post fix is %d",evalpost(temp));
    return 0;
}