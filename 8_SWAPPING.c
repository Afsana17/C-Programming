#include<stdio.h>
#include<stdlib.h>
int main()
{

   int x;
   int y;
   printf("Enter the first value:");
   scanf("%d",&x);
   printf("Enter the Second Value:");
   scanf("%d",&y);
   printf("Before Swapping :x=%d and y=%d \n",x,y);
   int temp=x;
   x=y;
   y=temp;
   printf("  After Swapping:x= %d and y=%d",x,y);
   return 0;
}