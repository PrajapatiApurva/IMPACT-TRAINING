#include<stdio.h>
void selection(int arr[],int num){
    for (int i = 0; i < num; i++)
    {
        int min=i;
        for (int j = i+1; j < num; j++)
        {
            if(arr[min]>arr[j]){
                min=j;
            }
        }
        if(min!=i){
            int temp=arr[min];
            arr[min]=arr[i];
            arr[i]=temp;
        }
    }
    for (int i = 0; i < num; i++)
    {
        printf("%d ",arr[i]);
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
    
    selection(arr,num);

    return 0;
}