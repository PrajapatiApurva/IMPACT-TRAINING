#include<stdio.h>
void bubble(int arr[],int num){
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num-i; j++)
        {
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
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
    
    bubble(arr,num);

    return 0;
}