#include <stdio.h>
struct complex  //structure to code the complex number
{
  int real;
  int img;
};
struct complex add(struct complex x, struct complex y);  //initializing the addition function
struct complex multi(struct complex x, struct complex y);//initializing the multiplication function
void main()
{
  struct complex num1,num2,res1,res2;
  printf("Enter the real and imaginary part of the complex number1: ");
  scanf( "%d %d",&num1.real,&num1.img);
  printf("Enter the real and imaginary part of the complex number2: ");
  scanf( "%d %d",&num2.real,&num2.img);
  res1=add(num1,num2); //calling by value the addition function
  res2=multi(num1,num2);  //calling by value the multiplication function
  printf("The addition the entered two complex numbers %d+%di and %d+%di is %d+%di\n",num1.real,num1.img,num2.real,num2.img,res1.real,res1.img);  //displaying the result of addition of two complex numbers.
  printf("The multiplication the entered two complex numbers %d+%di and %d+%di is %d+%di\n",num1.real,num1.img,num2.real,num2.img,res2.real,res2.img);  //displaying the result of multiplication of two complex numbers.
}
struct complex add(struct complex x, struct complex y)
{
  struct complex sum;
  sum.real=x.real+y.real;
  sum.img=x.img+y.img;
  return sum;
}
struct complex multi(struct complex x, struct complex y)
{
  struct complex prod;
  prod.real=(x.real*y.real)-(x.img*y.img);
  prod.img=(x.real*y.img)+(y.real*x.img);
  return prod;
}
