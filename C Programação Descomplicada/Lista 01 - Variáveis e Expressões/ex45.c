/* 
autor: abuoro

Exercicio 45: Fa�a um programa para converter uma letra maiuscula em letra minuscula. Use a tabela 
ASCII para resolver o problema.

NOTA: N�o foi implementando nenhuma salvaguarda em caso
de digitar qualquer outro valor n�o esperado.

Data: 08/04/2019
 
*/
#include <stdio.h>





int main ()


{
	char c;
	printf("Digite a letra minuscula a ser convertida para maiuscula\n");
	scanf("%c",&c);
	printf("A letra em maisculo e %c\n",c=(c-32));
		
	
}
