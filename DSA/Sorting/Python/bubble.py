def bubble(arr):
    n=len(arr)
    for i in range(n):
        for j in range(0,n-i-1):
            if arr[j]>arr[j+1]:
                temp=arr[j]
                arr[j]=arr[j+1]
                arr[j+1]=temp
    return arr            
            
if __name__=="__main__":
    inp=list(map(int,input("Enter the Elements : ").split()))
    ans=bubble(inp)
    print(ans)