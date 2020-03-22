//Sa se realizeze un program care realizeaza suma a doua numerelor intr-o metoda separate de metoda main, iar aceea metoda returneaza un pointer.
#include <stdio.h>
#include <stdlib.h>
int suma(int a, int b)
{
	int *s;
	s = (int*)malloc(sizeof(int));
	*s = a + b;
	return *s;
}
int main()
{
	int a, b;
	printf("a=");
	scanf("%d", &a);
	printf("b=");
	scanf("%d", &b);
	printf("Suma=%d", suma(a, b));
	system("pause");
	return 0;
}