#include<stdio.h>
int main()
{
    int n,i,l,ss,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    if(a[0]>a[1])
    {
        l=a[0];
        ss=a[1];
    }
    else
    {
        l=a[1];
        ss=a[0];
    }
    for(i=2;i<n;i++)
    {
        if(a[i]>l)
        {
            ss=l;
            l=a[i];
        }
    }
    printf("slar%d",ss);
    return 0;
}