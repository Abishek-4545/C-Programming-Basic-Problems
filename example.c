#include<stdio.h>
int main()
{
    int n,i,a[100];
    int count=0;

    printf("Size: ");
    scanf("%d",&n);

    printf("Elements: \n");
    for(i = 0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        if(a[i]%3==0 && a[i]%5 !=0)
        {
            count++;
        }
    }
    printf("Count = %d",count);
    return 0;
}