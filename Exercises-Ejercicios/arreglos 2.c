#include <stdio.h>
#include <stdlib.h>

char semaforo[3];

int main()
{

	for (int i = 0; i <= 4; i++)
	{

		scanf("%c", &semaforo[i]);
	}

	printf("\n");

	for (int i = 0; i <= 4; i++)
	{

		printf("%c", semaforo[i]);
	}

	return 0;
}
