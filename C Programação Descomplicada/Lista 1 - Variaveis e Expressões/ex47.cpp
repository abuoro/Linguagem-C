#include <stdio.h>

//47. Leia um numero inteiro de 4 digitos (de 1000 a 9999)
// e imprima 1 digito por linha.


//Nota: Realizado da mesma forma que o exercicio anterior.
//economizar linhas com o printf escrito da forma como o programa


int main()


{
	int numero,mil,cent,dez,uni;
	printf("Digite um numero de 1000 a 9999\n");
	scanf("%d",&numero);
	mil=numero/1000;numero=numero%1000;
	cent=numero/100;numero=numero%100;
	dez=numero/10;numero=numero%10;
	uni=numero;
	printf("%d\n%d\n%d\n%d\n",mil,cent,dez,uni);

//	printf("%d\n",cent);
//	printf("%d\n",dez);
//	printf("%d\n",uni);



}
