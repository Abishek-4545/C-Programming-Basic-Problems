#include<stdio.h>
int main()
{
    int n,i,a[100];
    int min, max;

    printf("Enter thr size of the array: ");
    scanf("%d",&n);

    printf("Enter the elements of the array: \n");
    
    for( i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    max = min = a[0];
    for( i=0; i<n; i++)
    {
        if(a[i]>max)
        {
            max = a[i];
        }
        else if(a[i]<min)
        {
            min = a[i];
        }
    }
        
      
    
    printf("max: %d\n",max);
    printf("min: %d",min);
    
    return 0;
}
