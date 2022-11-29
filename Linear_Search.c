#include<stdio.h>
int search(int a[],int n,int k);
int flag=0;
int Linear_Search()
{
    int a[25],n,k;
    printf("enter the size of array: ");
    scanf("%d",&n);
    printf("enetr the array element: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element do you want to search?: ");
    scanf("%d",&k);
    int ans=search(a,n,k);
    if(flag==1)
    {
        printf("%d element is present in the array at %d index",k,ans);        
    }
    else{
        printf("%d element is not present in the array",k);
    }
    return 0;
}
int search(int a[],int n,int k)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            flag=flag+1;
            return i;
            break;
        }
    }
}