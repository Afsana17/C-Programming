#include<stdio.h>
#include<stdlib.h>
int main()
{
int year;
printf("Enter a year:");
scanf("%d",&year);
if(year%4==0)
{

    printf(" %d is a Leap Year",year);
}
else if(year%100==0)
{

    printf("%d Is not a leap year",year);
}
else if(year%400==0)
{

 printf(" %d is a Leap Year",year);
}
else
{

    printf("%d Is not a leap year",year);
}
}