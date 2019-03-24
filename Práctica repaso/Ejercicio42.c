#include <stdio.h>

int funcion (int n);
int main(){
int n, factorial;
printf("introduce un numero: ");
	scanf("%i", &n);
factorial=funcion(n);
	printf ("El resultado es: %d\n", factorial);

return 0;
}

int funcion (int n){
int i, fact;
fact=1;
i=1;
for(i=1; i<=n; i++){
		fact*=i;

	}

return fact;
}
