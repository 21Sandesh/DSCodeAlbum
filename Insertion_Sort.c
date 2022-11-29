#include<stdio.h>
void insertion(int a[],int n);
int Insertion_Sort()
{
    int a[100],n;
    printf("enter the size of array: ");
    scanf("%d",&n);
    printf("enter the array element: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    insertion(a,n);
    printf("sorting array is: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
void insertion(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
        int temp=a[i];
       int j=i-1;
        while(j>=0 && a[j]>temp)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
}