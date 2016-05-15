#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int field[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
	int last = 15;
	int i, k, temp;

	srand(time(0));
	while (last > 0)
	{
		k = rand()% 16;
		temp = field[last];
		field[last] = field[k];
		field[k] = temp;
		last--;
	}

	for (i = 0; i < (16/2); i++)
	{
		printf("%d\t", field[i]);
	}
	printf("\n");
	for (i = (16/2); i < 16; i++)
	{
		printf("%d\t", field[i]);
	}

	return 0;
}