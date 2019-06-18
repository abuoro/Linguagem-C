/* 
autor: abuoro

Exercicio 4: Escreva um programa que declare um inteiro, inicialize-o com 0, e incremente-o de 1000
em 1000, imprimindo seu valor na tela, ate que seu valor seja 100000 (cem mil).


Data: 04/06/2019
 
 */
#include <stdio.h>
#include <stdlib.h>

const max=100000;
const inc=1000;
int i=0;
int main (){
	
	while(i<=max){
		printf("%d\n",i);
		i=i+inc;
	} 

} 