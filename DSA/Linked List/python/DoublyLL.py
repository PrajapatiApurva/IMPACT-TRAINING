class Node:
    def __init__(self,data) -> None:
        self.data=data
        self.prev=None
        self.next=None

class DoubleLL:
    def __init__(self) -> None:
        self.head=None
    
    def search(self,value):
        if not self.head:
            print("LL empty")
        else:
            temp=self.head
            while temp.data!=value:
                temp=temp.next
            if(temp.data==value):
                return temp
            else:
                return None
    
    def addAtBegin(self,value):
        if not self.head:
            self.head=Node(value)
        else:
            temp=Node(value)
            temp.next=self.head
            self.head.prev=temp
            self.head=temp
            
    def addAtEnd(self,value):
        temp1=Node(value)
        if not self.head:
            self.head=temp1
        else:
            temp=self.head
            while temp.next!=None:
                temp=temp.next
            temp1.prev=temp
            temp.next=temp1 
    
    def addAfter(self,prev,value):
        temp1=Node(value)
        prevNode=self.search(prev)
        if(prevNode):
            temp1.next=prevNode.next
            prevNode.next=temp1
            temp1.prev=prevNode
        else:
            print("No prev Found...")
    
    def deleteAtBegin(self):
        if not self.head:
            print("Empty LL...")
        else:
            temp=self.head
            self.head=self.head.next
            self.head.prev=None    
            temp=None
    
    def deleteAtEnd(self):
        if not self.head:
            print("Empty LL...")
        else:
            temp=self.head 
            while temp.next.next !=None:
                temp=temp.next
            temp.next=None
    
    def deleteAt(self,prev):
        if not self.head:
            print("Empty LL...")
        
        # curr=self.search(prev)
        # if(curr):
        #     print(curr.data)
            
        # else:
        #     print("not found")
        
        prevNode=self.search(prev)
        if(prevNode==self.head):
            self.deleteAtBegin()
        elif(prevNode.next==None):
            self.deleteAtEnd()                    
        elif(prevNode):
            prevNode.next.prev=prevNode.prev
            prevNode.prev.next=prevNode.next
        else:
            print("No prev found")
    
    def display(self):
        if not self.head:
            print("Empty LL")
        else:
            temp=self.head
            while(temp!=None):
                print(temp.data,"->",sep="",end="")
                temp=temp.next
            print()      
            
ll=DoubleLL()
ll.addAtEnd(10)
ll.addAtEnd(20)
ll.addAtEnd(30)
ll.addAtEnd(40)
ll.display()
ll.deleteAt(10)
ll.display()