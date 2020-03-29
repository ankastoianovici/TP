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
	int res = 0, inv = 0;
	n = 0xff - n;
	for (int x = 7; x > 0; x--)
	{
		res = res | (n & 0x01);
		n = n >> 1;
		res = res << 1;
	}
	res = res | (n & 0x01);
	return res;
}
int opus(int n)
{
	int o = 0;
	while (n != 0)
	{
		o = o * 10 + n % 10;
		n = n / 10;
	}
	printf("%d", o);
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
		// binar(invers(n));
		printf("\n");
		//Print(); 
		Print(); Push(opus(binar(invers(n))));
	}
	system("pause");
	return 0;
}


