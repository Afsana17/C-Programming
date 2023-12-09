#include<stdio.h>
#include<stdlib.h>
unsigned int factorial(unsigned int num)
{
    if(num==1)
    {

        return 1;
    }
    return num*factorial(num-1);
}

    int main()
    {
        int num;
        printf("Enter a Positive Value: ");
scanf("%d",&num);
printf("Factorial of %d is %d",num,factorial(num));
    }

