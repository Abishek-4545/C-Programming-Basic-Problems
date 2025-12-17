#include<stdio.h>
int main()
{
    int n,i,a[100];
    int arr[100];
    printf("Size: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            arr[i] = a[i+1];
        }
        else if(i==n-1)
        {
            arr[i] = a[n-1];
        }
        else 
        {
            arr[i] = a[i-1]+a[i+1];
        } 
    }
     for(i=0;i<n;i++)
        {
            printf("%d ",arr[i]);
        }
    return 0;
}