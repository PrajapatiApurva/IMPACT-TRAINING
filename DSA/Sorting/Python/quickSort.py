def partition(arr,lb,ub):
    pivot=arr[lb]
    s=lb
    l=ub
    while(s<l):
        while(arr[s]<=pivot):
            s+=1
            if len(arr)-1 == s:# aapde aa pan lai shakie l=s
                break
            
        while(arr[l]>pivot):
            l=l-1
        if(s<l):
            (arr[s],arr[l])=(arr[l],arr[s])
    (arr[lb],arr[l])=(arr[l],arr[lb])
    return l
            

def quickSort(arr,lb,ub):
    if(lb<ub):
        pivot=partition(arr,lb,ub)
        quickSort(arr,lb,pivot-1)
        quickSort(arr,pivot+1,ub)
        
    return arr            
            
if __name__=="__main__":
    inp=list(map(int,input("Enter the Elements : ").split()))
    ans=quickSort(inp,0,len(inp)-1)
    print(ans)