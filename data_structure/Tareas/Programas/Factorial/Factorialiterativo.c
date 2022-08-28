//Argueta Avila Laila Akari 319128411
//Factorial iterativo
#include <stdio.h>

main(){
	int numero=0;
	int i,fact=1;
	printf("Ingrese un numero: ");
	scanf("%d",&numero);
	for(i= 1; i<=numero; i++){
		fact=fact*i;
	}
	printf("El factorial del numero es: %d", fact);
	return 0;
}
