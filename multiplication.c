#include <stdio.h>
void main()
{
    int sum=0, count=0, a, b;
    printf("Enter two numbers to be multiplied.\n");
    scanf("%d %d",&a,&b);
    while(count<b)
    {
        sum+=a;
        count+=1;
    }
    printf("The multiplication of the entered numbers is: %d" ,sum);
}