#include <stdio.h>


int main(){
	int  contrasena, cont=0;
	do{
	printf ("\nIntroduzca la contrasena: ");
	scanf ("%d", &contrasena);
	if(contrasena== 4567){
		printf(" Contraseña correcta\n");
	}
	if (contrasena<4567){
		printf("El mumero es menor que la contraseña\n");
		cont++;
		}
	if (contrasena>4567){
		printf("El mumero es mayor que la contraseña\n");
		cont++;
		}
		}
		
	
	while(contrasena!=4567 && cont<3);
		if (cont==3){
		printf("Numero de intentos agotados\n");
}	
return 0;
}


