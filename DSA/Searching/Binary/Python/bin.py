def binary(num,target):
    if len(num)==0:
        return -1
    s=0
    l=len(num)-1
    while s<=l:
        mid=s+((l-s)//2)
        if num[mid]==target:
            return mid
        elif num[mid]<target:
            s=mid+1
        else:
            l=mid-1
    return -1
if __name__=="__main__":
    lst=list(map(int,input("Enter the Elements : ").split()))
    inp=int(input("Enter the target : "))
    ans=binary(lst,inp)
    print(ans)
    