/* 
autor: abuoro

Exercicio 08:  Fa;ca um programa que leia 2 notas de um aluno, verifique se as notas sao validas e 
exiba na tela a media destas notas. Uma nota valida deve ser, obrigatoriamente, um valor entre 
0.0 e 10.0, onde caso a nota nao possua um valor valido, este fato deve ser 
informado ao usuario e o programa termina.

Data: 13/05/2019
 
*/

#include <stdio.h>

float x,y;

int main ()

{
printf("Digite a primeira nota do aluno\n");
scanf("%f",&x);
printf("Digite a segunda nota do aluno\n");
scanf("%f",&y);
	
		if ( (x >= 0.0 && y >= 0.0) && (x <= 10.0 && y <= 10.0)) 
			{ 
			printf("A media do aluno eh %.2f \n",((x+y)/2));
			}		 
		else
			{
			printf("Notas invalida. Fim do Programa\n");
			}
}
