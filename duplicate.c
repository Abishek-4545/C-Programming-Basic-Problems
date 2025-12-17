#include<stdio.h>
int main()
{
    int n,i,j,a[100];

    printf("Size: ");
    scanf("%d",&n);

    printf("Elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(a[i]==a[j])
            {
                printf("Duplicate %d found at index %d\n",a[i],i);
                break;
            }
            
        }
    }
    return 0;
}
