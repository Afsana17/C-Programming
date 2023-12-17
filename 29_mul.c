#include<stdio.h>
#include<stdlib.h>
void table(int range,int num)
{
int mul;


for(int i=1;i<=range;i++){
        mul=num*i;
    printf("%d*%d=%d\n",num,i,mul);

}
}
int main()
{
    int range;
    int num;
    printf("Enter  a Number:");
    scanf("%d",&range);
    printf("Enter a range:");
    scanf("%d",&num);
    table(range,num);
}