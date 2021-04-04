#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char Estado[30];
	printf("Digite um Estado:");
	gets(Estado);
	if(strcmp(strupr(Estado),"PERNAMBUCO")==0){
		printf("Sigla:PE");
	}	
	if(strcmp(strupr(Estado),"RIO GRANDE DO NORTE")==0){
		printf("Sigla:RN");
	}	
	return 0;
}
