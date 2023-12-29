# def funtionName(parameters):
#     *function docString*
#     function suite
#     return [expression]

def printStr(str):
    "Hello"
    print(str)
    return 

def isPrime(num):
    if num==1 or num<=1:
        return False
    if num==2:
        return True
    else:
        for i in range(3,int(num/2)+1):
            if(num%i==0):
                return False
    return True    
    
num=int(input())
print(isPrime(num))
str2="Hello World!!"
printStr(str2)