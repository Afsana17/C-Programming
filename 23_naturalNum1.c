#include<stdio.h>
#include<stdlib.h>
int main()
{

  int i,s=0;
  int n;
  printf("Enter  a Number :");
  scanf("%d",&n);
  for (i=0;i<=n;i++)
  {

      s=s+i;

  }

  printf("The Sum of Natural Number is %d",s);
}