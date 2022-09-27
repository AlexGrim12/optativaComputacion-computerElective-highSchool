#include<stdio.h>


int main() {
	
int nivelOrigen;
int nivelDestino;

printf("Programa de control de elevadores\n");

printf("Dame el nivel donde se encuentra el elevador\n");

scanf("%i",&nivelOrigen);

printf("Dame el nivel donde se dirige el elevador\n");

scanf("%i",&nivelDestino);

printf("El elevador se movio del nivel %i al nivel %i \n",nivelOrigen,nivelDestino);

return 0;


}
