#include <wiringPi.h>

int main(){
	//Configuramos los numeros de los pines de la raspeberry Pi
	wiringPiSetupGpio(void);

	//Configuramos un pin como salida
	pinMode(, OUTPUT);

	//Hacemos un bucle para que un led parpadee
	while(1){
		digitalWrite(, HIGH);		//Escribimos un 1
		delay(100);					//Hacemos un retardo de 100 ms
		//delay(10000);				//Retardo de 10 s
		digitalWrite(, LOW);		//Escribimos un 0				
	}

}