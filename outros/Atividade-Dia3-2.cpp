#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char nome[20];
	
	printf("Digite o nome, ele so pode ter 20 caracteres:");
	gets(nome);
	if(	strlen(nome)<=20){
		printf("Nome cadastrado");
	}
	else{
		printf("Nao pode ser cadastrado");
	}
	return 0;
}
