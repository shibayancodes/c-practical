// #include<stdio.h>
// void insertionsort(int arr[],int n)
// {
//     for (int i=0;i<n;i++)
//     {
//         int j=i;
//         while(j>=1 && arr[j]<arr[j-1])
//         {
//             int temp=arr[j];
//             arr[j]=arr[j-1];
//             arr[j-1]=temp;
//             j--;
//         }
//     }
// }
// int main()
// {
//     int n;
//     printf("Enter the total element : ");
//     scanf("%d",&n);

//     int arr[n];
//     for (int i=0;i<n;i++)
//     {
//         scanf("%d",&arr[i]);
//     }

//     insertionsort(arr,n);

//     for (int i=0;i<n;i++)
//     {
//         printf("%d",arr[i]);
//     }
// }
#include<stdio.h>
void insertionsort(int arr[], int n)
{
    for (int i=0;i<n;i++)
    {
        int j=i;
        while(j>=1 && arr[j]<arr[j-1])
        {
            int temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
            j--;
        }
    }
}
int main()
{
    int n;
    printf("enter total no of elements in array : ");
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("enter the array elements : ");
        scanf("%d",&arr[i]);
    }

    insertionsort(arr,n);
     for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
}