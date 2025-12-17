#include<stdio.h>
int main()
{
    int i,j,n,a[100];
    int sum = 0;
    int count = 0;
    int avg;

    printf("Size: ");
    scanf("%d",&n);
    printf("Elements :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum = sum+a[i];
    }

    avg = sum/n;
    for(i=0;i<n;i++)
    {
        if(avg>a[i])
        {
           count++;
        }
    }
    printf("count greater than avg: %d",count);
    return 0;
}