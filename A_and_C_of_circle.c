#include <stdio.h>
float area(int x); //Declaration of the function area
float circumference(int y);  //Declaration of the function circumference
void main() // Declaration of the main function
{
    float r, area1, cf1;
    printf("Enter the radius of the circle: ");
    scanf("%f",&r);
    area1=area(r);  //Calling the function to calculate the area of the circle
    cf1=circumference(r);  //Calling the function to calculate the circumference of the circle
    printf("The calculated area of the circle is: %f\n",area1);
    printf("The calculated circumference of the circle is: %f\n",cf1);
}
float area(int x)  //Definition of the area function
{
    float A;
    A=3.14*x*x;
    return(A);
}
float circumference(int y)  //Definition of the circumference function
{
    float C;
    C=2*3.14*y;
    return(C);
}
