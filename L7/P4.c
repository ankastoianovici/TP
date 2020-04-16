/*Se da o matrice ce reprezinta un labirint. Trebuie sa se gaseasca drumul din punctul (0,0) catre
punctul (n,n). Campurile de “1” reprezinta loc liber, iar punctele de “0” reprezinta zid. Sa se scrie la
sfarsit tot drumul.*/
#include<stdio.h>
#include<stdlib.h>
 struct traseu
{
	int x, y;
}T[100];
int Dx[] = {-1,0,1,0 }, Dy[] = {0,1,0,-1};
int n, m[10][10], ls, cs, lb, cb, X[100];
void Citire()
{
	int i, j;
	printf("n=");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
		{
			printf("m[%d][%d]=", i, j);
			scanf("%d", &m[i][j]);
		}
	printf("Pozitia initiala a soarecului:");
	scanf("%d", &ls);
	scanf("%d", &cs);
	printf("Pozitia finala a soarecului:");
	scanf("%d", &lb);
	scanf("%d", &cb);
}
void Margine()
{
	int i;
	for (i = 0; i <= n + 1; i++)
	m[i][0] = m[i][n + 1] = 1;
	for (i = 1; i <= n ; i++)
	m[0][i] = m[n + 1][i] = 1;
	
}
void Init(int k)
{
	X[k] = 0;
}
int Successor(int k)
{
	if (X[k] < 4)
	{
		X[k] = X[k] + 1;
		T[k].x = T[k - 1].x + Dx[X[k]];
		T[k].y = T[k - 1].y + Dy[X[k]];
		return 1;
	}
	else
		return 0;
}
int Valid(int k)
{
	if (m[T[k].x][T[k].y] == 1)
		return 0;
	for (int i = 1; i < k; i++)
		if (T[i].x == T[k].x && T[i].y == T[k].y)
			return 0;
	return 1;
}
int Solution(int k)
{
	if (T[k].x == lb && T[k].y == cb)
		return 1;
	else
		return 0;
}
void Print(int k)
{
	int i;
	printf("(%d%d)\n", T[0].x, T[0].y);
	printf("-");
	for (i = 1; i <= k; i++){
		printf("(%d", T[i].x);
		printf("(%d", T[i].y);
		printf("-");
	}
	/*for (i = 1; i <= k; i++)
		printf("X[%d]", X[i]);
		printf("%d", m[T[i].x][T[i].y]);*/
	printf("\n");
}
void Bkt(int k)
{
	Init(k);
	while (Successor(k) == 1)
	{
		if (Valid(k) == 1)
		{
			if (Solution(k) == 1)
				Print(k);
			else
				Bkt(k + 1);
		}
		
	}
}
int main()
{
	Citire();
	Margine();
	T[0].x = ls; T[0].y = cs;
	Bkt(1);
	system("pause");
	return 0;
}


#include<stdio.h>
#include<stdlib.h>
struct pozitie
{
	int x, y;
}d[50];
int a[20][20];//labirintul
int k, n, Li, Ci;
/*void afis_mat() //afiseaza matricea
{
	int i, j;
	printf("\n");
	for ( i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			printf("a[%d][%d]=", i, j);
			scanf("%d", &a[i][j]);
		}
		printf("\n");
	}
}*/
int Print(int k) //tipareste vectorul drum
{
	printf("\n");
	for (int i = 1; i <= k; i++)
		printf("%d,%d", d[i].y, d[i].x);
	//afis_mat();
	printf("\n");
}
int Drum(int x, int y) //genereaza drumul
{
	if (a[x][y] == 0)
	{
		k++;
		a[x][y] = 2;
		d[k].x = x;
		d[k].y = y;
		if ((x < 1) || (x > n) || (y < 1) || (y > n))
			Print(k);
		else
		{
			Drum(x - 1, y);
			Drum(x, y + 1);
			Drum(x + 1, y);
			Drum(x, y - 1);
		}
		a[x][y] = 0; //la revenire din apel demarchez celula pentru a o putea
							//accesa si in cadrul altei prelucrari
		k--;//eliberez componenta din vectorul drumului
	}
}
void Citire()
{
	//Citesc matricea ce reprezinta labirintul
	int i, j;
	printf("n=");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
		{
			printf("a[%d][%d]=", i, j);
			scanf("%d", &a[i][j]);
		}
	printf("Pozitia initiala a soarecului:");
	scanf("%d", &Li);
	scanf("%d", &Ci);
	//coordonatele punctului in care se afla soricelul
}
int main()
{
	k = 0;
	Citire();
	Drum(Li, Ci);
	//afis_mat();
	system("pause");
	return 0;

}


