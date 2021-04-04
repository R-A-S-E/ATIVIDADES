#include <string.h>
#include <stdlib.h>
#include <stdio.h>

main()
{

  int cont=1, tam, i;
  char nome[50];
  
  printf("Digite um nome: ");
  gets(nome);
  tam = strlen(nome);

  printf("\nLetras com suas posicoes:\n");
  for(i=0; i<tam; i++)
  {
    printf("[%d] = %c\n", i, nome[i]);         
  }
  
  printf("\nAs letras nas posicoes impares sao: \n");  
  while(cont<=tam-1)
  {
    printf("[%d] = %c\n", cont, nome[cont]);
    cont=cont+2;
  }
  
  system("pause");
}

