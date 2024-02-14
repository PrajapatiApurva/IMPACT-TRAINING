class Queue:
    def __init__(self) -> None:
        self.data=[]
    def enque(self,data):
        self.data.append(data)
    def deque(self)->int:
        if self.data:
            return self.data.pop(0)
    def peek(self)->int:
        if self.data:
            return self.data[0]    
    def display(self):
        if self.data:
            print(*self.data)
        else:
            print("Queue is Empty...")
    
def run():
    queue=Queue()
    flag=True
    while(flag):
        choice=int(input("Select the choice:1.enque 2.deque 3.display 4.peek 4.exit\n"))
        if(choice==1):
            value=int(input("Enter the number you want to Enter: "))
            queue.enque(value)
        elif(choice==2):
            print(queue.deque(),"is Popped...")
        elif(choice==3):
            queue.display()  
        elif(choice==4):
            print(queue.peek(),"is at the front of Queue")          
        elif(choice==4):
            flag=False
        else:
            print("Enter Valid choice...")  

run()