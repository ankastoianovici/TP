#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int Random()
{
	printf("ENTER:");
	int n = (rand() % 11);
	getc(stdin);
	printf("numarul  tau %d\n", n);
}
int Suma(int n)
{
	if (n == 0)
		return 0;
	else
		return(n + Suma(n - 1));
}
int main()
{
	Random();
	int d, a, i, n, m;
	char F[20], f[20];
	printf("Cate foldere vrem:");//pentru ca faza cu random nu merge cum vreau 
	scanf("%d", &m);
	for (n = 1; n <= m; n++)
	{
		printf("Folder:");
		scanf("%s", F);
		printf("Adancime:");
		scanf("%d", &a);
		if (a > 10) // sau 5 
			printf("No se puede\n");
		else
		{
			for (i = 1; i <= a; i++)
			{
				printf("Fisier:");
				scanf("%s", f);
				printf("Dimensiune:");
				scanf("%d", &d);
			}
			Suma(d);
		}
	}
	printf("%d\n", Suma(d));
	system("pause");
	return 0;
}

//P.S. AM VRUT SA FAC CEVA CU ARBORI DOAR CA NU MA PRICEP ,NICI ASA NU PREA MERGE