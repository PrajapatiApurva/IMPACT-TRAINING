l=[]
MAXCAP=5
TOP=0
BOTTOM=0

def pushStack(num):
    global TOP
    global MAXCAP
    if TOP==MAXCAP:
        print("Stack is full","\nUnable to insert ",num," in stack")
        return
    l.append(num)
    TOP=TOP+1
    
def popStack():
    global TOP
    global MAXCAP
    if TOP==BOTTOM:
        print("Stack is Empty")
        return
    print("Poped out ",l[TOP-1])
    l.pop()
    TOP=TOP-1
    
def dispList():
    if not l:
        print("Stack is empty")
        return
    print(l)

def display():
    while True:
        print("1.push\n2.pop\n3.display\n4.exit\n")
        ch=int(input("Choice: "))
        if ch==1:
            num=int(input("Enter the number: "))
            pushStack(num)
        elif ch==2:
            popStack()
        elif ch==3:
            dispList()
        elif ch==4:
            break
        else:
            print("Enter valid choice!!!")
                
display()