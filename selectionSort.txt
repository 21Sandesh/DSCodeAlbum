#include<stdio.h>
void selection(int a[],int n);
void sswap(int *, int *);
int Selection_Sort()
{
    int a[100],n;
    printf("enter the size of array: ");
    scanf("%d",&n);
    printf("enter the array element: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    selection(a,n);
    printf("sorting array is: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
void selection(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        if(min != i)
        {
            sswap(&a[min], &a[i]);
        }
    }
}
void sswap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}