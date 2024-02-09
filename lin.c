// #include<stdio.h>
// int linearsearch(int arr[],int n,int target)
// {
//     for (int i=0;i<n;i++)
//     {
//         if (arr[i]==target)
//         {
//             return i;
//         }
//     }
//     return -1;
// }
// int main()
// {
//     int n;
//     printf("Enter the elments in an array : ");
//     scanf("%d",&n);

//     int arr[n];
//     printf("Enter elements in an array : ");
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     int target;
//     printf("Enter the target elment in an array : " );
//     scanf("%d",&target);

//     int result=linearsearch(arr,n,target);
//     printf("the element is found at %d",result);
// }
#include<stdio.h>
int linearSearch(int arr[],int n,int target)
{
    for (int i=0;i<n;i++)
    {
        if (arr[i]==target)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n;
    printf("Enter the array elemenrts : ");
    scanf("%d",&n);

    int arr[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int target;
    printf("Enter thet target element to find : ");
    int result=linearSearch(arr,n,target);
    if (result==-1)
    {
        printf("Not found");
    }
    else 
    {
        printf("found");
    }
}