#include<stdio.h>
int linear(int arr[],int len,int target){
    for (int i = 0; i < len; i++)
    {
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
    
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
    int target;
    printf("Enter the Target: ");
    scanf("%d",&target);
    int ans=linear(arr,num,target);
    printf("%d",ans);

    return 0;
    
}