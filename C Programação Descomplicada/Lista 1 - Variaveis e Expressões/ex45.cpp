#include <stdio.h>

//45. Fac¸a um programa para converter uma 
//letra maiuscula em letra minuscula. Use a tabela 
//ASCII para resolver o problema.

//Nota do programador: Não foi implementando nenhuma salvaguarda em caso
//de digitar qualquer outro falar não esperado.



int main ()


{
	char c;
	printf("Digite a letra minuscula a ser convertida para maiuscula\n");
	scanf("%c",&c);
	printf("A letra em maisculo e %c\n",c=(c-32));
		
	
}
