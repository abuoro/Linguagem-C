/* 
autor: abuoro

Exercicio 01: Faça um programa que determine e mostre os cincos primeiros multiplos de 3, considerando numeros maiores que 0

Data: 03/06/2019
 
 
NOTA:  Realizado com WHILE. Tentar refazer com IF.
*/

#include <stdio.h>
#include <stdlib.h>

const mult=3; //Define os multiplos de qual número que se deseja
const max=5; //Quantos multiplos do numero em questão se deseja

int limite=1; //Variavel de controle do laço. Precisa ser iniciada em 1 para o começo da contagem
int i=1;	//Inicializando para 1 pois o problema pede para considerar numeros > 0

//
int main (){

while(limite<=max)
	{ 
		if (i%mult==0){  
			printf("%d ",i);
			limite++;
			} 
	i++;
	}
	printf("\n");
}





