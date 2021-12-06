void main()
{
   printf("Enter the radius of the circle");
   int r;
   scanf("%d",&r);  //storing the value of the radius of the circle.
   A=area(r);  //Call by value for area
   C=circum(r);  //Call by value for circumference
   printf("The area of the circle is: %f",A);
   printf("The circumference of the circle is: %f",C);
}
float area(int x)
{
   int a1;
   a1=3.14*x*x;  //calculating the value of the area
   return(a1);  //returning the value of calculated area
}
float circum(int y)
{
    int c1;
    c1=2*3.14*y;  //calculating the value of circumference
    return(c1);  //returning the value of calculated circumference.
}
