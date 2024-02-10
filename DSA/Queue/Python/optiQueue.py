class Queue:
    def __init__(self) -> None:
        self.queue=[]
    
    def enque(self,value):
        self.queue.append(value)
    def deque(self):
        if not self.queue:
            print("empty queue")
        else:
            return self.queue.pop(0)
    def display(self):
        print(self.queue)
        
def run():
    qu=Queue()
    flag=True
    while flag:
        choice=int(input("Enter the choice...\n1.enque 2.deque 3.display 4.exit : "))
        if choice==1:
            inp=int(input("Enter the number : "))
            qu.enque(inp)
        elif choice==2:
            print(qu.deque(),"is popped...")
        elif choice==3:
            qu.display()
        elif choice==4:
            flag=False
        else:
            print("Invalid Choice...")
    
    
    
run()

    
    