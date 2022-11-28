#include<stdio.h>
void bubblesort();
int Bubble_Sort()
{
    int arr[25],n,i,j;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter arrays elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d/n",&arr[i]);
    }
    bubblesort(arr,n);
    printf("sorting element are: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
void bubblesort(int arr[25],int n)
{
    for(int j=0;j <n-1;j++)
    {
        for(int i=0;i<n-j-1;i++)
        {
            if(arr[i]>arr[i+1])
            {
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        
            
        }
    }
}