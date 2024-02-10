#Infix To Postfix Conversion Only

class Stack:
    def __init__(self):
        self.data = []

    def push(self, data):
        self.data.append(data)

    def pop(self) -> chr:
        if self.data:
            return self.data.pop()

    def peek(self) -> chr:
        if self.data:
            return self.data[-1]


def priority(item) -> int:
    if item == '(':
        return 0
    elif item in '+-':
        return 1
    elif item in '*/':
        return 2
    elif item == '^':
        return 3
    return 0


def infix_to_postfix(infix_expr: str) -> str:
    stack = Stack()
    postfix_expr = ''
    for c in infix_expr:
        if c.isalnum():
            postfix_expr += c
        elif c == '(':
            stack.push(c)
        elif c in "+-*/^":
            if not stack.data:
                stack.push(c)
            else:
                while stack.data and priority(stack.peek()) >= priority(c):
                    postfix_expr += stack.pop()
                stack.push(c)
        elif c == ')':
            while stack.data and stack.peek() != '(':
                postfix_expr += stack.pop()
            stack.pop()

        # print(c.center(len(infix_expr)), end='|')
        # print(f'{"".join(stack.data)}'.center(len(infix_expr)), end='|')
        # print(f'{postfix_expr}'.center(len(infix_expr)))

    # print("stack:", stack.data)
    while stack.data:
        postfix_expr += stack.pop()

    return postfix_expr

if __name__=="__main__":
    infix_expr = input("Enter the Expression: ")
    postfix_expr = infix_to_postfix(infix_expr)
    print(postfix_expr)