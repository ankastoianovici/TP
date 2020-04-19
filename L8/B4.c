/*Sa se implementeze suma numerelor pana la “N” printr-o functie recursiva si prin metodele
repetitive (for, while, do while)*/
//RECURSIV
#include<stdio.h>
#include<stdlib.h>
int Suma(int n)
{
	if (n == 0)
		return 0;
	else
		return(n + Suma(n - 1));
}
int main()
{
	int N;
	printf("N=");
	scanf("%d", &N);
	printf("Suma numerelor pana la %d este %d\n", N, Suma(N));
	system("pause");
	return 0;
}
//FOR
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int N, S = 0, i;
	printf("N=");
	scanf("%d", &N);
	for (i = 1; i <= N; i++)
		S = S + i;
	printf("Suma numerelor pana la %d este %d\n", N, S);
	system("pause");
	return 0;
}
//WHILE
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int N, S = 0, k = 1;
	printf("N=");
	scanf("%d", &N);
	while (k <= N)
	{
		S = S + k;
		k++;
	}
	printf("Suma numerelor pana la %d este %d\n", N, S);
	system("pause");
	return 0;
}
//DO...WHILE
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int N, S = 0, k = 1;
	printf("N=");
	scanf("%d", &N);
	do
	{
		S = S + k;
		k++;
	} while (k <= N);
	printf("Suma numerelor pana la %d este %d\n", N, S);
	system("pause");
	return 0;
}