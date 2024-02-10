class CirQueue:
    def __init__(self,value) -> None:
        self.size=value
        self.front=-1
        self.rear=-1
        self.queue = [None for i in range(self.size)] 
    
    def enque(self,value):
        if (self.rear==self.size-1 and self.front==0) or (self.front==self.rear+1):
            print("Queue is Full...")
        elif self.rear==-1 and self.front==-1:
            self.rear=self.front=0
            self.queue.insert(self.rear,value)
        else:
            self.rear=(self.rear)%self.size
            self.queue[self.rear]=value
            self.rear+=1
    
    def deque(self):
        if not self.queue:
            print("Empty Queue...")
        elif self.front==self.rear:
            temp=self.queue.pop(self.front)
            self.queue.insert(self.front,None)
            self.front=self.rear=-1
            return temp
        else:
            temp=self.queue.pop(self.front)
            self.queue.insert(self.front,None)
            self.front+=1
            return temp
    def display(self):
        print(self.queue)
        
def run():
    inp=int(input("Enter the size:"))
    q=CirQueue(inp)
    flag=True
    while flag:
        choice=int(input("Enter the choice...\n1.enque 2.deque 3.display 4.exit : "))
        if choice==1:
            inp=int(input("Enter the number : "))
            q.enque(inp)
        elif choice==2:
            print(q.deque(),"is popped...")
        elif choice==3:
            q.display()
        elif choice==4:
            flag=False
        else:
            print("Invalid Choice...")
    
    
    
run()
            
