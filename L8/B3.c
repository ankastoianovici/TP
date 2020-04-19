/*Sa se implementeze binary search sub forma recursiva*/
#include<stdio.h>
#include<stdlib.h>
int w[10];
int Cautare_binara(int st, int dr, int n)
{
	int mij;
	if (st > dr)
		return -1;
	else
	{
		mij = (st + dr) / 2;
		if (n == w[mij])
			return mij;
		if (n < w[mij])
			return Cautare_binara(st, mij - 1, n);
		else
			return Cautare_binara(mij + 1, dr, n);
	}
}
int main()
{
	int i, y,N;
	printf("N=");
	scanf("%d", &N);
	for (i = 1; i <= N; i++)
	{
		printf("w[%d]=", i);
		scanf("%d",& w[i]);
	}
	printf("y=");// numarul pe care-l cautam
	scanf("%d", &y);
	printf("Numarul cautat este pe pozitia %d\n",Cautare_binara(0, N - 1, y));
	system("pause");
	return 0;
}
