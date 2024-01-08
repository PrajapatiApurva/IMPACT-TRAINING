from datetime import date

total=80

div=input("Enter the Division: ")
count=int(input("Enter the total count from 80 : "))
absent,present=0,0
abs_num=[]
pres_num=[]
numbers=None
choice=input("Enter your choice: ")

if(choice=='present'):
    pres_num=list(map(int,input("Enter Present Numbers: ").strip().split()))
    for i in range(1,total-count+1):
        if(i not in pres_num):
            abs_num.append(i)
    present=count
    absent=80-count

elif(choice=='absent'):
    abs_num=list(map(int,input("Enter Present Numbers: ").strip().split()))
    for i in range(1,total-count+1):
        if(i not in pres_num):
            pres_num.append(i)
    present=count
    absent=80-count
    
abs_num.sort()
pres_num.sort()
# print("Numbers are: ",*l)#unpacking-->*  packing-->[]
print("Present Numbers are: ",present)
print("Absent Numbers are: ",absent)
file = open('read.txt', 'a') 
file.writelines('Date:'+repr(date.today().day)+'-'+repr(date.today().month)+'-'+repr(date.today().year)+'\tDivsion:'+repr(div)+"\n"+
                "Present Numbers are: \n"+repr(pres_num)+
                "\n\nAbsent Numbers are: \n"+repr(abs_num)+"\n\n\n") 
file.close() 