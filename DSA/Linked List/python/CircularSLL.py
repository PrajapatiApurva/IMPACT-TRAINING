class Node:
    def __init__(self,data) -> None:
        self.data=data
        self.next=None
        
class CircularSLL:
    def __init__(self) -> None:
        self.head=None
    
    def search(self,data):
        if not self.head:
            return None
        else:
            temp=self.head
            while temp.next != self.head:
                if temp.data == data:
                    return temp
                temp=temp.next
            #for last node checking    
            if temp.data==data:
                return temp
            return None
    
    def insertAtBegin(self,data):
        newNode=Node(data)
        if not self.head:
            self.head=newNode
            self.head.next=self.head
        else:
            newNode.next=self.head
            temp=self.head
            while temp.next!=self.head:
                temp=temp.next
            temp.next=newNode
            self.head=newNode
    
    def deleteAtBegin(self):
        if not self.head:
            print("Empty LL...")
        else:
            temp=self.head
            if temp.next==self.head:
                self.head=None
            else:
                while temp.next!=self.head:
                    temp=temp.next
                temp.next=self.head.next
                self.head=self.head.next
    
    def insertAtEnd(self,data):
        newNode=Node(data)
        if not self.head:
            self.head=newNode
            newNode.next=self.head
        else:
            temp=self.head
            while temp.next is not self.head:
                temp=temp.next
            newNode.next=self.head
            temp.next=newNode
    
    def deleteAtEnd(self):
        if not self.head:
            print("Empty LL...")
        else:
            temp=self.head
            if temp.next==self.head:
                self.head=None
            else:
                while temp.next.next != self.head:
                    temp=temp.next
                temp.next=temp.next.next
            
    def insertAfter(self,prev,data):
        newNode=Node(data)
        if not self.head:
            print("LL is Empty...")    
        else:
            prevN=self.search(prev)
            if prevN==None:
                print("Element not Found...")
                return
            elif prevN==self.head:
                self.insertAtEnd(data)
            else:
                if prevN.next==self.head:
                    self.insertAtEnd(data)
                else:
                    newNode.next=prevN.next
                    prevN.next=newNode
    
    def deleteAny(self,data):
        if not self.head:
            print("Empty LL...")
        else:
            #for one Node LL
            if self.head.data==data and self.head.next==self.head:
                self.head=None
            #for Multiple Node LL
            else:
                temp=self.head
                searchNode=self.search(data)
                if searchNode==self.head:
                    self.deleteAtBegin()
                elif searchNode.next==self.head:
                    self.deleteAtEnd()
                else:
                    temp=temp.next
                    while temp!=self.head:
                        if temp.next.next==searchNode:
                            temp.next.next=searchNode.next
                        temp=temp.next
                                        
    def display(self):
        if self.head is None:
            print("LL is Empty...")
        else:
            temp = self.head
            print(temp.data,"->",sep="",end="")
            temp = temp.next
            while (temp != self.head):
                print(temp.data,"->",sep="",end="")
                temp = temp.next
            print()

            
def run():
    ll=CircularSLL() 
    flag=True
    while flag:
        choice=int(input("1.insertAtStart \n2.insertAtEnd \n3.insertAfter \n4.DeleteAtStart \n5.DeleteAtEnd \n6.DeletetAfter \n7.Display \n8.Exit\nEnter the choice : "))
        if choice==1:
            inp=int(input("Enter the number : "))
            ll.insertAtBegin(inp)
        elif choice==2:
            inp=int(input("Enter the number : "))
            ll.insertAtEnd(inp)
        elif choice==3:
            prev=int(input("Enter the prev number : "))
            inp=int(input("Enter the number : "))
            ll.insertAfter(prev,inp)
        elif choice==4:
            ll.deleteAtBegin()
        elif choice==5:
            ll.deleteAtEnd()
        elif choice==6:
            inp=int(input("Enter the number : "))
            ll.deleteAny(inp)
        elif choice==7:
            ll.display()
        elif choice==8:
            flag=False
        else:
            print("Invalid Choice...")
       
run()   
