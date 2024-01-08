#* Print sum of series 3 + 33 + 333 ... using stack

class Stack:
    def _init_(self,cap):
         self.list=[]
         self.Top=-1
         self.MaxCap=cap

    def push(self,num):
        
        if (self.Top) == (self.MaxCap) -1:
            print("Stack is Full")
            return
        if(self.Top==-1):
            self.list.append(num)
            self.Top+=1
        else:
            self.list.append('3'+self.list[self.Top])
            self.Top+=1
        

    def pop(self):
       
        if(self.Top==-1):
            print("Stack is Empty")
            return
        
        self.Top-=1
        return self.list[self.Top+1]

    def display(self):

        if not self.list:
            print("Stack is Empty")
            return
        print()  #just for new line   
        for i in range(int(self.Top),-1,-1):
            print("|",self.list[i],"|")
        print()  #just for new line   
                


n=int(input("Enter N:"))
list = Stack(n)
for i in range (0,n):
    list.push('3')

list.display()

sum=0

for i in range(0,n):
    sum+=int(list.pop())

print(sum)