#include<stdio.h>
#include<stdlib.h>
int main()
{
int original_number;
printf("Enter a Number:");
scanf("%d",&original_number);
int reversed=0;
int num=original_number;
while(num!=0)
{

    int r=num%10;
    reversed=reversed*10+r;
  num=  num/10;
}
    if(reversed==original_number)
    {

        printf("The  given number %d is a palindrome number",original_number);

    }
    else{
      printf(" The given number %d is not a palindrome number",original_number);


    }
}