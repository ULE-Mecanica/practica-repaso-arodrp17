#include <stdio.h>

int division (int a, int b);
int main(){
	int a, b, divi;
	printf ("Introduce un numero a: ");
	scanf ("%d", &a);
	printf ("Introduce un numero b: ");
	scanf ("%d", &b);
divi = division(a,b);
	printf("El resultado es: %d\n", divi);
return 0;
}

int division (int a, int b){
	int cont=0;
	while (a-b>0){
		a=a-b;
		cont++;
}
return cont;
}
