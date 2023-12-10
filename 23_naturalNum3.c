#include<stdio.h>
#include<stdlib.h>
int sumofnaturalnum(int num)
{
     int i,s=0;
     for (i=0;i<=num;i++)
     {
        s=s+i;

     }
     printf("The Sum of Natural Number is %d",s);
}
int main()
{

  int num;
  printf("Enter  a Number :");
  scanf("%d",&num);
  return sumofnaturalnum( num);
}