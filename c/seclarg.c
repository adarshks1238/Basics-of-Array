#include<stdio.h>
int main()
{
    int a[50],n,i;
    int max=-548742652,secmax=-548742652;
    printf("Enter the size of array:");
    scanf("%d",&n);
    if(n>2)
    {
        printf("Enter the elements in the array\n");
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        printf("Array:");
        for(i=0;i<n;i++)
        {
            printf("%d ",a[i]);
        }
        for(i=0;i<n;i++)
        {
            if(a[i]>max)
            {
                secmax=max;
                max=a[i];
            }
            else if(a[i]>secmax && a[i]<max)
            {
                secmax=a[i];
            }
        }
        if(secmax==-548742652)
        {
            printf("\nWe cannot find the second largest element from array");
        }
        else
        {
            printf("\nSecond largest element is %d",secmax);
        }

    }
    else
    {
        printf("Size of the array must be more than 2");
        return 1;
    }
    return 0;
}