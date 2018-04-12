//Forma narrada:
//declarar las variables de tipo entero.
//pedir por pantalla el valor del traje.
//recibir y guardar el valor en la variable traje.
//si el valor del traje es mayor a 2500 se realizara un descuento del 15%.
//si el valor del traje es menor a2500 se realizara un descuento del 8%.
//si se ingresa un valor errorneo se imprimira por pantalla valor erroneo.
//terminar con return 0.

#include <stdio.h>

int main()
{
	int traje,valortraje;
	
	printf("Ingrese valor del traje: ");
	scanf("%d",&traje);
	
	if(traje>2500){
		valortraje=traje - (traje*0.15);
	}
	if(traje<2500){
		valortraje=traje-(traje*0.08);
	}
	if(traje<=0){
		printf("Valor invalido");
	}
	printf("El valor del traje es:%d",valortraje);
	
	return 0;
}
		
