/* 
autor: abuoro


Exercicio 20: Ler uma sequencia de numeros inteiros e determinar se eles sao pares ou nao. Dever
ser informado o numero de dados lidos e numero de valores pares. O processo termina 
quando for digitado o numero 1000.

Data: 08/06/2019
 
 */
#include <stdio.h>
#include <stdlib.h>

int x,qtd_lida,qtd_pares=0;

int main (){
	
    while(x != 1000) {
    printf("Digite um numero. Para encerrar digita 1000 \n");
    scanf("%d",&x);
    qtd_lida++;	
        if(x % 2 == 0)
         qtd_pares++;
	 
	}
    printf("Foram digitados %d numeros e %d deles eram pares\n",qtd_lida,qtd_pares);
} 