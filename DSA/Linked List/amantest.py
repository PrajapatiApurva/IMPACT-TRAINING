# Node class creation
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


# class to create linked list

class linkedlist:
    def __init__(self):
        self.head = None  # initializing Head

    # inserting node at begining
    def insertBegin(self, data):
        new_node = Node(data)
        if self.head is None:
            self.head = new_node
        else:
            new_node.next = self.head
            self.head = new_node

    # insert the node at the end

    def insertEnd(self, data):
        new_node = Node(data)
        if self.head is None:
            self.head = new_node
        else:
            current_node = self.head
            while (current_node.next):
                current_node = current_node.next
            current_node.next = new_node

    #insert at given index

    def insertIndex(self,data,index):
        new_node=Node(data)
        current_node=self.head
        position=0

        if (position == index):
            self.insertBegin(data)
        else:
            while(current_node.next!=None and position+1!=index):
                position+=1
                current_node=current_node.next
            if (position+1==index):
                new_node.next=current_node.next
                current_node.next=new_node
            else:
                print("Index is not present")


    # removing the node from begining
    def removeBegin(self):
        if (self.head == None):
            return
        self.head = self.head.next

    # remove from end
    def removeEnd(self):
        if (self.head == None):
            return
        while (current_node.next.next):
            current_node = current_node.next
        current_node.next = None

    # to display the linked list
    def Dis(self):
        current_node = self.head
        while (current_node):
            print(current_node.data, end=' -> ')
            current_node = current_node.next
        print("NULL")


llist = linkedlist()
llist.insertBegin('c')
llist.insertBegin('d')
llist.insertBegin('e')
llist.insertIndex('a',2)


llist.Dis()