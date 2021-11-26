
#include <stdio.h>
/*WAP to find the smallest and largest element in an array*/
#include <stdio.h>
int main()
{
    int i ,j, low,hig,n;
    printf("enter the size of the array");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("enter the element");
        scanf("%d",&a[i]);
        
    }
   hig=low=a[0];
   for(i=1;i<n;i++)
   {
       if(a[i]>hig)
       hig=a[i];
       if(a[i]<low)
       low=a[i];
   }
   
    printf("the highest and the lowest numner in the entered array is %d and %d respectively,\n",hig,low);
    return 0;
}


