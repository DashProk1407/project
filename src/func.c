#include <stdio.h>
#include <stdlib.h>

/*void input(int field[], int n)
{
	n = 16;
	int standart_field[n] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 0};
}*/

int main()
{
	int n = 16;
	int field[n];
	int i, k;

	for (i = 0; i < 16; i++)
	{
	tochka: field[i] = rand()% 16;
		for (k = 0; k <= i - 1; k++)
			if (field[k] == field[i])
				goto tochka;
	}

	for (i = 0; i < 16; i++)
	{
		printf("%d\n", field[i]);
	}
	return 0;
}