#include<stdio.h>
int main()
{
    int n,i,a[100];

    printf("Size: ");
    scanf("%d",&n);

    printf("Array: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    printf("the elements are");
    for(i=0;i<n;i++)
    {
        if(a[i]>10)
        {
            printf("%d \n",a[i]);
        }
    }
    return 0;

}