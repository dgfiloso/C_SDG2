#include <stdio.h> 
#include <string.h>
#define MAX_PALABRAS 100
#define MAX_CHAR 25

int main(){
	FILE* p_file;
	char strg[MAX_PALABRAS][MAX_CHAR];
	char temp[MAX_CHAR];
	int i = 0;
	int j, k, l;
	int longTotal;
	int longTemp;

	char* p_strg;
	char* p_temp;
	int* p_lngTo;
	int* p_lngTe;
	p_strg = &strg[0][0];
	p_temp = &temp[0];
	p_lngTo = &longTotal;
	p_lngTe = &longTemp;

	p_file = fopen("Entrada2e.txt", "r");
	if(!p_file){return 1;}
	while(1){
		if(feof(p_file)){
			break;
		}
		fscanf(p_file, "%s", strg[i]);
		i++;
		p_lngTo++;
	}

	for(j=0; j<*p_lngTo; j++){
		printf("%s " , strg[j]);
	}

	*p_lngTe = *p_lngTo;

	while(*p_lngTe > 0){
		for(k=0; k<*p_lngTe; k++){
			if(strcmp(strg[k],strg[k + 1])>0){
				*p_temp = strg[k+1];
				strg[k+1] = strg[k];
				strg[k] = *p_temp;
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