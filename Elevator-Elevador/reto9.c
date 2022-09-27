#include<stdio.h>


int main() {
	
int nivelOrigen;
int nivelDestino;
int numeroNiveles;
int totalPersonas;
int pesoPersona;
int capacidadElevador;
int contPersonas;
float consumo;


printf("Programa de control de elevadores\n");

printf("Dame el nivel donde se encuentra el elevador\n");

scanf("%i",&nivelOrigen);

printf("Dame número total de personas que abordarán el elevador\n");

scanf("%i",&totalPersonas);

if (totalPersonas<1) {
	
	printf("El elevador se encuentra vacio");
}

else {

for (contPersonas=1; contPersonas<=totalPersonas; contPersonas+=1) {

printf("Dame el peso de la persona %i\n",contPersonas);

scanf("%f",&pesoPersona);

capacidadElevador = capacidadElevador+pesoPersona;

}

printf("Dame el nivel donde se dirige el elevador\n");

scanf("%i",&nivelDestino);

printf("El elevador se movio del nivel %i al nivel %i \n",nivelOrigen,nivelDestino);

numeroNiveles = nivelDestino-nivelOrigen;

printf("N%cmero de niveles: %i\n",163,numeroNiveles);

if (nivelDestino>nivelOrigen) {

consumo = numeroNiveles * 7.5; 

}

else {

consumo = 0;

}

printf("Consumo de: %f kW\n",consumo);

if (consumo>15) {

printf("Consumo de energ%ca mayor de 15 kW\n",161);

}

}

return 0;

}
