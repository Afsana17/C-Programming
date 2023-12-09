#include<stdio.h>
#include<stdlib.h>
int main()
{

    int ch;
    printf("Alphabet from (A-Z) are:\n");
    for(ch='A';ch<='Z';ch++)
    {

        printf("%c ",ch);
    }
    printf("\nAlphabet from (a-z) are:\n");
    for(ch='a';ch<='z';ch++)
    {

        printf("%c",ch);
    }
}