#include<stdio.h>
int main()
{
    int n,i,a[100];
    int key,found = 0;

    printf("Enter the size: ");
    scanf("%d",&n);

    printf("Enter the elements: \n");
    for( i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter the key to search: ");
    scanf("%d",&key);
    for(i=0; i<n; i++)
    {
        if(a[i]==key)
        {
            found = 1;
            break;
        }
    }

    if(found == 1)
    {
        printf("Found at index: %d\n",i);
    }
    else
    {
        printf("not found");
    }
    return 0;
}