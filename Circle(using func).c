void main()
{
   printf("Enter the radius of the circle");
   int r;
   scanf("%d",&r);
   A=area(r);
   C=circum(r);
   printf("The area of the circle is: %f",A);
   printf("The circumference of the circle is: %f",C);
}
float area(int x)
{
   int a1;
   a1=3.14*x*x;
   return(a1);
}
float circum(int y)
{
    int c1;
    c1=2*3.14*y;
    return(c1);
}