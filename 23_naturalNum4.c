#include<stdio.h>
#include<stdlib.h>

int main()
{
  int s,a;
  int num;
  printf("Enter  a Number :");
  scanf("%d",&num);

s=num*(num+1);
a=(int )(s/2);
printf("The Sum of Natural Number is %d",a);
}
