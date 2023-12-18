#include <stdio.h>
#include<stdlib.h>
int main()
{
int n;
printf("Enter a number:");
scanf("%d",&n);
int a=0,b=1,sum;
printf("Fibonacci Series are: \n");
for(int i=0;i<n;i++)
{
    if(i<=1)
    {
sum=i;
    }
    else{
       sum=a+b;
       a=b;
       b=sum;
    }
    printf("%d \n",sum);
}
}