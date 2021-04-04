#include <stdio.h>
#include <string.h>

void quantidade(char *texto, int contador){
	char alf[6]={'a','e','i','o','u'};
	int i, j, vogais=0;
	for(i=0;i<contador;i++){
		for(j=0;j<5;j++){
			if(texto[i] == alf[j] && j < 5){
				vogais += 1;
			}
		}
	}
	printf("\nTem %d vogais\n",vogais);
}

int main(){
	char texto[255];
	int contador;
	
	printf("Digite um nome: ");
	gets(texto); 
	strlwr(texto);
	contador = strlen(texto);
	quantidade(texto, contador);
	return 0;
}

