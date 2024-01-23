#include<stdio.h>
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int partition(int arr[],int lb,int ub){

    int pivot=arr[lb];
    int s=lb;
    int l=ub;
    while(s<l){
        while (arr[s]<=pivot)
        {
            s++;
        }
        while (arr[l]>pivot)
        {
            l--;
        }
        if(s<l){
            swap(&arr[s],&arr[l]);
        }
    }
    swap(&arr[lb],&arr[l]);
    return l;
}

void quickSort(int arr[],int lb,int ub){
    int pivot;
    if(lb<ub){
        pivot=partition(arr,lb,ub);
        quickSort(arr,lb,pivot-1);
        quickSort(arr,pivot+1,ub);
    }
}
void oddev(int arr[],int num){
    int temp[num];
    int j=0;
    int k=num-1;
    for (int i = 0; i < num; i++)
    {
        if(arr[i]%2==0){
            temp[j]=arr[i];
            j++;
        }
        else
        {
            temp[k]=arr[i];
            k--;
        }
        
    }
    quickSort(temp,0,j);
    quickSort(temp,k,num-1);

    for (int i = 0; i < num; i++)
    {
        printf("%d ",temp[i]);
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
    
    oddev(arr,num);

    return 0;
}