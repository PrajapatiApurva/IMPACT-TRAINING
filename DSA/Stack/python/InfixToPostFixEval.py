#infix To Postfix Evaluation
class Stack:
    def __init__(self) -> None:
        self.operator=[]
   
    def push(self,value):
        self.operator.append(value)
   
    def pop(self)->chr:
        if self.operator:
            return self.operator.pop()
   
    def peek(self)->chr:
        if self.operator:
            return self.operator[-1]
  
        
def priority(item)->int:
    if(item=='('):
        return 0
    elif(item=='+' or item=='-'):
        return 1
    elif(item=='*' or item=='/'):
        return 2
    elif(item=='^'):
        return 3
    return 0


def infixToPostfix(infixExpr: str)->str:
    stack=Stack()
    postfixExpr=''
    for c in infixExpr:
        if c.isalnum():
            postfixExpr += c
        elif c == '(':
            stack.push(c)
        elif c in '+-*/^':
            if not stack.operator:
                stack.push(c)
            else:
                while stack.operator and priority(stack.peek()) >= priority(c):
                    postfixExpr += stack.pop()
                stack.push(c)
        elif c==')':
            while stack.operator and stack.peek() != '(':
                postfixExpr += stack.pop()
            stack.pop()
            
    while stack.operator:
        postfixExpr += stack.pop()
        
    return postfixExpr

def eval(expr):
        stack=[]
        for i in expr:
            if i not in '+-*/':
                stack.append(i)
            else:
                op2=stack.pop()
                op1=stack.pop()
                
                if i=='+':
                    res=int(op1)+int(op2)
                elif i=='-':
                    res=int(op1)-int(op2)
                elif i=='*':
                    res=int(op1)*int(op2)
                elif i=='/':
                    res=int(op1)/int(op2)  
                stack.append(res)
        return (''.join(map(str,stack)))  



if __name__=="__main__":
    infix_expr=input("Enter the Infix Operation: ")

    postfix_Expr=infixToPostfix(infix_expr)

    print("Postfix Expression is: ",postfix_Expr)
    ans=eval(postfix_Expr)
    print("Postfix evaluation is: ",ans)