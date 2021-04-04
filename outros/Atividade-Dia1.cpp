#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
	float saldo,ValorTotal=0;

	printf("Digite o Saldo:");
	scanf("%f",& saldo);
	ValorTotal=saldo+(saldo*5/100);
	printf("O saldo mais o rendimento em 5%c %c:%f",045,130,ValorTotal);
	return 0;


}
