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
    minElem=None
    flag=True
    while flag:
        choice=int(input("1.push 2.pop 3.Min 4.Exit\nEnter Choice: "))
        if(choice==1):
            val=int(input("Enter the value : "))
            if not obj.stack:
                minElem=val 
                obj.push(val)
            elif  val >= minElem:
                minElem=minElem
                obj.push(val)
            else:    
                minElem=val
                obj.push(2*val - minElem)
        
        elif(choice==2):
            ans=obj.pop()
            if ans>=minElem:
                minElem=minElem
            else:
                minElem=2*minElem - ans
        
        elif(choice==3):
            print(minElem," is the Minimum Element in the Stack...")
        
        elif(choice==4):
            flag=False
        
        else:
            print("Enter the Valid Choice...")

if __name__=="__main__":
    run()