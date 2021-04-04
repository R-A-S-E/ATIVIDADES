#include <stdio.h>
#include <stdlib.h>
#include <string.h>


	
int VOGAL(char M){
	if(M=='a' || M=='A' || M=='e' || M=='E'
 || M=='i' || M=='I' || M=='o' || M=='O' || M=='u' || M=='U'){
 	 return(1);
	 }

 	else{
 	 return(0);
 	}
}
 

int main(){
 
	char letra;
	
	
	printf("digite uma letra:");
	scanf("%c",& letra);
	
	
	if(VOGAL(letra)==1){
		printf("\nA letra [%c] e uma vogal", letra);
	}
	else{
		printf("\nA letra [%c] nao e uma vogal", letra);
	}
	return 0;

}



