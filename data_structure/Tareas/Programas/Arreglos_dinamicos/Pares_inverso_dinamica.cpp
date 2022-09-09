#include<stdlib.h>
#include<stdio.h>

main(){
	
	int *a;
	a=(int*)malloc(10*sizeof(int));
	int i;
	printf("\n\tNumero de cuenta: 319128411\n\n");
	printf("\nLos primeros 10 numeros pares son: \n\n");
	
	for(i=1; i<11; i++){
		a[i]=i*2;
			printf("  %d  |", a[i]);
	}
	printf("\n\nInverso: \n\n");
	for(i=10; i>=1; i--){
		a[i]=i*2;
			printf("  %d  |", a[i]);
	}
	printf("\n\nModificando la poscicion 1 por '-1': \n\n ");
		
		a[1]=-1;
		for(i=1; i<11; i++){
			printf("  %d  |", a[i]);
		}
		for(i=2; i<11; i++){
		a[i]=i*2;
		}
		
	free(a);
	
	return 0;
}
