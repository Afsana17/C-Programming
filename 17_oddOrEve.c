#include<stdio.h>
#include<stdlib.h>
void EvenOrOdd(int N)
{

    int r=N%2;
       {

        if(r==0)
        {
            printf("The Given number is Even");

        }
        else{
            printf("the Given number is Odd");
        }
    }
}
int main()
{
    int N;
    printf("Enter the Value:");
    scanf("%d",&N);
    EvenOrOdd(N);

}