#include <stdio.h>
#include <string.h>
#include "usuarios.h"

int Busca_por_DNI(int DNI, int Num_usuarios, Usuario *repositorio);

int Busca_por_DNI(int DNI, int Num_usuarios, Usuario *repositorio){
	int i;
	for(i=0; i<NUM_USUARIOS; i++){
		if(DNI == repositorio[i].DNI){
			printf("Nombre y apellido del usuario con DNI %d : %s %s \n", DNI, repositorio[i].Nombre, repositorio[i].Apellido);
			break;
		} else {
			printf("No hay ningun usuario con ese DNI");
			break;
		}
	}
	return 0;
}

int main(){
	FILE* ptr_file;
	int numBusquedaDNI;
	char nombre[MAX_CHAR];
	char apellido[MAX_CHAR];
	int numDNI;
	int fechaNac;
	int i = 0;
	Usuario baseDatos[NUM_USUARIOS];

	char* p_nombre;
	char* p_apellido;
	int *p_numDNI;
	int *p_fechaNac;
	Usuario *p_baseDatos;

	p_nombre = &nombre[0];
	p_apellido = &apellido[0];
	p_numDNI = &numDNI;
	p_fechaNac = &fechaNac;
	p_baseDatos = &baseDatos[0];

	ptr_file = fopen("Usuarios.txt","r");
	if(!ptr_file){return 1;}
	while(1){
		if(feof(ptr_file)){
			break;
		}
		fscanf(ptr_file, "%s %s %d %d \n", p_nombre, p_apellido, p_numDNI, p_fechaNac);
		strcpy(baseDatos[i].Nombre, p_nombre);
		strcpy(baseDatos[i].Apellido , p_apellido);
		baseDatos[i].DNI = *p_numDNI;
		baseDatos[i].nacimiento = *p_fechaNac;
		i++;
	}
	printf("Buscar usuario con DNI: ");
	scanf("%d", &numBusquedaDNI);
	Busca_por_DNI(numBusquedaDNI, NUM_USUARIOS, p_baseDatos);

	fclose(ptr_file);
	return 0;
}
