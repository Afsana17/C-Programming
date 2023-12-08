#include<stdio.h>
#include<stdlib.h>
float mul(float A,float B)
{

    return A*B;
}
int main()
{
    float A=20.5,B=5.4,temp;
    temp=mul(A,B);
    printf("The Answer is:%.2f",temp);
}