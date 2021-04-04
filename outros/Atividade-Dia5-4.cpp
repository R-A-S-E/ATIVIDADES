#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int idade;
	
	printf("digite sua idade:");
	scanf("%d",&idade);
	
	if(idade<16){
		printf("Nao-eleitor");
	}
	if(idade>=18){
		if(idade<=70){
		printf("Eleitor obrigatorio");
	}
	}
		if(idade == 16|| idade >70 || idade == 17){
		printf("Eleitor facultativo");
	}

return 0;
}
