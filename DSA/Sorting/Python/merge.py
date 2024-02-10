def merge(arr:list,lb,mid,ub):
    i=lb
    j=mid+1
    temp=[0]*20
    k=lb
    while(i<=mid and j<=ub):
        if arr[i]<=arr[j]:
            temp.insert(k,arr[i])
            k+=1
            i+=1
        else:
            temp.insert(k,arr[j])
            k+=1
            j+=1
    if i>mid:
        while j<=ub:
            temp.insert(k,arr[j])
            k+=1
            j+=1
    else:
        while i<=mid:
            temp.insert(k,arr[i])
            k+=1
            i+=1

    for k in range(lb,ub+1):
        arr[k]=temp[k]    

def mergeSort(arr,lb,ub):
    if lb<ub:
        mid=lb+((ub-lb)//2)
        mergeSort(arr,lb,mid)
        mergeSort(arr,mid+1,ub)
        merge(arr,lb,mid,ub)

if __name__=="__main__":
    inp=list(map(int,input("Enter the Elements: ").split()))
    mergeSort(inp,0,len(inp)-1)
    print(*inp)

# def merge(arr, lb, mid, ub):
#     i = lb
#     j = mid + 1
#     k = lb
#     b = [0] * 20

#     while i <= mid and j <= ub:
#         if arr[i] <= arr[j]:
#             b[k] = arr[i]
#             k += 1
#             i += 1
#         else:
#             b[k] = arr[j]
#             k += 1
#             j += 1

#     while i <= mid:
#         b[k] = arr[i]
#         k += 1
#         i += 1

#     while j <= ub:
#         b[k] = arr[j]
#         k += 1
#         j += 1

#     for i in range(lb, ub + 1):
#         arr[i] = b[i]


# def merge_sort(arr, lb, ub):
#     if lb < ub:
#         mid = lb+ (ub-lb) // 2
#         merge_sort(arr, lb, mid)
#         merge_sort(arr, mid + 1, ub)
#         merge(arr, lb, mid, ub)


# if __name__ == "__main__":
#     inp=list(map(int,input("Enter the Elements: ").split()))
#     merge_sort(inp,0,len(inp)-1)
#     print(*inp)