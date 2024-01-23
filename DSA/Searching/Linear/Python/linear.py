def linear(num,target):
    ln=len(num)
    for i in range(ln):
        if num[i]==target:
            return i

if __name__=="__main__":
    num=list(map(int,input("Enter the Elements :").split()))
    target=int(input("Enter the target: "))
    ans=linear(num,target)
    print(ans)
        