#include<stdio.h>
#include<ctype.h>
#include <stdlib.h>

int elevadores[5][2];
int nivelOrigen;
int nivelDestino=0;
int numeroNiveles;
int totalPersonas;
float pesoPersona;
float capacidadElevador;
int contPersonas;
float consumo;	
char finPrograma='S';
int idElevador;
int j=0;
void v_llegada();
void tablero();
void v_consumo();
void v_destino();
void v_capacidad();
void v_personas();
void v_espere();

int main() {

while (toupper(finPrograma) == 'S')
{
 	
 	system("cls");
 	
	printf("Programa de control de elevadores\n");
	
	printf("Digite el n%cmero del elevador [1-5]: ",163);

	scanf("%i", &idElevador);
	j=1;
	if (j=1) {
		printf("El elevador %i fue desactivado\n",idElevador);
	}
		
	else{
	

	printf("Dame el nivel donde se tomar%c el elevador\n",160);
	
	scanf("%i",&nivelOrigen);
	
	v_espere();
	
	nivelDestino == 0;
	capacidadElevador == 0;
	
	v_personas();
		
				elevadores[idElevador][j];
	}
	

printf("¿Quiere cargar el programa otra vez? [S/N]: ");

fflush(stdin);

scanf("%c", &finPrograma);

}

return 0;

}


//división del programa :)


void v_llegada(){
if (nivelDestino<nivelOrigen) {
			for (nivelDestino+1; nivelDestino <= nivelOrigen; nivelDestino = nivelDestino+1) {
			printf("El elevador esta en el piso %i.\n",nivelDestino);
			}
		}
		
		else{
			
			for (nivelDestino-1; nivelDestino >= nivelOrigen; nivelDestino = nivelDestino-1){
				printf("El elevador esta en el piso %i.\n",nivelDestino);	
			}
		
		}
}



void tablero(){
	do {
			
			      printf("Panel de control\n");
			
			      printf("Piso 0\n");
			
			      printf("Piso 1\n");
			
			      printf("Piso 2\n");
			
			      printf("Piso 3\n");
			
			      printf("Piso 4\n");
			
			      printf("Piso 5\n");
			      
			      printf("6 Bot%cn de emergencia\n",162);
			
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
			                  
			            case 5: printf("Bot%cn Piso 5 presionado\n",162);
			
			                  break;
			                  
			            case 6: printf("Bot%cn de emergencia presionado\n",162);
			
			                  break;
			
			            default: printf("No se presion%c un bot%cn v%clido.\nVuelva a intentarlo.\n",162,162,160);
			
			                  break;
			
			      }
		
			} while (nivelDestino < 0 || nivelDestino > 6);
}



void v_consumo(){
	if (elevadores[idElevador-1][j] != nivelOrigen) {
				
					consumo = numeroNiveles * 7.5; 
				
				}
				
				else {
				
					consumo = 0;
				
				}
}



void v_destino(){
	if (nivelDestino <= 5){
			
	
				printf("El elevador se movio del nivel %i al nivel %i \n",nivelOrigen,nivelDestino);
				
				//numeroNiveles = nivelDestino-nivelOrigen;
				elevadores[idElevador-1][j] = nivelDestino;
				
				printf("N%cmero de niveles: %i\n",163,numeroNiveles);
				
				//if (nivelDestino>nivelOrigen) {
				v_consumo();
				
				printf("Consumo de: %f kW\n",consumo);
				
				if (consumo>15) {
				
					printf("Consumo de energ%ca mayor de 15 kW\n",161);
				
				}
			}
			
			else {
					printf("El elevador %i fue desactivado\n",idElevador);
					idElevador=j-5;
				}
}

void v_capacidad(){
	printf ("Capacidad del elevador: %f\n",capacidadElevador);
		
		if (capacidadElevador>300) {
			
			printf("Se ha excedido la capacidad máxima del elevador");
			
		}
		
		else {
			
			tablero();
			
			v_destino();
			
			}
}



void v_personas(){
	printf("Dame n%cmero total de personas que abordar%cn el elevador:\n",163,160);
	
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
		
		v_capacidad();
	
		}
}



void v_espere(){
	if (nivelDestino!= 0) {
		
		printf("El elevador esta en el piso: %i. Espere su llegada.\n",nivelDestino);
		
		v_llegada();
		
		printf("Abriendo puertas.\n");
		
	}
}
