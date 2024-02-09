class Node:
    def __init__(self,data) -> None:
        self.data=data
        self.link=None
        
class LinkedList:
    def __init__(self) -> None:
        self.head=None
        
    def search(self,value):
        if not self.head:
            print("LL empty")
        else:
            temp=self.head
            while temp.data!=value:
                temp=temp.link
            if(temp.data==value):
                return temp
            else:
                return None
    
    def addAtBegin(self,value):
        if not self.head:
            self.head=Node(value)
        else:
            temp=Node(value)
            temp.link=self.head
            self.head=temp
            
    def addAtEnd(self,value):
        if not self.head:
            self.head=Node(value)
        else:
            temp=self.head
            while temp.link!=None:
                temp=temp.link
            temp1=Node(value)
            temp.link=temp1 
    
    def addAfter(self,prev,value):
        temp1=Node(value)
        prevNode=self.search(prev)
        if(prevNode):
            temp1.link=prevNode.link
            prevNode.link=temp1
        else:
            print("No prev Found...")
    
    def deleteAtBegin(self):
        if not self.head:
            print("Empty LL...")
        else:
            temp=self.head
            self.head=self.head.link     
            temp=None
    
    def deleteAtEnd(self):
        if not self.head:
            print("Empty LL...")
        else:
            temp=self.head 
            while temp.link.link !=None:
                temp=temp.link
            temp.link=None
    
    def deleteAfter(self,prev):
        if not self.head:
            print("Empty LL...")
        prevNode=self.search(prev)
        if(prevNode):
          prevNode.link=prevNode.link.link
        else:
            print("No prev found")
    
    def display(self):
        if not self.head:
            print("Empty LL")
        else:
            temp=self.head
            while(temp!=None):
                print(temp.data,"->",sep="",end="")
                temp=temp.link
            print()      
            
def CycleDetection(head)->bool:
    slow=head
    fast=head
    if slow.link==head:
        return True
    while fast==None or fast.link==None:
        
        slow=slow.link
        fast=slow.link.link
        if slow==fast:
            return True
    return False  
  
def run():
    ll=LinkedList() 
    flag=True
    while flag:
        choice=int(input("Enter the choice...\n1.insertAtStart \n2.insertAtEnd \n3.insertAfter \n4.DeleteAtStart \n5.DeleteAtEnd \n6.DeletetAfter \n7.Display \n8.Exit\n"))
        if choice==1:
            inp=int(input("Enter the number : "))
            ll.addAtBegin(inp)
        elif choice==2:
            inp=int(input("Enter the number : "))
            ll.addAtEnd(inp)
        elif choice==3:
            inp=int(input("Enter the number : "))
            ll.addAfter(inp)
        elif choice==4:
            ll.deleteAtBegin()
        elif choice==5:
            ll.deleteAtEnd()
        elif choice==6:
            ll.deleteAfter()
        elif choice==7:
            ll.display()
        elif choice==8:
            flag=False
        else:
            print("Invalid Choice...")
        
    ans=CycleDetection(ll.head)
    if(ans):
        print("Cycle Detected!!!")
    else:
        print("Cycle Not Detected!!!")
    
    
   
run()   