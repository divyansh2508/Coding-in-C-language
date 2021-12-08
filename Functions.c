#include <stdio.h>
#include <math.h>
void armstrong(int x)
{
    int sum=0,temp,rev,count=0;
    temp=x;
    while(temp>0)
    {
        temp=temp/10;
        count+=1;
    }
    temp=x;
    while(temp>0)
    {
        rev=temp%10;
        temp=temp/10;
        sum=sum+pow(rev,count);
    }
    if(sum==x)
    {
        printf("Entered number is an Armstrong number\n");
    }
    else
    {
        printf("Entered number is not an armstrong number\n");
    }
}
void coprime(int x)
{
    int rev = 0, remainder;
    int temp=x;
    while (x != 0) 
    {
        remainder = x % 10;
        rev = rev * 10 + remainder;
        x /= 10;
    }
    if(rev==temp)
    {
        printf("The entered number is a coprime number\n");
    }
    else
    {
        printf("The entered number is not a coprime number\n");
    }
}
int factorial(int x)
{
    if(x==1)
    {
        return 1;
    }
    else
    {
        return x*factorial(x-1);
    }
}
void main()
{
    int n, y;
    printf("Enter any number: ");
    scanf("%d",&n);
    armstrong(n);
    coprime(n);
    y=factorial(n);
    printf("The factorial of the entered number is %d\n",y);
}
