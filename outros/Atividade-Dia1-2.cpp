#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){

	float C,R=0;
	float PI=3.14;
	
	printf("Qual tamanho do raio:");
	scanf("%f",& R);
	C = 2*PI*R;
	printf("O Resultado %f", C);
	return 0;

}
