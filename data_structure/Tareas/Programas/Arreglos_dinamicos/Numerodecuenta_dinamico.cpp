#include<stdlib.h>
#include<stdio.h>
#include<string.h>

main(){
	int num[9]={0};
	int **ptr;
	char numc[9];
	printf("\nIngresa tu numero de cuenta:  ");
	fflush(stdin);
	gets(numc);
	printf("\n");
	for(int i=0;i<strlen(numc);i++){
		num[i]=numc[i]-'0';
		}
	ptr =(int**)malloc(9*sizeof(int*));
	if(ptr==NULL){
		return -1;
	}
	for(int i=0;i<9;i++){
		ptr[i]=(int*)malloc(num[i]*sizeof(int));
		if(ptr[i]==NULL){
			return -1;
		}
		for(int j=0; j<num[i];j++){
			ptr[i][j]=num[i];
			printf("| %d ",ptr[i][j]);
		}
		printf("\n ");
		free(ptr[i]);
	}
	free(ptr);
	return 0;
}
