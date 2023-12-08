#include<stdio.h>
#include<stdlib.h>
typedef struct ComplexNum
{
    int real;
    int image;
}Complex;
Complex add( Complex X,Complex Y);
int main()
{
   Complex a,b,sum;
   a.real=50;
   a.image=60;
   b.real=60;
   b.image=70;
printf("a=%d+%di\n ",a.real,a.image);
 printf("b=%d+%di\n ",b.real,b.image);
 sum=add(a,b);
 printf("sum=%d+%di",sum.real,sum.image);
}
Complex add(Complex X,Complex Y)
{
Complex add;
add.real=X.real +Y.real;
add.image=X.image + Y.image;
return (add);
}
