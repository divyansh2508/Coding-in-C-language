float area(int x);
float circumference(int y);
#include <stdio.h>
void main()
{
    float r, area1, cf1;
    printf("Enter the radius of the circle: ");
    scanf("%f",&r);
    area1=area(r);
    cf1=circumference(r);
    printf("The calculated area of the circle is: %f\n",area1);
    printf("The calculated circumference of the circle is: %f\n",cf1);
}
float area(int x)
{
    float A;
    A=3.14*x*x;
    return(A);
}
float circumference(int y)
{
    float C;
    C=2*3.14*y;
    return(C);
}