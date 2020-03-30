/*Sa se introduca într-o stiva toate numerele naturale pâna la
50. Din prima stiva se vor elimina numerele prime si se vor
adauga într-o a doua stiva sub forma binara.
A) Sa se adauge în stiva toate numerele naturale pâna la 50.
B) Sa se scoata din prima stiva numerele prime.
C) Transformarea numerelor prime în baza 2. (sub forma
finala)
D) Sa se populeze a doua stiva cu forma binara.
! Atentie la refacerea primei stive !*/

#include<stdio.h>
#include<stdlib.h>
#define max 100
int st[max];
int st2[max];
int s[max];
int v = -1;
int vf = -1;
int vf2 = -1;
void push(int n)
{
	if (v == max - 1)
		printf("Stiva plina!");
	s[++v] = n;
}
void print()
{
	int i;
	printf("Stiva initiala: ");
	for (i = 0; i < v; i++)
		printf("%d ", s[i]);
	printf("\n");
}
void Push(int n)
{
	if (vf == max - 1)
		printf("Stiva plina!");
	st[++vf] = n;
}
int Pop()
{
	if (vf == -1)
		return -1;
	else
		return st[vf--];
}
void Print()
{
	int i;
	printf("Stiva1: ");
	for (i = 0; i < vf; i++)
		printf("%d ", st[i]);
	printf("\n");
}
void Push_(int n)
{
	if (vf2 == max - 1)
		printf("Stiva plina!");
	st2[++vf2] = n;
}
void Print_()
{
	int i;
	printf("Stiva2: ");
	for (i = 0; i < vf2; i++)
		printf("%d ", st2[i]);
	printf("\n");
}
int Prim(int n)
{
	int i;
	if (n < 2)
		return 0;
	for (i = 2; i < n / 2; i++)
		if (n%i == 0)
			return 0;
	return 1;
}
int Binar(int n)
{ 
	int b = 2, x = 0, p = 1;
	while (n != 0)
	{
		x = x + p * (n%b);
		p = p * 10;
		n = n / b;
	}
	return x;
}
int main()
{
	int i, n;
        printf("n=");
	scanf("%d", &n);
	for (i = 0; i <= n; i++)
	{
		push(i);
		Push(i); //Print();
		//printf("\n");
		if (Prim(i) == 1)
		{
			Pop();
			Push_(Binar(i));
		}
	}
		print();
		Print();
		Print_();
	system("pause");
	return 0;
}

