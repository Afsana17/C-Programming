#include<stdio.h>
#include<stdlib.h>
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


int lcm(int x, int y) {
    return (x * y) / gcd(x, y);
}

int main() {
    int x, y;

    printf("Enter first number: ");
    scanf("%d", &x);
    printf("Enter second number: ");
    scanf("%d", &y);


    printf("The LCM of %d and %d is %d.\n", x, y, lcm(x, y));

    return 0;
}