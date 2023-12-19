#include <stdio.h>
#include<stdlib.h>
int main()
{

    int n;
    printf("Enter a Number:");
    scanf("%d",&n);
    int temp=n;
   int  p=0;
    while(n>0)
    {

        int rem= n % 10;
        p = (p) + (rem * rem * rem);
        n = n / 10;
    }
      if (temp == p) {
        printf("Yes. It is Armstrong Number.");
    }
    else {
        printf("No. It is not an Armstrong Number.");
    }
}