#include<stdio.h>
#include<stdlib.h>
int main()
{

    int ch;
    printf("Enter a Character:");
    scanf("%c",&ch);
    if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='I'||ch=='i'||ch=='o'||ch=='O'||ch=='U'||ch=='u')
   {
       printf("The  Character %c is Vowel",ch);
   }
    else{
        printf("The Character %c is consonant",ch);
    }
}