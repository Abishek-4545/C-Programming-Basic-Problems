#include<stdio.h>
int main()
{
    int i,j,n,a[100];
    int count;
    printf("Size: ");
    scanf("%d",&n);

    printf("Elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d\n",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        int counted = 0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                counted = 1;
                break;
            }
        }

        if(counted==1)
            continue;

            for(j=i+1;j<n;j++)
            {
                if(a[i]==a[j])
                    count++;
            }
            printf("%d-----%dtimes\n",a[i],count);
    }
    return 0;

}