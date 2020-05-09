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
void Permutare(char *s, int l, int r)
{
	int i;
	if (l == r)
		printf("%s\n", s);
	else
	{
		for (i = l; i <= r; i++)
		{
			Interschimba((s + l), (s + i));
			Permutare(s, l + 1, r);
			Interschimba((s + l), (s + i)); 
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