//Argueta Avila Laila Akari 319128411
//FACTORIAL RECURSIVO
#include <stdio.h>

int calculafactorial(int numero) {
    if (numero <= 1){
        return 1;
    }
    else{
		return numero * calculafactorial(numero - 1); 
	}   
}
int main() {
    int numero;
    int factorial;
    printf("Ingrese un numero: ");
    scanf("%d",&numero);
    factorial=calculafactorial(numero);
    printf("El factorial de %d es %d", numero, factorial);
    return 0;
}

