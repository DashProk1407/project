#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void mixing(int *field, int n)
{
	int last = 15;
	int k;

	srand(time(0));
	while (last > 0)
	{
		k = rand()% n;
		swap(&field[k], &field[last]);
		last--;
	}
}

void filling(int *field, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		field[i] = i;
	}
}

void output(int *field, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%d ", field[i]);
	}
}



int main()
{
	int n = 16;

	int standart_field[n];
	int work_field[n];

	filling(standart_field, 16);
	filling(work_field, 16);
	mixing(work_field, 16);
	output(work_field, 16);

	return 0;
}