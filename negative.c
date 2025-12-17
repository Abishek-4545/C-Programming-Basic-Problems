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

    for(i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            printf("%d\n",a[i]);
        }
        else{
            printf("no negative");
            break;
        }
    }
    return 0;
}