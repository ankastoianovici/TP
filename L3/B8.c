//Sa se calculeze patratul unui numar natural N introdus de la tastatura folosind doar operatiile de tip bit wise.
#include<stdlib.h>
#include<stdio.h>
int patrat(int n)
{
	int x;
	if (n == 0)
		return 0;
	x = n >> 1;
	if (n & 1 == 1)
		return ((patrat(x) << 2) + (x << 2) + 1);//impar
	else
		return (patrat(x) << 2);//par
}
int main()
{
	int n;
	printf("n=");
	scanf("%d", &n);
	printf("n^2=%d\n", patrat(n));
	system("pause");
	return 0;
}


#include<stdio.h>
#include<stdlib.h>
int produs(int a, int b)
{
	int s = 0;
	while (b > 0)
	{
		if (b & 1 == 1)
			s = s + a;
		a = a << 1;
		b = b >> 1;
	}
	return s;
}
int main()
{
	int n;
	printf("n="); scanf("%d", &n);
	printf("%d", produs(n, n));
	system("pause");
	return 0;

}
