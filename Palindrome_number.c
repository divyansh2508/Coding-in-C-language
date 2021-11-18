/*WAP to enter a number and check whether it is a palindrome number or not*/
#include <stdio.h>
void main()
{
int x, r, rev, y=0;
printf("x = ");
scanf("%d",&x);
rev=x;
while(x>0)
{r=x%10;
 y=(y*10)+r;
 x=x/10;}
if(rev==y)
    printf("true");
else
    printf("false");
}