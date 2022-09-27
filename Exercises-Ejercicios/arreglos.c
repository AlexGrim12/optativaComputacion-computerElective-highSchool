#include <stdio.h>

char semaforo[9] = {'V', 'V', 'V', 'A', 'A', 'A', 'R', 'R', 'R'};
int i;

int main()
{

	for (i = 0; i <= 8; i++)
	{

		printf("%c", semaforo[i]);
	}
	return 0;
}
