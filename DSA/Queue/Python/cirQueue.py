class CircularQueue:
    def __init__(self,value:int) -> None:
        self.size=value
        self.front=self.rear=-1
        self.queue=[None for i in range(value)]
    
    def enqueue(self,value:int):
        if((self.rear + 1) % self.size == self.front):
            print("Queue is Full...")
        elif(self.front==-1):
            self.front=self.rear=0
            self.queue[self.rear]=value
        else:
            self.rear=(self.rear+1)%self.size
            self.queue[self.rear]=value
    
    def dequeue(self)->int:
        if(self.front==-1):
            print("Empty queue...")
        elif(self.front == self.rear):
            tmp=self.queue[self.front]
            self.front=self.rear=-1
            return tmp
        else:
            tmp=self.queue[self.front]
            self.front = (self.front + 1) % self.size
            return tmp
    def display(self):
        if(self.front==-1):
            print("Queue is empty...")
        elif(self.rear>=self.front):
            for i in range(self.front,self.size):
                print(self.queue[i],end=" ")
        else:
            for i in range(self.front,self.size):
                print(self.queue[i],end=" ")
            for i in range(0,self.rear+1):
                print(self.queue[i],end=" ")

def run():
    inp=int(input("Enter the size of Queue: "))
    q=CircularQueue(inp)
    flag=True
    while flag:
        choice=int(input("1.enque 2.deque 3.display 4.exit \nEnter the choice : "))
        if choice==1:
            inp=int(input("Enter the number : "))
            q.enqueue(inp)
        elif choice==2:
            print(q.dequeue(),"is popped...")
        elif choice==3:
            q.display()
        elif choice==4:
            flag=False
        else:
            print("Invalid Choice...")
    
    
    
run()


# class CirQueue:
#     def __init__(self,value) -> None:
#         self.size=value
#         self.front=-1
#         self.rear=-1
#         self.queue = [None for i in range(self.size)] 
    
#     def enque(self,value):
#         if (self.rear==self.size-1 and self.front==0) or (self.front==self.rear+1):
#             print("Queue is Full...")
#         elif self.rear==-1 and self.front==-1:
#             self.rear=self.front=0
#             self.queue.insert(self.rear,value)
#         else:
#             self.rear=(self.rear)%self.size
#             self.queue[self.rear]=value
#             self.rear+=1
    
#     def deque(self):
#         if not self.queue:
#             print("Empty Queue...")
#         elif self.front==self.rear:
#             temp=self.queue.pop(self.front)
#             self.queue.insert(self.front,None)
#             self.front=self.rear=-1
#             return temp
#         else:
#             temp=self.queue.pop(self.front)
#             self.queue.insert(self.front,None)
#             self.front+=1
#             return temp
#     def display(self):
#         print(self.queue)
        
# def run():
#     inp=int(input("Enter the size:"))
#     q=CirQueue(inp)
#     flag=True
#     while flag:
#         choice=int(input("Enter the choice...\n1.enque 2.deque 3.display 4.exit : "))
#         if choice==1:
#             inp=int(input("Enter the number : "))
#             q.enque(inp)
#         elif choice==2:
#             print(q.deque(),"is popped...")
#         elif choice==3:
#             q.display()
#         elif choice==4:
#             flag=False
#         else:
#             print("Invalid Choice...")
    
    
    
# run()
            
