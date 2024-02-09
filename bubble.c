// #include<stdio.h>
// void bubblesort(int arr[],int n)
// {
//     for(int i=0;i<n-1;i++)
//     {
//         for(int j=0;j<n-1-i;j++)
//         {
//             if(arr[j]>arr[j+1])
//             {
//                 int temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//             }
//         }
//     }
// }
// int main()
// {
//     int n;
//     printf("Enter total array elements : ");
//     scanf("%d",&n);

//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         printf("Enter elemnts of array : ");
//         scanf("%d",&arr[i]);
//     }
//     bubblesort(arr,n);
//      for(int i=0;i<n;i++)
//     {
//         printf("sorted arry is : ");
//         printf("%d",arr[i]);
//     }
//     return 0;
// }
#include<stdio.h>
void bubblesort(int arr[],int n)
{
    for (int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main()
{
    int n;
    printf("Enter array elements : ");
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter array elements : ");
        scanf("%d",&arr[i]);
    }
    bubblesort(arr,n);
    for (int i=0;i<n;i++)
    {
        printf("\n");
        printf(" sorted array is : %d ", arr[i]);
    }
}