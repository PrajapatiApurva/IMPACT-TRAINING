# check whether a given number can be expressed as the sum of teo prime number
num=int(input())

def isPrime(i):
    for i in range(2,int(num/2)):
        if(num%i==0):
            return False
    return True

prime=2
count=0
for i in range(prime,num+1):
    a=num-prime
    b=prime
    if(isPrime(a)==1 and isPrime(b)==1):
        print(num,"=",a,"+",b)
        count+=1
        
print("NoofWays = ",count)