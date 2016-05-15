#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int n = 16;
	int field[n];
	int i;

	srand (time (0));
	field[1]=rand()%16;
	for(int k=1; k<16; k++)
	Nachalo: for(i=2; i<=16; i++)
	{
		field[i]=rand()%16;
		for (int a =1; a <=16; a++)
		if(field[i] == field[i-a])
	goto Nachalo;
	}

/*	srand(time(0));

	for (i = 0; i < 16; i++)
	{
		 field[i] = rand()% 16;
	}*/

	for (i = 0; i < 16; i++)
	{
		printf("%d\n", field[i]);
	}
	return 0;
}