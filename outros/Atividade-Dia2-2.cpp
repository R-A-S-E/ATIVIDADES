#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int inteiro = 0;
	
	printf("Digite um numero:");
	scanf("%d",& inteiro);
	if((inteiro)%3==0 ){
		if((inteiro)%5==0){
				printf("E divisiveu");
		}
		else{
				printf("Nao eh");
		}
	}
	else{
		printf("Nao eh");
	}
	return 0;

}
