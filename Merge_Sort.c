#include<stdio.h>
void mergesort(int a[],int x,int y);
void merge();
int b[100];
int Merge_Sort()
{
    int a[100],n;
    printf("enter the size of array: ");
    scanf("%d",&n);
    printf("enter the array elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    mergesort(a,0,n-1);
    printf("the sorting elements are: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
return 0;

}
void mergesort(int a[100],int low,int high)
{
    if(low<high)
    {
        int mid=(low+high)/2;
        mergesort(a,low,mid);
        mergesort(a,mid+1,high);
        merge(a,low,mid,high);
    }
}
void merge(int a[],int low,int mid,int high)
{
    int i,j,k;
    
        i=low;
        j=mid+1;
        k=low;
        while(i<=mid && j<=high)
        {
            if(a[i]<=a[j])
            {
                b[k]=a[i];
                i++;
            }
            else{
                b[k]=a[j];
                j++;
            }
            k++;
        }
        if(i>mid)
        {
            for(int l=j;l<=high;l++)
            {
                b[k]=a[l];
                k++;
            }
        }
        else{
            for(int l=i;l<=mid;l++)
            {
                b[k]=a[l];
                k++;
            }
        }
        for(int i=low;i<=high;i++)
        {
            a[i]=b[i];
        }
    }
