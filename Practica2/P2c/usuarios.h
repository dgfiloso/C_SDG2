#ifndef __USUARIOS_H__
#define __USUARIOS_H__

#define MAX_CHAR 50
#define NUM_USUARIOS 100

typedef struct usuario {
	char Nombre[MAX_CHAR];
	char Apellido[MAX_CHAR];
	int DNI;
	int nacimiento;
} Usuario;


int Busca_por_DNI(int DNI, int Num_usuarios, Usuario *repositorio);



#endif
