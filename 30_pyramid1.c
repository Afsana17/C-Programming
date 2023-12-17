#include <stdio.h>
#include<stdlib.h>
int main()
{
   int rows;
   printf("Enter the number of Rows:");
   scanf("%d",&rows);
   for(int i=1;i<=rows;i++)
   {
       for (int j=1;j<=i;j++)
        {
        printf("%d",i);
       }
        printf("\n");
   }

}