#include<stdio.h>
int main()
{
    int n,i,a[100];

    printf("Size: ");
    scanf("%d",&n);

    printf("Elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    int max,secondmax;
    if(a[0]>a[1])
    {
        max = a[0];
    }
    else
    {
        secondmax = a[1];
    }

    for(i=2;i<n;i++)
    {
        if(a[i]>max)
        {
            secondmax = max;
            max = a[i];
            
        }
        else if(a[i]>secondmax && a[i]!=max)
        {
            secondmax = a[i];
        }
    }
    printf("%d: ",secondmax);
    return 0;
}