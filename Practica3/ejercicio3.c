#include <wiringPi.h>

int main(){
	int pines[4] = { , , , };
	int i = 0;

	//Configuramos los numeros de los pines de la raspeberry Pi
	wiringPiSetupGpio(void);
	
	//Configuramos los pines como salida
	for(i=0; i<4; i++){
		pinMode( , OUTPUT);
	}	
	pinMode( , OUTPUT);
	pinMode( , INPUT);

	//Escribimos un 1 en la columna del teclado matricial que contiene el 1
	digitalWrite( , HIGH);

	//Bucle que realiza la funcion
	while(1){
		for(i=0; i<4; i++){
			if(digitalRead( )){
				digitalWrite(pines + i, HIGH);
				delay(100);
				digitalWrite(pines + i, LOW);
			}
		}
		for(i=2; i>=0; i--){
			if(digitalRead( )){
				digitalWrite(pines + i, HIGH);
				delay(100);
				digitalWrite(pines + i, LOW);
			}

		}
	}

