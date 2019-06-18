/* 
autor: abuoro

Exercicio 3: Faça um algoritmo utilizando o comando while que mostra uma contagem regressiva
na tela, iniciando em 10 e terminando em 0. Mostrar uma mensagem “FIM!” apos a contagem.

Data: 04/06/2019
 
 */
#include <stdio.h>
#include <stdlib.h>

int i=10;

int main (){
	
	while(i>=0){
		printf("%d\n",i);
		i--;
	} 
	printf("FIM!\n");
} 