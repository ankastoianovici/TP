/*Sa se scrie un program care citeste de la tastura "N"
numere naturale.Pentru fiecare numar se va determina forma
lui binara, se va calcula inversul binar, iar mai apoi se
introduce intr - o stiva forma binara inversata.
Ex:
Input: 27
	Forma binara : 0001 1011
	Forma binara stiva output : 1110 0100*/
#include<stdio.h>
#include<stdlib.h>
#define max 100
int st[max];
int vf = -1;

void Push(int val)
{
	if (vf == max - 1)
		printf("Stiva plina!");
	st[++vf] = val;
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
	printf("Stiva: ");
	for (i = 0; i < vf; i++)
		printf("%d ", st[i]);
	printf("\n");
}
int binar(int n)
{
	int k = 0, i, b[8] = { 0 };
	while (n != 0)
	{
		b[k++] = n % 2;
		n = n / 2;
	}
	for (i = 7; i >= 0; i--)
		printf("%d", b[i]);
	printf("\n");
}

int invers(int n)
{
	n = 0xff - n;
	return n;
}
int main()
{
	int n,i,x,j,b[8];
	printf("x=");
	scanf("%d", &x);
	for (i = 0; i < x; i++)
	{
		printf("n=");
		scanf("%d", &n);
		binar(n);
		printf("\n");
		Print(); Push(binar(invers(n)));
	}
	system("pause");
	return 0;
}


