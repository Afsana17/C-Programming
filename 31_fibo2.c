#include <stdio.h>
#include<stdlib.h>
//fibo using recursion
int fibo(int n)
{
    if(n<=1)
    {

        return n;
    }
    else
    {

        return fibo(n-1)+fibo(n-2);
          }

}
int main()
{
int n;
    printf("Enter a Number:\n");
    scanf("%d",&n);
        printf("Fibonacci Series Are:");
    for (int i=0;i<n;i++)
    {
        printf("%d \n",fibo(i));
    }
}