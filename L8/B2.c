/*Sa se implementeze calculul de factorial sub urmatoarea forma:
- Functie “tail-recursive”
- Functie “ non-tailed-recursive”
- Functie “direct recursive”
- Functie “indirect recursive”*/
#include<stdio.h>
#include<stdlib.h>
int Factorial(int n) //tail
{
	if (n == 1)
		return 1;
	else
		return n * Factorial(n - 1);
}
int main()
{
	int N;
	printf("N=");
	scanf("%d", &N);
	printf("%d!=%d\n", N,Factorial(N));
	system("pause");
	return 0;
}

