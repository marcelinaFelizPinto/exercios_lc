#include<stdio.h>
main()
{
	int m[4][8];
	int n[4];
	int i,j,k,soma;
		
	printf("escreva os valores da matriz dada\n");
	
	for(i=0;i<4;i++)
		for(j=0;j<8;j++)
			scanf("%d",&m[i][j]);
		
	for(i=0;i<4;i++) {
		k=0;
		soma=0;
		
		for(j=0;j<8;j++){
		
		if(k<8)
			soma=soma+m[i][j];
			k++;
	}
	n[i]=soma;
	 
} 
	printf("mostrar a matriz\n");
	for(i=0;i<4;i++){
		printf("\n");
		for(j=0;j<8;j++)
			printf("%d",m[i][j]);
	}
	printf("\n");
	
	printf("valores d0 vetor\n");
	for(i=0;i<4;i++)
		printf("%d   ",n[i]);
	
			
}

