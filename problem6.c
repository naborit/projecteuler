/**
 * Written by Naborit Dutta
 * URL :: https://projecteuler.net/problem=6
 **/
#include<stdio.h>
int square_sum()
{
	int i;
	int sum = 0;
	for(i = 1; i <= 100; i++)
	{
		sum = sum + (i * i);
	}
	return sum;
}

int sum_square()
{
	int sum = 50 * 101;   // n(n+1)/2 where n = 100, (100 * 101) / 2 = 50 * 101
	return (sum * sum);
}

int main()
{
	int diff = square_sum() - sum_square();
	printf("%d \n", diff);
	return 0;
}
