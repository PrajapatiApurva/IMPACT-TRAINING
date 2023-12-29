l=[]
f=0
r=0
size=5

def insert(num):
    global r
    global size
    if r == size:
        print("Enalble to insert the element in the queue")
        return
    l.append(num)
    r=r+1

def delete():
    global f
    global r
    if (f==r and f==0 and r==0):
        print("Can't Enter element queue is empty")
        return
    elif f>r:
        return 
    elif f == r:
        print(l.pop(f))
        r=0
        f=0
    else:
        print(l.pop(f))
        # f=f+1

def display():
    if len(l)==0:
        print("queue is Empty")
        return
    print(l)


def run():
    while True:
        print("\n1.Push\n2.Pop\n3.Disply\n4.Exit\n")
        choice=int(input("Enter the choice: "))
        if choice==1:
                num=int(input("Enter The Number"))
                insert(num)
        elif choice==2:
                delete()
        elif choice==3:
                display()
        elif choice==4:
                break
        else:
            print("Enter the Valid Choice")

run()