#include<stdio.h>
int main()
{
    int a[50],rev[50];
    int i=0,n=0;
    int temp;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter the values to the array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\ninput array:");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
   for(i=0;i<n/2;i++)
   {
        temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
   }
    printf("\nReversed array:");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}