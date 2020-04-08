/*5. Se da un set de valori “W”.Sa se scrie la sfarsit toate combinatiile a elementelor din setul respectiv
care sa dea suma “S” fara a se repeta valorile din W.
Input:
W = { 1, 3, 5, 6, 7 }
S = 12

Output :
	1 - 5 - 6
	5 - 7*/
#include<stdio.h>
#include<stdlib.h>
int x[100], w[100], suma, n;
int valid(int i, int nr, int s) 
{
	if(((nr + s) >= suma) && ((nr == suma) || (nr + w[i + 1] <= suma))==1)
		return 1;
	else
		return 0;
}
int Bkt(int i, int nr, int s) 
{
	int j;
	if (valid(i, nr, s)==1)
	{
		if (nr == suma) 
		{
			
			for (j = 0; j <= i; j++)
				if (x[j]==1)
					printf("%d-", w[j]);
			printf("\n");
		}
		else
		{
			x[i + 1] = 1;
			Bkt(i + 1, nr + w[i + 1], s - w[i + 1]);
			x[i + 1] = 0;
			Bkt(i + 1, nr, s - w[i + 1]);
		}
	}
}
int main()
{
	int i, n, s = 0;

	printf("n=");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("w[%d]=", i + 1);
		scanf("%d", &w[i]);
		s= s+w[i];
	}
	printf("s=");
	scanf("%d", &suma);
	if ((s < suma))
		for (i = 0; i < n; i++)
			x[i] = 0;
		Bkt(-1, 0, s);
	system("pause");
	return 0;
}
