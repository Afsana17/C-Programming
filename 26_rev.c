#include<stdio.h>
#include<stdlib.h>
int reDig(int num)
{

    int rev=0;
    while(num>0)
    {
   rev=rev*10+num%10;
   num=num/10;

    }
    return(rev);
}
int main()
{
  int num;
printf("Enter a Number:");
scanf("%d",&num);
 printf("The reverse Number of %d is:%d",num,reDig(num));


}