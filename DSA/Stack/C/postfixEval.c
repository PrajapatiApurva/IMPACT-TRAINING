#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

int evaluatePostfix(char *expr) {
    int stack[MAX_SIZE];
    int top = -1;
    int i;
    for (i = 0; expr[i] != '\0'; i++) {
        if (expr[i] >= '0' && expr[i] <= '9') {
            stack[++top] = expr[i] - '0';
        } else {
            int op2 = stack[top--];
            int op1 = stack[top--];
            int res;
            switch (expr[i]) {
                case '+':
                    res = op1 + op2;
                    break;
                case '-':
                    res = op1 - op2;
                    break;
                case '*':
                    res = op1 * op2;
                    break;
                case '/':
                    res = op1 / op2;
                    break;
            }
            stack[++top] = res;
        }
    }
    return stack[top];
}

int main() {
    char inp[MAX_SIZE];
    printf("Enter postfix Expression: ");
    scanf("%s", inp);
    int ans = evaluatePostfix(inp);
    printf("%d\n", ans);
    return 0;
}
