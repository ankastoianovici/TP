#include <stdio.h> 
#include<stdlib.h>
int Vector(int v[], int n)
{
	int x = v[0];
	int ok = 1;
	for (int i = 1; i < n; i++)
	{
		if (v[i] == v[i - 1])
			return 0;
		if (v[i] < v[i - 1])
			ok = 0;
		x = x + v[i];
	}
	if (ok == 1)
		return 0;
	if (x == n * (n + 1) / 2)
		return x;
}
int Print(int v[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d ", &v[i]);
	printf("\n");
}
/*void swap(int *a, int *b) {
	int aux = *a;
	*a = *b;
	*b = aux;
}*/
void Permuta(int v[], int l, int n)
{

	int aux;
	if (l == 1)
	{
		print(v, n);
		return;
	}
	for (int i = 0; i < l; i++)
	{
		Permuta(v, l - 1, n);
		if (l % 2 == 1)
		{
			aux = v[0];
			v[0] = v[l - 1];
			v[l - 1] = aux;
		}
			//swap(v[0], v[l - 1]);
		else
		{
			aux = v[i];
			v[i] = v[l - 1];
			v[l - 1] = aux;
		}
			//swap(v[i], v[l - 1]);
	}
}
int main()
{
	//nu merge eu am vrut sa bag permutarile intr-un vector 
	//cumva sa am vector in vector
	int v[] = { 1,3,2};
	int n;
	scanf("%d", &n);
	Permuta(v, n, n);
	if (Vector(v , n))
		printf("%d",v);
	system("pause");
	return 0;
}

