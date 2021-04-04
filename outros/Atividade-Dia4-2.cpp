#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int numero[2][2];
	int i,j,positivo=0,negativo=0;
	
	for(i=0;i<2;i++){
			for(j=0;j<2;j++){
				printf("Insira numero[%d][%d]:",i,j);
				scanf("%d",&numero[i][j]);
					if(numero[i][j] > 0){
						positivo = (positivo+numero[i][j]);
					}
					if(numero[i][j] < 0){
						negativo = (negativo+numero[i][j]);
					}
		}
	}
	printf(" \n A soma dos numeros positivos e: %d \n\n", positivo);
	printf(" \n A soma dos numeros negativos e: %d \n\n", negativo);
		
	for(i=0;i<2;i++){
			for(j=0;j<2;j++){
   				printf(" N[%d][%d]=[%d]\n ",i,j,numero[i][j]);
		}
	}
	system("pause");
	return 0;
}
