/* 
autor: abuoro

Exercicio 2: Escreva um programa que escreva na tela, de 1 ate 100, de 1 em 1, 3 vezes. A primeira vez deve usar a estrutura de repetição for, a segunda while, e a terceira do while.

Data: 04/06/2019
 
*/

#include <stdio.h>
#include <stdlib.h>

const max=101; //Valores máximo dos laços
const min=0;   //Valor inicial dos laços



int i;
int main (){
		printf("Escrever de 1 a 100 usando for: \n");
			system("pause");
			for(i=min;i<=max;i++){
				printf("%d\n",i);
			i++;
			}
		
		 i=min;
		printf("Escrever de 1 a 100 usando while: \n");
		system("pause");
			while (i<max){ 
				printf("%d\n",i);
				i++;
			}
		printf("Escrever de 1 a 100 usando do-while: \n");
		system("pause");
		i=min;
			do  { 
				printf("%d\n",i);
					i++;
			}	while(i<max); 
} 