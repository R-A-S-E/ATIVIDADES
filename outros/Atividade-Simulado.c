#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char nome[20];
    char sobrenome[20];
    
    
    printf("Digite seu nome: ");
    gets(nome);
    
    system("cls");
    
    printf("Digite seu sobrenome: ");
    gets(sobrenome);
    

    strcat(nome, " ");
    strcat(nome, sobrenome);
    
    printf("Seu nome completo eh : %s\n\n",nome);
    
    system("pause");
}
