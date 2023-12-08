TYPE 1:

#include<stdio.h>
#include<stdlib.h>
void Prime(int Num){
    int Number=1;
    for(int i=1;i<=Num/2;i++){
        if(Num%i==0){
       Number==0;
break;
        }
    }
    if(Number){
        printf("The given number %d is  a Prime number \n",Num);
    }
    else{
        printf("The given number %d is not a Prime Number \n ",Num);
    }
    return;
}
int main()
{
int Num=1103;
Prime(Num);
}

     