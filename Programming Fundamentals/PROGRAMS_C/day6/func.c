#include<stdio.h>
int add();
int main(){
    printf("%d\0hello",add());
}
int add(){
    return 1;
}