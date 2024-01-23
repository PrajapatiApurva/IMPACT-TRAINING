#include<stdio.h>
void selection(int arr[],int num){
    for (int i = 1; i < num; i++)
    {
        int temp=arr[i];
        int j=i-1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j+1]=arr[j];
            j-=1;
        }
        arr[j+1]=temp;
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