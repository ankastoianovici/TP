#include<stdio.h>
#include<stdlib.h>
int v[100];
int main()
{
	int n, i;
	int nr, p, k = 0;
	scanf("%d", &n);
	scanf("%d", &v[1]);
	p = 1;
	nr = v[1];
	for (int i = 2; i <= n; i++)
	{
		scanf("%d", &v[i]);
		if (v[i] == nr)
			p++;
		else
		{
			if (p > 0)
				p--;
			else
			{
				nr = v[i];
				p = 1;
			}
		}
	}
	for (int i = 1; i <= n; ++i)
	{
		if (v[i] == nr) ++k;
	}
	if (k > n / 2)
		printf("%d ", nr);
	system("pause");
	return 0;
}
