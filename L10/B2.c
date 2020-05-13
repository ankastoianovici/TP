#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n, pr, ul, st = 0, dr, sum = 0, max_sum = -100,x;
	scanf( "%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf( "%d", &x);
		sum += x;
		dr = i;
		if (max_sum < sum) 
		{
			max_sum = sum;
			ul = dr;
			pr = st;
		}
		if (sum < 0)
		{
			sum = 0;
			st = i + 1;
		}
	}
	for (int i = pr; i <= ul; i++)//nu-i ok afisarea
		printf(" %d\n", x);
	system("pause");
	return 0;
}