#include<stdio.h>
int main()
{
    int n,i,k,a[100],rem[100];
    printf("Size: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    k =k%n;
    for(i=0;i<n;i++)
    {
        rem[(i+k)%n] = a[i];
    }

    for(i=0;i<n;i++)
    {
        printf("%d",rem[i]);
    }
    return 0;
    
}