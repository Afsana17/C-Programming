#include<stdio.h>
#include<stdlib.h>
int main()
{

    int ch;
    printf("Alphabet from (A-Z) are:\n");
    for(ch=65;ch<=90;ch++)
    {

        printf("%c ",ch);
    }
    printf("\nAlphabet from (a-z) are:\n");
    for(ch=97;ch<=122;ch++)
    {

        printf("%c",ch);
    }
}