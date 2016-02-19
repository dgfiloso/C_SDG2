#include <stdio.h>

int main(){
	int a[10] = {3, 5, 12, 8, 7, 22, 14, 4, 7, 11};
	int max = 0;
	int min = 0;
	int posMax;
	int posMin;
	int i;
	int j;

	int* ptr_max;
	int* ptr_min;
	int* ptr_pMax;
	int* ptr_pMin;

	ptr_max = &max;
	ptr_min = &min;
	ptr_pMax = &posMax;
	ptr_pMin = &posMin;

	*ptr_max = a[0];
	*ptr_min = a[0];
	*ptr_pMax = 0;
	*ptr_pMin = 0;
	
	for(i=0; i<10; i++){
		if(a[i] > *ptr_max){
			*ptr_max = a[i];
			*ptr_pMax = i;
		}
	}
	for(j=0; i<10; i++){
		if(a[j] < *ptr_min){
			*ptr_min = a[j];
			*ptr_pMin = j;
		}
	}
	printf("El valor maximo es %d y esta en la posicion %d del array\n", *ptr_max, *ptr_pMax );
	printf("El valor minimo es %d y esta en la posicion %d del array\n", *ptr_min, *ptr_pMin );
	return 0;
}
