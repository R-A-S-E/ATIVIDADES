#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char nome[50];
	char nome2[50];
	
	printf("Digite o primeiro nome:");
	gets(nome);
	printf("Digite o segundo nome:");
	gets(nome2);
	
	if(	strlen(nome)>strlen(nome2)){
		printf("%s tem %d caracteres e eh maior",nome,strlen(nome));
	}
	else{
		printf("%s tem %d caracteres e eh maior",nome2,strlen(nome2));
	}
	return 0;
}
