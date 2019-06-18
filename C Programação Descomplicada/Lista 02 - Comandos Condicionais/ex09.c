/* 
autor: abuoro

Exercicio 09:  Leia o salario de um trabalhador e o valor da prestacao de um emprestimo. Se a
prestac¸ao for maior que 20% do salario imprima: Empr´estimo nao concedido, caso
contrario imprima: Emprestimo concedido.

Data: 13/05/2019
 
*/
#include <stdio.h>

float salario,parcela;


int main ()

{

printf("Digite o salario do funcionario\n");
scanf("%d",&salario);
printf("Digite o valor da parcela\n");
scanf("%d",&parcela);

		if ( parcela > (salario*0.2))
			{ 
			printf("Emprestimo NAO concedido\n");
			}
		else
			printf("Emprestimo concedido");
} 

