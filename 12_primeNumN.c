#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>
bool Prime(int n){

if (n==1 ||n==0)
    return false;
for(int i=2;i<=n/2;i++){
    if(n%i==0)
    return false;
    break;
}
return true;
}
int main()
{

int N=40;
for (int i=1;i<=N;i++){
if(Prime(i))
    printf("%d \n",i);
}
}