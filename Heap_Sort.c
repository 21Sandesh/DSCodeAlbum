#include<stdio.h>
void heapsort();
void heapify();
void swap();
int Heap_Sort()
{
    int arr[25],i,n;
    printf("Enter no of element: ");
    scanf("%d",&n);
    printf("Enter array elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d/n",&arr[i]);
    }
    heapsort(arr,n);
    printf("sorting elements are: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
void heapsort(int arr[25],int n)
{
    for(int i=n/2-1;i>=0;i--)
    {
        heapify(arr,n,i);
    }
    for(int i=n-1;i>=0;i--)
    {
        swap(&arr[0],&arr[i]);
        heapify(arr,i,0);
    }
}
void heapify(int arr[25],int n,int i)
{
    int largest=i;
    int left=2*i+1;
    int right=2*i+2;
    if(left<n && arr[left]>arr[largest])
    {
        largest=left;
    }
    if(right<n && arr[right]>arr[largest])
    {
        largest=right;
    }
    if(largest != i)
    {
        swap(&arr[i],&arr[largest]);
        heapify(arr,n,largest);
    }
}
void swap(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}