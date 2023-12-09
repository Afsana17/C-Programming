#include<stdio.h>
#include<stdlib.h>
int main()
{

    int ch;
    printf("Alphabets from (A-Z) are:\n");
   ch='A';
    while(ch<='Z')
    {

        printf("%c ",ch);
        ch++;
    }
     printf("\n Alphabets from (a-z) are:");
    ch='a';
    while (ch<='z')
    {
           printf(" %c",ch);
           ch++;
    }
}