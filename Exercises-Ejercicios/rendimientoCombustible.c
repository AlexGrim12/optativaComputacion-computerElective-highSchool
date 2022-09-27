#include <stdio.h>
#define RENDIMIENTO 5.8/100
void rendim_combus();

int main() {
rendim_combus();

return 0;
}

void rendim_combus()
{
	float km_inicial;
	float km_final;
	float km_viaje;
	float l_viaje;
	printf("Programa que calcula los kilometros recorridos y litros consumidos por un auto\n");
	printf("Capture el kilometro inicial: ");
	scanf("%f", &km_inicial);
	printf("\nCapture el kilometro final: ");
	scanf("%f", &km_final);
	km_viaje = km_final - km_inicial;
	l_viaje = km_viaje * RENDIMIENTO;
	printf("\nKm recorridos: %2.2f \tlitros consumidos: %2.2f", km_viaje, l_viaje);
}
