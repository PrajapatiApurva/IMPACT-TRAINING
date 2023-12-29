class StackImplemet:
    def __init__(self):
        self.l = []
        self.MAXCAP=5
        self.TOP=0
        self.BOTTOM=0

    def pushStack(self,num):
        if self.TOP==self.MAXCAP:
            print("Stack is full","\nUnable to insert ",num," in stack")
            return
        self.l.append(num)
        self.TOP=self.TOP+1
        
    def popStack(self):
        if self.TOP==self.BOTTOM:
            print("Stack is Empty")
            return
        print("Poped out ",self.l[self.TOP-1])
        self.l.pop()
        self.TOP=self.TOP-1
        
    def dispList(self):
        if not self.l:
            print("Stack is empty")
            return
        print(self.l)

    def display(self):
        while True:
            print("1.push\n2.pop\n3.display\n4.exit\n")
            ch=int(input("Choice: "))
            if ch==1:
                num=int(input("Enter the number: "))
                self.pushStack(num)
            elif ch==2:
                self.popStack()
            elif ch==3:
                self.dispList()
            elif ch==4:
                break
            else:
                print("Enter valid choice!!!")
                    
    # display(self)
    
test=StackImplemet()
test.display()
