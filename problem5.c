/**
 * Written by Naborit Dutta
 * URL :: https://projecteuler.net/problem=5
 **/

#include<stdio.h>
int is_divisible(int n)
{
	int i;
	int flag = 1; // Assumption line
	// Assuming that `n` will be divisible by 1 to 20
	for(i = 1; i<= 20; i++)
	{
		if(n % i != 0)
		{
			flag = 0;
			break;
		}
	}
	return flag;
}

int main()
{
	int n = 2520;
	int is_div;
	while ( n > 0 )
	{
		is_div = is_divisible(n);
		if(is_div == 1)
			break;
		n++;
	}
	printf("%d\n",n);
	return 0;
}
