#include <stdio.h>
main() {
int y, *p, x;
y = 0; //atribuio o valor 0 para Y
p = &y;	//P vai atribuir o valor para Y
x = *p; //X vai ser igual a P
x = 4; //X recebe o valor 4
++(*p); // adiciona um(+1) para P no ponto flutuante
x--; // Diminui um(-1) para X
(*p) += x++;  //faz a soma do X e do P no ponto flutuante
printf ("y = %d\n", y); //Imprimi 4 pelo fato do P sempre poder ficar se alterando durante o script
}

