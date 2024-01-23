def insertion(arr):
    n=len(arr)
    for i in range(1,n):
        temp=arr[i]
        j=i-1
        while(j>=0 and arr[j]>temp):
            arr[j+1]=arr[j]
            j-=1
        arr[j+1]=temp
    return arr            
            
if __name__=="__main__":
    inp=list(map(int,input("Enter the Elements : ").split()))
    ans=insertion(inp)
    print(ans)