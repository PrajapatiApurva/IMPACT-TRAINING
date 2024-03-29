class Stack:
    def __init__(self) -> None:
        self.stack=[]
    
    def push(self,data):
        self.stack.append(data)
    def pop(self):
        if self.stack:
            return self.stack.pop()
    def peek(self):
        if self.stack:
            return self.stack[-1]
    def display(self):
        print(*self.stack)

def run():
    
    obj=Stack()
    flag=True
    while flag:
        choice=int(input("1.push 2.pop 3.peek 4.display 5.Exit\nEnter Choice: "))
        if(choice==1):
            val=int(input("Enter the value : "))
            obj.push(val)
        elif(choice==2):
            print(obj.pop(),"is popped...")
        elif(choice==3):
            print(obj.peek(),"is at the Top of the Stack...")
        elif(choice==4):
            print("Stack elems are: ")
            obj.display()
        elif(choice==5):
            flag=False
        else:
            print("Enter the Valid Choice...")

if __name__=="__main__":
    run()