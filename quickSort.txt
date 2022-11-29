#include<stdio.h>
void quicksort(int a[100],int first,int last)
{
    int i,j,pivot,temp;
    if(first<last)
    {
        pivot=first;
        i=first;
        j=last;
    
    while(i<j)
    {
        while(a[pivot]>=a[i]&&i<j)
        {
            i++;
        }
        while(a[pivot]<a[j])
        {
            j--;
        }
        if(i<j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    
    temp=a[pivot];
    a[pivot]=a[j];
    a[j]=temp;
    quicksort(a,first,j-1);
    quicksort(a,j+1,last);
}
}
int Quick_Sort()
{
    int a[100],n;
    printf("enter the size of array: ");
    scanf("%d",&n);
    printf("enter the array element: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    quicksort(a,0,n-1);
    printf("The sorting elements are: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;

}
