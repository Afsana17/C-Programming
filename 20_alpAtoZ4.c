#include<stdio.h>
#include<stdlib.h>
int main()
{

    int ch;
    printf("Alphabets from (A-Z) are:\n");
   ch='A';
   do{
    printf("%c",ch);
    ch++;
   }
   while(ch<='Z');
   printf("\n Alphabets from (a-z) are:\n");
   ch='a';
   do{
    printf("%c",ch);
    ch++;
}
   while(ch<='z');

}