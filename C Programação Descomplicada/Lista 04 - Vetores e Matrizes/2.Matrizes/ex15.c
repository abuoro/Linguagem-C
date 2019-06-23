/* 
Angelo Buoro
//INCOMPLETA

Exercicio 15: Leia uma matriz 5 x 10 que se refere respostas de 10 questoes de m ˜ ultipla escolha, referentes a 5 alunos. Leia tambem um vetor de 10 posic¸ ´ oes contendo o gabarito de respostas que podem ser a, b, c ou d. Seu programa devera comparar as respostas de cada candidato com o gabarito e emitir um vetor denominado resultado, contendo a pontuaçao correspondente a cada aluno.



Data: 23/06/2019
 
 */
#include <stdio.h>
#include <stdlib.h>

const linhas = 5;
const colunas = 10;
int matriz[][];
int i,j;


int main (){
	
//Popular matriz
	for(i=0;i<linhas;i++) {
		for(j=0;j<colunas;j++){
		printf("Digite o numero da posicao [%d][%d] da matriz: \n",i+1,j+1);
		scanf("%d",&matriz[i][j]);
		}
	}
//Resto do Código

} 