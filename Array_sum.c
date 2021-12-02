#include <stdio.h>
void main()
{
  int x,y,i,j,sum=0;
  printf("Enter the order of the matrix [][]: ");
  scanf("%d %d",&i,&j);  //initializing the order of the matrix
  int a[i][j];  //declaring the size of the 2-D array
  for(x=0;x<i;x++)
  {
    for(y=0;y<j;y++)
    {
      printf("Enter Element ");
      scanf("%d",&a[x][y]);  //entering the elements in the array
    }
  }
  for(x=0;x<i;x++)
  {
    for(y=0;y<j;y++)
    {  
      sum+=a[x][y];  //calculating the sum of the row elements of the matrix
    }
    printf("The sum of row%d is: %d\n",x,sum);
    sum=0;
  }
  for(y=0;y<j;y++)
  {
    for(x=0;x<i;x++)
    {  
      sum+=a[x][y];  //calculating the sum of the column elements of the matrix
    }
    printf("The sum of column%d is: %d\n",y,sum);
    sum=0;
  }
}
