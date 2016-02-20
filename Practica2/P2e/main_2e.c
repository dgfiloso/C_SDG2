#include <stdio.h> 
#include <string.h>
#define MAX_PALABRAS 100
#define MAX_CHAR 25

int main(){
	//Variables
	
	char strg[MAX_PALABRAS][MAX_CHAR];
	char temp[MAX_CHAR];
	int i = 0;
	int j, k, l;
	int longTotal;
	int longTemp;

	//Punteros
	FILE* p_file;
	char* p_strg;
	char* p_temp;
	int* p_lngTo;
	int* p_lngTe;
	p_strg = &strg[0][0];
	p_temp = &temp[0];
	p_lngTo = &longTotal;
	p_lngTe = &longTemp;

	//Inicializamos los arrays
	for(j=0; j<MAX_PALABRAS; j++){
		for(k=0; k<MAX_CHAR; k++){
			*(p_strg+j+k) = "";
		}
	}
	for(j=0;j<MAX_CHAR; j++){
		*(p_temp+j)="";
	}

	p_file = fopen("Entrada2e.txt", "r");		//Abrimos el archivo de texto
	if(!p_file){return 1;}						//Comprobamos que se ha abierto
	
	//Realizamos un bucle que no termina hasta que se termine el fichero de texto.
	//En este bucle metemos las palabras en el array strg y calculamos el numero de
	//palabras que se han introducido
	while(1){
		if(feof(p_file)){
			break;
		}
		fscanf(p_file, "%s", p_strg + i);
		i++;
		p_lngTo++;
	}

	for(j=0; j<*p_lngTo; j++){
		printf("%s " , *(p_strg + j));
	}

	*p_lngTe = *p_lngTo;

	while(*p_lngTe > 0){
		for(k=0; k<*p_lngTe; k++){
			if(strcmp(p_strg+k,p_strg+k + 1)>0){
				*p_temp = *(p_strg+k+1);
				*(p_strg+k+1) = *(p_strg+k);
				*(p_strg+k) = *p_temp;
			}
		}
		p_lngTe -= 1;
	}

	for(l=0; l<*p_lngTo; l++){
		printf("%s " , *(p_strg + l));
	}
	
	fclose(p_file);
	return 0;

}