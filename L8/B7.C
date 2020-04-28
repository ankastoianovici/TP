#include<stdio.h>
#include<stdlib.h>
long RD(long n)
{
	if (n == 0) 
		return 0;
	else 
		return RD(n / 10) + n % 10;
}
int main()
{
	long N;
	printf("N=");
	scanf("%d", &N);
	printf("%d\n",RD(RD(RD(N))));
	system("pause");
	return 0;
}
//P.S. NU MERGE PENTRU NUMERE >9.999.999.999