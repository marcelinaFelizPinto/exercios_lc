#include<stdio.h>
main()
{
	int a[4][5];
	int i,j;
	
	
	printf("universidade de Brasilia\n");
	printf("disciplina:113913_icc\n");
	printf("aluna(a):meu nome completo\n\n\n");
	printf("este programa solicita 4 notas de 5 alunos e depois apresenta as notas\n\n\n");
	
	for(i=0;i<5;i++){
		printf("\n");
		printf("informe as 4 notas do %d.a aluno:\n",i+1);
		for(j=0;j<4;j++){
			printf("digite %d.a nota:",j+1);
			scanf("%d",&a[i][j]);
		
			
		}
			
			}
	
	
	
	
	for(i=0;i<5;i++){
		printf("as notas do %d.a aluno sao:\n",i+1);
		for(j=0;j<4;j++){
			printf("%d.a nota:%d\n",j+1,a[i][j]);
		}
		}
	
			
}
