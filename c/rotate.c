#include<stdio.h>
#include<stdlib.h>
void left(int a[50],int n);
void right(int a[50],int n);
void left(int a[50],int n)
{
    int temp;
    int d,i;
    printf("no.of rotation needed:");
    scanf("%d",&d);
    for(int j=0;j<d;j++)
    {
    temp=a[0];
    for(i=0;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    a[n-1]=temp;
    }
    printf("The left rotated array of %d time:",d);
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    exit(0);
}
void right(int a[50],int n)
{
    int temp;
    int d,i;
    printf("no.of rotation needed:");
    scanf("%d",&d);
    for(int j=0;j<d;j++)
    {
    temp=a[n-1];
    for(i=1;i<=n-1;i++)
    {
        a[n-i]=a[n-1-i];
    }
    a[0]=temp;
    }
    printf("The right rotated array of %d time:",d);
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    exit(0);
}
int main()
{
    int a[50];
    int n,i,c;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter the values to the array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter your choice");
    printf("\n1.Rotate left\n2.Rotate right\n3.Exit\n");
    scanf("%d",&c);
    while(1)
    {
    switch(c)
    {
    case 1:
        left(a,n);
        break;
    case 2:
        right(a,n);
        break;
    case 3:
        exit(0);
        break;
    default:
        printf("warning...Choose the correct value");
        break;
    }
    } 
    return 0;  
}
