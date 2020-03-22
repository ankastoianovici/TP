//Sa se scrie un program care insumeaza elementele intr-o metoda separate de metoda main, folosind transmiterea prin referinta.
#include <stdio.h>
#include <stdlib.h>
int suma(int n, int v[20])
{
	int i, k = 0;
	for (i = 0; i < n; i++)
		k = k + v[i];
	return k;
}

int main()
{
	int n, i, *v, s;
	printf("n=");
	scanf("%d", &n;
	v = (int *)malloc(n * sizeof(int));
	for (i = 0; i < n; i++)
	{
		printf("v[%d]=", i + 1);
		scanf("%d", (v + i));
	}
	s = 0;
	s = suma(n, v);
	printf("Suma=%d\n", s);
	system("pause");
	return 0;
}
