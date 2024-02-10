#include<stdio.h>
int binary(int arr[],int num,int start,int end,int target){
    
    if (start>end || num==0)
        return -1;
    
    int mid=start+((end-start)/2);

    if (arr[mid]==target)
        return mid;
    
    else if(arr[mid]<target)
        return binary(arr,num,mid+1,end,target);
    
    else
        return binary(arr,num,start,mid-1,target);
    

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
    int ans=binary(arr,num,0,num-1,target);
    printf("%d",ans);

    return 0;
}