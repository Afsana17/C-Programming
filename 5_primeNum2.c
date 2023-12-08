#include<stdio.h>
#include<stdlib.h>
int main()
{
  int Number=200;
  int flag= 1;
  double sqroot=sqrt(Number);
  for (int i=2;i<=sqroot;i++)
    {
     if(Number %i==0){
    flag==0;
  break;
  }
  }

    if(flag)
    {

        printf("The given number %d is Prime Number",Number);

    }
    else{
         printf("The given number %d is Not a Prime Number",Number);

    }
}