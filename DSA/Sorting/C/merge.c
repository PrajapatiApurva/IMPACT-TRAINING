#include<stdio.h>

int merge(int a[],int lb,int mid,int ub){
    int i=lb;
    int j=mid+1;
    int b[20];
    int k=lb;
    while(i<=mid && j<=ub){
        if(a[i]<=a[j]){
            b[k]=a[i];
            k++;
            i++;
        }
        else{
            b[k]=a[j];
            k++;
            j++;
        }
    }
    if(i>mid){
        while (j<=ub){
            b[k]=a[j];
            k++;
            j++;
        }
    }
    else{
        while(i<=mid){
            b[k]=a[i];
            k++;
            i++;
        }
    }
    for (int i = lb; i <= ub; i++){
        a[i]=b[i];
    }
    
}

void mergeSort(int arr[],int lb,int ub){
    if(lb<ub){
        int mid=(lb+ub)/2;
        mergeSort(arr,lb,mid);
        mergeSort(arr,mid+1,ub);
        merge(arr,lb,mid,ub);
    }
}
int main(){
    int num;
    printf("Enter the Length: ");
    scanf("%d",&num);
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    mergeSort(arr,0,num-1);

    for (int i = 0; i < num; i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}