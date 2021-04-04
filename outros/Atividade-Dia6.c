#include <stdio.h>
#include <stdlib.h>

int num;
int func(int a, int b){
	a = (a+b)/2;
	num -= a+1;
	return a;
}
int main(){
	int first = 0, sec = 50;
	num = 10;
	printf("\nnum antes = %d\tfirst antes = %d\tsec antes = %d", num, first, sec);
	num += func(first, sec);
	printf("\nnum depois = %d\tfirst depois = %d\tsec depois = %d", num, first, sec);
}
