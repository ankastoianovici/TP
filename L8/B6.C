/*Sa se implementeze BubbleSort recursiv*/
#include<stdio.h>
#include<stdlib.h>
int BubbleSort(int w[], int n) 
{
	int aux, i;
	for ( i = 0; i < n - 1; i++)
	{
		if (w[i] > w[i + 1])
		{
			aux = w[i];
			w[i] = w[i + 1];
			w[i + 1] = aux;
		}
	}
	if (n - 1 > 1)
	{
		BubbleSort(w, n - 1);
	}
}
int main()
{
	 int N,w[10],i;
	 printf("N=");
	 scanf("%d", &N);
	 for ( i = 0; i <N; i++)
	 {
		 printf("w[%d]=", i);
		 scanf("%d", &w[i]);
	 }
	 BubbleSort(w, N);
	 for ( i = 0; i < N; i++)
	 {
		 printf("%d ", w[i]);
	 }
	system("pause");
	return 0;
}