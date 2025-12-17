#include<stdio.h>
int main()
{
    int i,j,n1,n2,a[100],b[100],temp,mer[1000];
    int total;
    printf("Size of n1: ");
    scanf("%d",&n1);
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Size of n2: ");
    scanf("%d",&n2);
    for(i=0;i<n2;i++)
    {
        scanf("%d",&b[i]);
    }

    for(i=0;i<n1;i++)
    {
        mer[i] = a[i];
    }

    for(i=0;i<n2;i++)
    {
        mer[n1 +i] = b[i];
    }
    total =n1+n2;

    for(i=0;i<total-1;i++)
    {
        for(j=i+1;j<total;j++)
        {
            if(mer[i]>mer[j])
            {
                temp = mer[i];
                mer[i] = mer[j];
                mer[j] = temp;
            }
           
        }
    }
    for(i=0;i<total;i++)
    {
        printf("%d ",mer[i]);
    }
    for(i=total-1;i>=0;i--)
    {
        printf("%d ",mer[i]);
    }
    return 0;
}