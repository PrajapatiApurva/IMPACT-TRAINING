def binary(arr,s,l,target):
    if(s>l):
        return -1
    elif len(arr)==0:
        return -1
    mid=s+(l-s)//2
    if target==arr[mid]:
        return mid
    elif target>arr[mid]:
        return binary(arr,mid+1,l,target)
    else:
        return binary(arr,s,mid-1,target) 
    return -1

if __name__=="__main__":
    inp=list(map(int,input("Enter the Elements : ")))
    target=int(input("Enter the Target : "))
    print(binary(inp,0,len(inp),target))
    