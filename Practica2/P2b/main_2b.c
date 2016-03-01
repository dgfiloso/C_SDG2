#include <stdio.h>

int main(){
	FILE* ptr_file;
	int i;
	int num;
	char carac;
	//

	char* ptr_ch;
	int* ptr_num;
	ptr_ch = &carac;
	ptr_num = &num;

	ptr_file = fopen("/root/practica2/Entrada2b.txt","r");
	if(!ptr_file){return 1;}
	while(1){
		if(feof(ptr_file)){
			break;
		}
		fscanf(ptr_file, "%s %d \n", ptr_ch, ptr_num);
			for(i=0; i<*ptr_num; i++){
				printf("%s", ptr_ch);
			}
			printf("\n");
	}




	fclose(ptr_file);
	return 0;
}
