/**
 * Written by Naborit Dutta
 * URL :: https://projecteuler.net/problem=1
 **/

#include<stdio.h>
int main()
{
int n;
int s=0;
for(n=0;n<1000;n++)
{
	if(n%3==0 || n%5==0)
		s=s+n;
}
		printf("the multiple is %d\n",s);

}

