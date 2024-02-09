#include<stdio.h>
int binarySearch(int arr[],int left,int right,int target,int n)
{
    while(left<=right)
    {
        int mid=(left+right)/2;
        if(arr[mid]==target)
        {
            return mid;
        }
        else if (arr[mid]<target)
        {
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    return -1;
}
int main()
{
    int n;
    printf("Enter total array elements : ");
    scanf("%d",&n);

    int arr[n];
    for (int i=0;i<n;i++)
    {
        printf("Enter array elements : ");
        scanf("%d",&arr[i]);
    }

    int target;
    printf("Enter target elements : ");
    scanf("%d",&target);

    int result=binarySearch(arr,0,n-1,target,n);

    if (result==-1)
    {
        printf("Not found");
    }
    else{
        printf("element found at %d ",result);
    }
}