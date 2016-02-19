#include <stdio.h>

int main(){
	int class[10];
	FILE* ptr_file;
	int i = 0;
	int j;
	int sum = 0;
	int* ptr_sum;
	int* ptr_class;
	ptr_sum = &sum;
	ptr_class = &class[0];

	for(j=0; j<10; j++){
		class[j] = 0;cd
	}
	
	ptr_file = fopen("Entrada2d.txt","r");
	if(!ptr_file){return 1;}
	while(1){
		if(feof(ptr_file)){
			break;
		}
		fscanf(ptr_file, "%d", ptr_class + i);
		i++;
		if(i==10){
			break;
		}
	}
	for(j=0; j<10; j++){
		*ptr_sum += *(ptr_class + j);
	}

	fclose(ptr_file);
	printf("La suma final es: %d", *ptr_sum);
	return 0;
}
