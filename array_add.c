#include<stdio.h>
int main()
{
    int a[10],i,n,sum=0;
    printf("Enter the number of numbers to be added:\n");
    scanf("%d",&n);
    printf("Enter the numbers:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("Entered array elements are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nSum of entered array elements is %d.",sum);
    return 0;
}