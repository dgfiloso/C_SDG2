#include <wiringPi.h>

int main(){
	//Configuramos los numeros de los pines de la raspeberry Pi
	wiringPiSetupGpio(void);

	//Configuramos los pines como entrada o salida
	pinMode( , OUTPUT);
	pinMode( , OUTPUT);
	pinMode( , INPUT);

	//Escribimos un 1 en la columna del teclado matricial que contiene el 1
	digitalWrite( , HIGH);

	//Hacemos un bucle que lea si el boton 1 esta apretado, y en cuyo caso encienda un led
	while(1){
		if(digitalRead( )){
			digitalWrite( , HIGH);
		} else {
			digitalWrite( , LOW);
		}
	}
}