/*Sa se implementeze QuickSort recursiv*/
#include<stdio.h>
#include<stdlib.h>
int v[100];
void QuickSort(int v[], int st, int dr)
{
	if (st < dr)
	{
		int m = (st + dr) / 2;
		int aux = v[st];
		v[st] = v[m];
		v[m] = aux;
		int i = st, j = dr, d = 0;
		while (i < j)
		{
			if (v[i] > v[j])
			{
				aux = v[i];
				v[i] = v[j];
				v[j] = aux;
				d = 1 - d;
			}
			i += d;
			j -= 1 - d;
		}
		QuickSort(v, st, i - 1);
		QuickSort(v, i + 1, dr);
	}
}
int main()
{
	int i,N;
	printf("N=");
	scanf("%d", &N);
	for (i = 1; i <= N; i++)
	{
		printf("v[%d]=", i);
		scanf("%d",& v[i]);
	}
	QuickSort(1, N - 1,v[i]);
	for (i = 1; i <= N; i++)
	{
		printf("%d ", v[i]);
	}
	system("pause");
	return 0;
}
