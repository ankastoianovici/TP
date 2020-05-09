#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void Interschimba(char *x, char *y)
{
	char aux;
	aux = *x;
	*x = *y;
	*y = aux;
}
void Permutare(char *s, int i, int j)
{
	int k;
	if (i == j)
		printf("%s\n", s);
	else
	{
		for (k = i; k <= j; k++)
		{
			Interschimba((s + i), (s + k));
			Permutare(s, i + 1, j);
			Interschimba((s + i), (s + k)); 
		}
	}
}
int main()
{
	char sir[20];
	printf("Sirul:");
	scanf("%s", sir);
	int n = strlen(sir);
	Permutare(sir, 0, n - 1);
	system("pause");
	return 0;
}
