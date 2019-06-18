/* 
autor: abuoro

Exercicio 14:  A nota final de um estudante e calculada a partir de tres notas atribuidas entre o intervalo
de 0 ate 10, respectivamente, a um trabalho de laboratorio, a uma avaliacao semestral 
e a um exame final. A media das tres notas mencionadas anteriormente obedece aos 
pesos: Trabalho de Laboratorio: 2; Avaliacao Semestral: 3; Exame Final: 5. De acordo 
com o resultado, mostre na tela se o aluno esta reprovado (media entre 0 e 2,9), de 
recuperacao (entre 3 e 4,9) ou se foi aprovado. Faca todas as verificacoes necessarias.

Data: 13/05/2019
 
*/


#include <stdio.h>

//Definição das constante
const peso_lab = 2;
const peso_sem = 3;
const peso_fin = 5;
const nota_max = 10.0;
const nota_min = 0;
const nota_repr = 2.9;
const nota_recu = 4.9;
const peso = 8.0;

//Definição das variáveis
float n1,n2,n3,media;

int main()


{
printf("Digite a PRIMEIRA nota do aluno (Trabalho de Laboratorio): "); 				//Verificar se a nota 1 inserida é valida, i.e. , maior que 0 e menor que 10
scanf("%f", &n1);
	if  ((n1 >= nota_min) && (n1 <= nota_max)) 	{
		printf("Digite a SEGUNDA nota do aluno(Nota semestral): ");
		scanf("%f",&n2);
			if  ((n2 >= nota_min) && (n2 <= nota_max)) { 							//Verificar se a nota 2 inserida é valida, i.e. , maior que 0 e menor que 10
				printf("Digite a TERCEIRA nota do aluno(Exame final): ");    		//Verificar se a nota 3 inserida é valida, i.e. , maior que 0 e menor que 10
				scanf("%f",&n3);
					if ((n3 >= nota_min) && (n3 <= nota_max)) {
					media = ((peso_lab*n1)+(peso_sem*n2)+(peso_fin*n3))/peso;
						if (media <= nota_repr) {
							printf("\nAluno reprovado com media %.2f de 10\n", media);
							}
						else
							if (media < nota_recu) {
								printf("\nAluno em recuperacao com media %.2f de 10\n", media);
							}
							else
								printf("\nAluno aprovado com media %.2f de 10\n", media);				
					} 
					else
					printf("\nNota 3 invalida\n");
				} 
			else
				printf("\nNota 2 invalida\n");	
		}
	else
		printf("\nNota 1 invalida\n");
}
