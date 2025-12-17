#include<stdio.h>
int main()
{
    int n,i,a[100];
    int evencount = 0 ,oddcount = 0;

    printf("Enter thr size of the array: ");
    scanf("%d",&n);

    printf("Enter the elements of the array: \n");
    for( i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            evencount++;
        }
        else
        {
            oddcount++;
        }
    }
    printf("Even count: %d\n",evencount);
    printf("Odd count: %d",oddcount);
    return 0;
}
