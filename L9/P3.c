#include<stdio.h>
#include<stdlib.h>
int WOW(int x)
{
	if (x %2==0) 
		return x/2;
	else 
		return 3*x+1;
}
int main()
{
	int n,k;
	printf("n=");
	scanf("%d", &n);
	while (n >= 2)
	{
		k = WOW(n);
		printf("%d->", k);
		printf("%d", k);
		n = k;
	}
	system("pause");
	return 0;
}