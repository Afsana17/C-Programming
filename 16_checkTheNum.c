#include<stdio.h>
#include<stdlib.h>
int main()
{

    int A;
    printf("Enter the Value :");
    scanf("%d",&A);
    if(A>0)
    {

        printf("The value is positive");
    }
    else if(A<0)
    {

        printf("The value is Negative",A);

    }
    else{
        printf("The value is Zero");
    }
}