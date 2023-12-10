#include<stdio.h>
#include<stdlib.h>

int sumofnaturalnum(int num)
{
    if(num!=0)
        return num+sumofnaturalnum( num-1);
    else
        return num;
}



int main()
{
  int n;
  printf("Enter  a Number :");
  scanf("%d",&n);
  printf("The Sum of Natural Number is :%d", sumofnaturalnum(n));
}