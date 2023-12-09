#include<stdio.h>
#include<stdlib.h>
unsigned int factorial(unsigned int num)
{

    int result=1,i;
    for(i=2;i<=num;i++)
    {

        result=result*i;

    }
    return result;
}
    int main()
    {
        int num;
        printf("Enter a Positive Value: ");
scanf("%d",&num);
printf("Factorial of %d is %d",num,factorial(num));
    }

