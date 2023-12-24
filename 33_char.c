#include <stdio.h>
#include<stdlib.h>
int main(){
int i,j;
char letter;
int rows;
printf("Enter a Character:");
scanf("%s",&letter);
printf("Enter a Number:");
scanf("%d",&rows);

for( i=0;i<rows;i++)
{

    for( j=0;j<=i;j++)
    {
        printf("%c",letter);
    }
    printf("\n");
    letter++;
}
}