#include<stdio.h>


int main() {
	
int nivelOrigen;
int nivelDestino;
int numeroNiveles;
float consumo;


printf("Programa de control de elevadores\n");

printf("Dame el nivel donde se encuentra el elevador\n");

scanf("%i",&nivelOrigen);

printf("Dame el nivel donde se dirige el elevador\n");

scanf("%i",&nivelDestino);

printf("El elevador se movio del nivel %i al nivel %i \n",nivelOrigen,nivelDestino);

numeroNiveles = nivelDestino-nivelOrigen;

printf("N%cmero de niveles: %i\n",163,numeroNiveles);

consumo = numeroNiveles * 7.5;

printf("Consumo de: %f kW\n",consumo);

if (consumo>15) {

printf("Consumo de energ%ca mayor de 15 kW\n",161);

}


return 0;


}
