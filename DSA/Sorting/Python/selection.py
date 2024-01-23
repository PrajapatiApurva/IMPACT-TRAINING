def selection(arr):
    n=len(arr)
    for i in range(n):
        min=i
        for j in range(i+1,n):
            if arr[min]>arr[j]:
                min=j
        if(i!=min):
            temp=arr[min]
            arr[min]=arr[i]
            arr[i]=temp    
        
    return arr            
            
if __name__=="__main__":
    inp=list(map(int,input("Enter the Elements : ").split()))
    ans=selection(inp)
    print(ans)