#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,y;
    int max;
	printf("Enter a number X:");
	scanf("%d",&x);
	printf("Enter a number Y:");
	scanf("%d",&y);

	max = (x > y) ? x : y;
	while (1) {
		if (max % x == 0 && max % y == 0) {
			printf("The LCM of %d and %d is %d.", x, y,
				max);
			break;
		}

		++max;
	}

	return 0;
}