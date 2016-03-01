#include <wiringPi.h>
#include <stdio.h>
#include <string.h>

int main(){
	static char teclas[4][4] = {{"123C"},{"456D"},{"789E"},{"A0BF"}};
	int i = 0;
	int j = 0;
	int pinesOut[4] = {,,,};
	int pinesIn[4] = {,,,};
	char fila[4]={"","","",""};

	//Configuramos los numeros de los pines de la raspeberry Pi
	wiringPiSetupGpio(void);
	
	//Configuramos los pines como salida o entrada
	for(i=0;i<4;i++){
		pinMode(pinesOut + i, OUTPUT);
		pinMode(pinesIn + i, INPUT);
	}

	//Bucle que realiza la funcion
	while(1){
		for(i=0;i<4;i++){
			digitalWrite(pinesIn + i, HIGH);
			delay(100);
			for(j=0;j<4;j++){
				if(digitalRead(pinesOut + j)){
					while(digitalRead(pinesOut + j)){
						delay(10);
					}
					strcpy(fila,teclas[i]);
					printf(fila[j]);
				}
			}
			digitalWrite(pinesIn + i, LOW);
		}
	}