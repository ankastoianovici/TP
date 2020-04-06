/*Nea Vasile se intoarce acasa de la cumparaturi, si realizeaza ca si - a uitat codul de la casa scarii.In
acest moment Nea Vasile are nevoie de ajutorul nostru.Se stie ca pentru codul respective sunt
folosite 4 cifre din cele 10 (0…9), insa el fiind si la o varsta inaintata nu mai tine minte exact care cifre
erau mai exact.Sa se genereze toate combinatiile luate cate 4 a celor pe care si le aminteste nea’
Vasile. (Cifrele nu se pot repeta)
Input: 5 6 1 2 0 3
	Output :
	0123
	0125
	…..
	6523
	6532*/
#include<stdio.h>
#include<stdlib.h>
int x[100], n,w[100];
void Init(int k)
{
	x[k] = 0;
}
int Successor(int k)
{
	if (x[k]< n)
		return 1;
	else
		return 0;
}
int Valid(int k)
{
	int ok = 1, i;
	for (i = 1; i <= k - 1; i++)
		if (w[x[i]] == w[x[k]])
			ok = 0;
	return ok;
}
int Solution(int k)
{
	if (k == 4)
		return 1;
	else
		return 0;
}
void Print(int k)
{
	int i;
	for (i = 1; i <= k; i++)
		printf("%d ", w[x[i]]);
	printf("\n");
}
void Bkt()
{
	int k;
	k = 1;
	Init(k);
	while (k > 0)
		if (Successor(k) == 1)
		{
			x[k] = x[k] + 1;
			if (Valid(k) == 1)
				if (Solution(k) == 1)
					Print(k);
				else
				{
					k++;
					Init(k);
				}
		}
		else
			k--;
}
int main()
{
	printf("n=");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		printf("w[i]=");
		scanf("%d", &w[i]);
	}
	Bkt();
	system("pause");
	return 0;
}