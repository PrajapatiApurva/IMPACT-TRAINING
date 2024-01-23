class MinStack:
    def __init__(self) -> None:
        self.n=int(input("Enter the length: "))
        self.stack=[]*self.n
        self.min=[]*self.n
        self.stacktop=-1
        self.mintop=-1
        self.run()

    def stackpush(self,num):
        if(self.stacktop==self.n-1):
            print("Overflow Condition Raised...")
        else:
            self.stacktop+=1
            self.stack.append(num)
    def minpush(self,num):
        if(self.mintop==self.n-1):
            print("Overflow Condition Raised...")
        else:
            self.mintop+=1
            self.min.append(num)
    def stackpop(self)->int:
        if(self.stacktop==-1):
            print("Stack is empty, Nothing to POP")
        else:
            temp = self.stack.pop()
            self.stacktop-=1
            return temp
    def minpop(self)->int:
        if(self.mintop==-1):
            print("Stack is empty, Nothing to POP")
        else:
            temp = self.min.pop()
            self.mintop-=1
            return temp
    def stackpeek(self)->int:
        if(self.stacktop==-1):
            print("Stack is empty, Nothing to PEEK")
        else:
            temp=self.stack.pop()
            self.stack.append(temp)
            return temp
    def minpeek(self)->int:
        if(self.mintop==-1):
            print("Stack is empty, Nothing to PEEK")
        else:
            temp=self.min.pop()
            self.min.append(temp)
            return temp
    def run(self):
        flag=True
        while(flag):
            choice=int(input("Select the choice:1.push 2.pop 3.peek 4.MinimumFind 5.exit\n"))
            if(choice==1):
                value=int(input("Enter the number you want to push: "))
                self.stackpush(value)
                if(self.mintop==-1):
                    self.minpush(value)
                elif(self.mintop!=-1 and value<=self.minpeek()):
                    self.minpush(value)
                else:
                    self.minpush(self.minpeek())
            elif(choice==2):
                print(self.stackpop(),"is popped from stack...")
                print(self.minpop(),"is popped from MinStack...")
            elif(choice==3):
                print(self.stackpeek(),"is at the Top of the stack...")
            elif(choice==4):
                print(self.minpeek(),"is the minimum element in the stack...")    
            elif(choice==5):
                flag=False
            else:
                print("Enter Valid choice...")
                
option=MinStack()
    