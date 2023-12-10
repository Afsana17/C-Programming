#include<stdio.h>
#include<stdlib.h>
int main()
{

  int i,s=0;
  int n;
  printf("Enter  a Number :");
  scanf("%d",&n);
  i=0;
  while(i<=n)
  {

      s=s+i;
      i++;

  }

  printf("The Sum of Natural Number is %d",s);
}
