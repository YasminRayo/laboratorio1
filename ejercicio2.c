//Forma narrada:
//declarar las variables del tipo entero.
//declarar las variables del tipo radical.
//pedir la cuenta por pantalla.
//recibir y guardarla en la variable cuenta.
//realizar la operacion para calcular el iva.
//mostrar por pantalla el resultado.
//realizar la operacion para calcular la propina.
//mostrar por pantalla el resultado.
//realizar la operacion para calcular la cuenta total.
//mostrar por pantalla el resultado.
//pedir por pantalla el numero de personas.
//realizar la operacion para calcular cuanto debe pagar cada persona.
//mostrar por pantalla cuanto debe pagar cada persona.
// terminar con return 0.
#include <stdio.h>

int main ()
{
	int num_personas,cuenta,propina,cuenta_total;
	float iva,totalporpersona;
	
	printf("La cuenta es: ");
	scanf("%d",&cuenta);
	 
	iva= (cuenta*19)/100;
	printf("\nEl iva es: %.f",iva);
	
	propina=(cuenta+iva)*10/100;
	printf("\nLa propina es: %d",propina);
	
	cuenta_total=cuenta+iva+propina;
	printf("\nLa cuenta total es:%d",cuenta_total);
	printf("\n");
	
	
	printf("\nIngrese numero de personas: ");
	scanf("%d",&num_personas);
	printf("\n");
	
	totalporpersona=cuenta_total/num_personas;
	printf("Cada persona debe pagar: %.0f",totalporpersona);
	
	
	return 0;
	
}	
