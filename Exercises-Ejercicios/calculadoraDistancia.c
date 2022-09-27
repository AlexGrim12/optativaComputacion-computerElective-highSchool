#include <stdio.h>

float calcula_distancia();

float calcula_distancia()
{
	float velocidad, tiempo;
	printf("Escribe la velocidad promedio:\n");
	scanf("%f",&velocidad);
	printf("Escribe el tiempo del recorrido:\n");
	scanf("%f",&tiempo);
	return velocidad*tiempo;
}
int main() {
float distancia;
	printf("El presente programa obtiene la distancia recorrida a partir de conocer la velocidad y el tiempo de recorrido\n\n");
	distancia=calcula_distancia();
	printf("La distancia recorrida es %f.\n", distancia);
return 0;
}
