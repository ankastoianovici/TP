/*Numarul 197 este considerat un numar prim circular, deoarece orice combinatie a cifrelor sale
formeaza un alt numar prim.
Exista 13 numere prime circulare sub 100: 2, 3, 5, 7, 11, 13, 17, 31, 37, 71, 73, 79, si 97

Sa se afiseze toate numerele prime circulare pana in 10.000*/
#include <stdio.h> 
#include <stdlib.h> 
#include<math.h>
int Prim(int k)
{
	for (int i = 2; i <= (k / 2); i++)
		if (k%i == 0)
			return 0;
	return 1;
}
int main()
{
	 int  i, j, w, n;
	int a = 0, b = 0;
	/*a numarul total de cifre a numarului
    b  cate numere sunt circular prime*/
	for (i = 2; i <= 10000; i++)
	{
		a = 0; b = 0;
		w = i;
		while (w!=0)
		{
			a++;
			w = w / 10;
		}
		w = i;
		if (Prim(i)==1)
		{
			for (j = 0; j < a; j++)
			{
				n = w % 10;
				w = w / 10;
				n = n * pow(10, (a - 1));
				n = n + w;
				if (Prim(n)==1)
					b++;
				w = n;
			}
			if (b == a)
			{
				printf("%d ", i);
			}
		}
	}
	printf("\n");
	system("pause");
	return 0;
}