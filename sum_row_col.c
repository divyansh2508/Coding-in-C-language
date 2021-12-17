#include <stdio.h>
void main()
{
   int i,j,x,y,sum=0;
   printf("Enter the order of the matrix[][]: ");
   scanf("%d%d",&i,&j);
   int a[i][j];
   for(x=0;x<i;x++)
   {
     for(y=0;y<j;y++)
     {
        printf("Enter element[%d][%d]: ",x,y);
        scanf("%d",&a[x][y]);
     }
   }
   for(x=0;x<i;x++)
   {
     for(y=0;y<j;y++)
     {
        printf("%d ",a[x][y]);
     }
     printf("\n");
   }
   for(x=0;x<i;x++)
   {
     for(y=0;y<j;y++)
     {
        sum+=a[x][y];
     }
     printf("The sum of row%d is: %d\n",x,sum);
     sum=0;
   }
   for(x=0;x<i;x++)
   {
     for(y=0;y<j;y++)
     {
        sum+=a[y][x];
     }
     printf("The sum of column%d is: %d\n",x,sum);
     sum=0;
   }
}
