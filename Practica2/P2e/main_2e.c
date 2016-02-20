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
	int* p_lngTo;
	int* p_lngTe;
	p_lngTo = &longTotal;
	p_lngTe = &longTemp;

	p_file = fopen("Entrada2e.txt", "r");		//Abrimos el archivo de texto
	if(!p_file){return 1;}						//Comprobamos que se ha abierto
	
	//Realizamos un bucle que no termina hasta que se termine el fichero de texto.
	//En este bucle metemos las palabras en el array strg y calculamos el numero de
	//palabras que se han introducido
	while(1){
		if(feof(p_file)){
			break;
		}
		fscanf(p_file, "%s", strg[i]);
		i++;
		longTotal++;
	}

	//Imprimir por pantalla el array sin ordenar
	for(j=0; j<longTotal; j++){
		printf("%s " , strg[j]);
	}
	printf("\n");

	*p_lngTe = *p_lngTo;
	
	//Ordenamos el array de menor a mayor
	while(longTemp > 0){
		for(k=0; k<(longTemp-1); k++){
			if(strcmp(strg[k+1],strg[k])>0){
				strcpy(temp,strg[k+1]);
				strcpy(strg[k+1] , strg[k]);
				strcpy(strg[k] , temp);
			}
		}
		longTemp--;
	}

	//Imprimir por pantalla el array ordenado
	for(l=0; l<*p_lngTo; l++){
		printf("%s " , strg[l] );
	}
	
	fclose(p_file);
	return 0;

}