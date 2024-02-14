class Queue:
    def __init__(self) -> None:
        self.n=int(input("Enter the length of the queue: "))
        self.queue=[]*self.n
        self.front=-1
        self.rear=-1
        self.run()
    def enque(self,num):
        if(self.rear==self.n-1):
            print("Queue Overflow Condition Raised...")
        
        self.rear+=1
        self.queue.append(num)
        
        if(self.rear==0):
            self.front=0
    def deque(self)->int:
        if (self.front==-1 and self.rear==-1):
            print("Empty Queue.....")
        
        elif(self.front!=self.rear):
            temp=self.queue.pop(0)
            self.front+=1
            return temp
            
        elif(self.front==self.rear):
            temp=self.queue.pop(0)
            self.front=-1
            self.rear=-1
            return temp
    
    def peek(self):
        if (self.front==-1 and self.rear==-1):
            print("Empty Queue.....")
        
        else:
            return self.queue[self.front-1]
            
    def run(self):
        flag=True
        while(flag):
            choice=int(input("Select the choice:1.enque 2.deque 3.peek 4.exit\n"))
            if(choice==1):
                value=int(input("Enter the number you want to push: "))
                self.enque(value)
            elif(choice==2):
                print(self.deque(),"is Popped...")
            elif(choice==3):
                print(self.peek(),"is at the front of Queue")
            elif(choice==4):
                flag=False
            else:
                print("Enter Valid choice...")        
                
option=Queue()