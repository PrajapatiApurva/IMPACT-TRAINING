#include<stdio.h>
int binary(int arr[],int num,int target){
    if (num==0)
        return -1;
    int s=0;
    int l=num-1;
    while (s<=l)
    {
        int mid=s+(l-s)/2;
        if (arr[mid]==target){
            return mid;
        }
        else if(arr[mid]<target){
            s=mid+1;
        }
        else{
            l=mid-1;
        }
    }
    return -1;   
}
int main(){
    int num;
    printf("Enter the Length: ");
    scanf("%d",&num);
    int arr[num];
    printf("\nEnter The Elements : ");
    for (int i = 0; i < num; i++)
    {
        scanf("%d",&arr[i]);
    }
    int target;
    printf("\nEnter the Target: ");
    scanf("%d",&target);
    int ans=binary(arr,num,target);
    printf("%d",ans);

    return 0;
}