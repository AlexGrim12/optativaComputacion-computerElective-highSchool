#include<stdio.h>


int main() {
	
int nivelOrigen;
int nivelDestino;
int numeroNiveles;
int totalPersonas;
float pesoPersona;
float capacidadElevador;
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
	
	printf ("Capacidad del elevador: %f\n",capacidadElevador);
	
	if (capacidadElevador>300) {
		
		printf("Se ha excedido la capacidad máxima del elevador");
		
	}
	
	else {
		
		printf("Panel de control\n");
		
		printf("Piso 0\n");
		
		printf("Piso 1\n");
		
		printf("Piso 2\n");
		
		printf("Piso 3\n");
		
		printf("Piso 4\n");
		
		printf("Piso 5\n");
		
		printf("Seleccione el piso: ");
		
		scanf("%i",&nivelDestino);
		
		switch (nivelDestino) {
		
		      case 0 : printf("Bot%cn Piso 0 presionado\n",162);
		
		            break;
		
		      case 1 : printf("Bot%cn Piso 1 presionado\n",162);
		
		            break;
		
		      case 2 : printf("Bot%cn Piso 2 presionado\n",162);
		
		            break;
		
		      case 3 : printf("Bot%cn Piso 3 presionado\n",162);
		
		            break;
		
		      case 4 : printf("Bot%cn Piso 4 presionado\n",162);
		
		            break;
		
		}
		

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

}

return 0;

}
