#include<stdio.h>
#include<ctype.h>
#include <stdlib.h>

int main() {

int nivelOrigen;
int nivelDestino;
int numeroNiveles;
int totalPersonas;
float pesoPersona;
float capacidadElevador;
int contPersonas;
float consumo;	
char finPrograma='S';


while (toupper(finPrograma) == 'S')
{
 	
 	system("cls");
 	
	printf("Programa de control de elevadores\n");
	
	printf("Dame el nivel donde se encuentra el elevador\n");
	
	scanf("%i",&nivelOrigen);
	
	printf("Dame n%cmero total de personas que abordar%cn el elevador\n",163,160);
	
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
			
			do {
			
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
			
			            case 0: printf("Bot%cn Piso 0 presionado\n",162);
			
			                  break;
			
			            case 1: printf("Bot%cn Piso 1 presionado\n",162);
			
			                  break;
			
			            case 2: printf("Bot%cn Piso 2 presionado\n",162);
			
			                  break;
			
			            case 3: printf("Bot%cn Piso 3 presionado\n",162);
			
			                  break;
			
			            case 4: printf("Bot%cn Piso 4 presionado\n",162);
			
			                  break;
			
			            default: printf("No se presion%c un bot%cn v%clido.\nVuelva a intentarlo.\n",162,162,160);
			
			                  break;
			
			      }
			
			} while (nivelDestino < 0 || nivelDestino > 5);
			
	
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
printf("¿Quiere cargar el programa otra vez? [S/N]: ");
fflush(stdin);
scanf("%c", &finPrograma);

}

return 0;

}
