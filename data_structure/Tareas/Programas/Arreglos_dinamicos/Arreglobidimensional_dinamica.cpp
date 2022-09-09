#include <stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct{
		char nombre[25];
		int edad;
		int calif;
	}datos;
    
int main() {
		datos *alumno;
		int n;	
		float promedioedad=0;
		float promediocalif=0;
			//leer datos
		printf("\nNumero de alumnos: ");
		scanf("%d",&n);
		alumno= (datos*)malloc(n*sizeof(datos));
		if(alumno==NULL){
			return -1;
		}
		for (int i=0;i<n;++i) {
			printf("\nIngrese el nombre del alumno: ");
			fflush(stdin);
			gets(alumno[i].nombre);
			fflush(stdin);
			printf("\nIngrese la edad: ");
			scanf("%d",&alumno[i].edad);
			printf("\nIngrese la calificacion obtenida: ");
			scanf("%d",&alumno[i].calif);
			//sacar promedios
			promedioedad+=(float)alumno[i].edad;
			promediocalif+=(float)alumno[i].calif;
		}
		promedioedad=promedioedad/n;
		promediocalif=promediocalif/n;
			//imprimir datos
		printf("\n\t\t\t\nREGISTRO:\n");
		printf("\n\tNombre:				|	Edad	|	Calificacion	|\n");
		printf("---------------------------------------------------------------------------------------\n");
		for(int i=n-1; i>=0; i--){
   		printf("\t%-25s	|	%d	|	%d		|\n",alumno[i].nombre,alumno[i].edad,alumno[i].calif);
			   }
		getch();
			//imprimir promedios orden inverso
		printf("\n\nEl promedio de edad es: %.2f",promedioedad);
		printf("\nEl promedio de calificacion es: %.2f",promediocalif);
		getch();
		free(alumno);
    return 0;
}
