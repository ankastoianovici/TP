/*Se da o matrice ce reprezinta un labirint. Trebuie sa se gaseasca drumul din punctul (0,0) catre
punctul (n,n). Campurile de “1” reprezinta loc liber, iar punctele de “0” reprezinta zid. Sa se scrie la
sfarsit tot drumul.*/
/*#include<stdio.h>
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
	return 1;}
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
		printf("%d", m[T[i].x][T[i].y]);
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
*/

/*#include<stdio.h>
#include<stdlib.h>
int N, M;
 int poz_init_X, poz_init_Y;
 int poz_finala_X, poz_finala_Y;
 int m[100][100];
 int directii = 4;
 int di[4] = { -1, 0, 1,  0 };
 int dj[4] = { 0,  1, 0, -1 };
void Citire()
{	
	printf("N=");
	scanf("%d", &N);
	printf("M=");
	scanf("%d", &M);
	printf("po initial\n");
	scanf("%d", &poz_init_X);
	scanf("%d", &poz_init_Y);
	printf("poz finala\n");
	scanf("%d", &poz_finala_X);
	scanf("%d", &poz_finala_Y);
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
		{
			printf("m[%d][%d]=", i, j);
			scanf("%d", &m[i][j]);
		}
}

int Valid(int i, int j)
{
	if (i > N || i < 0)
		return 0;
	if (j > M || j < 0)
		return 0;

	if (m[i][j] == 1 || (i == poz_finala_X && j == poz_finala_Y))
		return 1;

	if (m[i][j] == 0 || m[i][j])
		return 0;

	return 1;
}

void Print()
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
			printf(" %d",m[i][j]);
			//printf("%d-%d", i, j);
		printf("\n");
	}
	//printf("\n\n");
}

int Bkt(int i, int j, int nr)
{
	if (i == poz_finala_X && j == poz_finala_Y)
		Print();
	else
	{
		for (int k = 0; k < directii; k++)
		{
			int i_vecin = i + di[k];
			int j_vecin = j + dj[k];
			if (Valid(i_vecin, j_vecin))
			{
				m[i_vecin][j_vecin] = nr;
				//printf("%d %d", i_vecin, j_vecin);
				Bkt(i_vecin, j_vecin, nr + 1);
				m[i_vecin][j_vecin] = 0;
			}
		}
	}
}

int main()
{
	Citire();
	Bkt(poz_init_X, poz_init_Y, 2);
	system("pause");
	return 0;
}*/

#include<stdio.h>
#include<stdlib.h>
struct pozitie
{
	int x, y;
}d[50];
int a[20][20];//labirintul
int k, n, m, Li, Ci;
//pozitie d[50]
/*void afis_mat() //afiseaza matricea
{
	int i, j;
	printf("\n");
	for ( i = 1; i <= m; i++)
	{
		for (j = 1; j <= n; j++)
		{
			printf("a[%d][%d]=", i, j);
			scanf("%d", &a[i][j]);
		}
		printf("\n");
	}
}*/
int tipar(int k) //tipareste vectorul drum
{
	//nr_sol++;
	//printf("solutia ",nr_sol);
	printf("\n");
	for (int i = 1; i <= k; i++)
		printf("%d,%d", d[i].y, d[i].x);
	//	cout << "(" << d[i].x << ',' << d[i].y << ") ";
	//afis_mat();
	//getch();
	printf("\n");
}
int ies(int x, int y) //genereaza drumul
{
	if (a[x][y] == 0)
	{
		k++;
		a[x][y] = 2;
		d[k].x = x;
		d[k].y = y;
		if ((x < 1) || (x > m) || (y < 1) || (y > n))
			tipar(k);
		else
		{
			ies(x - 1, y);
			ies(x, y + 1);
			ies(x + 1, y);
			ies(x, y - 1);
		}
		a[x][y] = 0; //la revenire din apel demarchez celula pentru a o putea
							//accesa si in cadrul altei prelucrari
		k--;//eliberez componenta din vectorul drumului
	}
}
void citire()
{
	/*fstream f;
	f.open("labir.txt", ios::in);
	if (f)
		cout << "ok";
	else
		cout << "eroare la deschidere";*/
	//Citesc matricea ce reprezinta labirintul
	int i, j;
	printf("m=");
	scanf("%d", &m);
	printf("n=");
	scanf("%d", &n);
	for (i = 1; i <= m; i++)
		for (j = 1; j <= n; j++)
		{
			printf("a[%d][%d]=", i, j);
			scanf("%d", &a[i][j]);
		}
	printf("Pozitia initiala a soarecului:");
	scanf("%d", &Li);
	scanf("%d", &Ci);
	
	/*f >> m >> n;
	for (int i = 1; i <= m; i++)
		for (int j = 1; j <= n; j++)
			f >> a[i][j];
	f >> Li >> Ci;*/
	//coordonatele punctului in care se afla soricelul
}
int main()
{
	//clrscr();
	k = 0;
	citire();
	ies(Li, Ci);
	//afis_mat();
	system("pause");
	return 0;

}


