#include<stdio.h>
#include<stdlib.h>

	struct alunos{
		
	char nome[200];
	char curso[200];
	int idade;
	};
	
	int main(){
		
		struct alunos alunos[2];
		int i;
		
		
		for(i = 0; i < 2; i + 1){
		
		
		printf("Digite o nome do aluno:	");
		scanf("%s",alunos[i].nome);
		
		printf("digite qual curso que o aluno faz: ");
		scanf("%s", alunos[i].curso);
		
		printf("digite a idade do aluno: ");
		scanf("%d", alunos[i].idade);
		
	}
	
		printf("/nExibindo dados dos alunos na tela/n");
		
			for(i = 0; i < 2; i + 1){
		
		printf("Alunos:	%d/n", i + 1);
		printf("Nome:	%s/n", alunos[i].nome);
		printf("Curso:	%s/n", alunos[i].curso); 
		printf("Idade:	%d/n/n", alunos[i].idade);

}
	
	return 0;	
}
