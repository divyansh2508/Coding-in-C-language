#include <stdio.h>
int add(int a[], int n)
{
    int sum=0,i;
    if(n<=0)
    {
        return 0;
    }

    return (add(a,n-1)+a[n-1]);
}
void main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter element%d: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("The sum of all the array elemants is: %d\n",add(a,10));
}