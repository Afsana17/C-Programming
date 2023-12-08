#include<stdio.h>
#include<stdlib.h>
int main()
{
int A,B,C;

printf("enter the number A B C:");
scanf("%d  %d %d",&A,&B,&C);
if(A>B&&A>C)
{

    printf("%d is the Greater number",A);
}
else if(B>A&&B>C)
{

    printf("%d is the Greater Number",B);
}
else{
    printf(" %d is the Greatest  Number",C);
}
}