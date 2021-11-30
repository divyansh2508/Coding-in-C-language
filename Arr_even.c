#include <stdio.h>
void main()
{
  int i,n,count;
  printf("Enter the size of the array: ");
  scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i++)
  {
    printf("Enter element%d: ",i+1); //inputing the elements in the array
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    if(a[i]%2==0) //checking each and every element if it is divisible by 2
    {
       count+=1; //increasing the count if the condition is true
    }
  }
  printf("The number of even elements in the entered array is %d.\n",count); //displaying the result according to entered array
}
