// #include<stdio.h>
// void selectionsort(int arr[],int n)
// {
//     for (int i=0;i<n-1;i++)
//     {
//         int min_index=i;
//         for(int j=i;j<n;j++)
//         {
//             if(arr[j]<arr[min_index])
//             {
//                 min_index=j;
//             }
//         }
//      int temp=arr[i];
//      arr[i]=arr[min_index];
//      arr[min_index]=temp;
//     }
// }
// int main()
// {
//     int n;
//     printf("Enter total array element : ");
//     scanf("%d",&n);

//     int arr[n];
//     for (int i=0;i<n;i++)
//     {
//         printf("Enter array elements : ");
//         scanf("%d",&arr[i]);
//     }
//     selectionsort(arr,n);

//     for(int i=0;i<n;i++)
//     {
//         printf("%d",arr[i]);
//     }
// }
#include<stdio.h>
void selectionsort(int arr[],int n)
{
    for (int i=0;i<n-1;i++)
    {
        int min_index=i;
        for (int j=i;j<n;j++)
        {
            if (arr[j]<arr[min_index])
            {
                min_index=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[min_index];
        arr[min_index]=temp;
    }
}
int main()
{
    int n;
    printf("Enter total no of array elements : ");
    scanf("%d",&n);

    int arr[n];
    for (int i=0;i<n;i++)
    {
        printf("Enter array elements : ");
        scanf("%d",&arr[i]);
    }
    selectionsort(arr,n);
    for (int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}