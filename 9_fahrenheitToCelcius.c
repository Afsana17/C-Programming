#include<stdio.h>
#include<stdlib.h>
float f_to_c(float f)
{
    return((f-32.0)*5.0/9);

}
int main()
{
float f=60;
printf("Fahrenheit to Celcius is: %.3f",f_to_c(f));
return 0;
}
