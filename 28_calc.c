#include<stdio.h>
#include<stdlib.h>
int main()
{

char operator;
double n1,n2,result;
printf ("Enter a Valid Operator(+,-,*,/):");
scanf("%c",&operator);
printf("Enter n1 and n2:");
scanf("%lf %lf",&n1,&n2);
switch(operator)

{

    case '+':
    result=n1 + n2;
    break;
    case '-':
    result=n1 - n2;
    break;
    case '*':
    result=n1 * n2;
    break;
    case '/':
    if(n2!=0){
    result=n1 / n2;
    }
    else{
    printf("Number cannot be divisible by Zero \n");
    return 1;
    }
    break;
    default:
        printf("Error:Enter a Valid Number\n");
        return 1;

}
printf("Result is %lf",result);

}