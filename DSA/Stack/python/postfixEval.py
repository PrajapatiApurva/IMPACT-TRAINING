def eval(expr):
        stack=[]
        for i in expr:
            if i not in '+-*/':
                stack.append(i)
            else:
                op2=int(stack.pop())
                op1=int(stack.pop())
                
                if i=='+':
                    res = (op1) + (op2)
                elif i=='-':
                    res = (op1) - (op2)
                elif i=='*':
                    res = (op1) * (op2)
                elif i=='/':
                    res = (op1) / (op2)  
                stack.append(res)
        return (''.join(map(str,stack)))  
    
if __name__=="__main__":
    inp=input("Enter postfix Expression: ")
    ans2=eval(inp)
    print(ans2)