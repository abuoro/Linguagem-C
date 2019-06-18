/* 
autor: abuoro

Exercicio 10:  Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu
peso ideal, utilizando as seguintes formulas (onde  h corresponde a altura): `
• Homens: (72,7 * h) - 58
• Mulheres: (62,1 * h) - 44,7

Data: 13/05/2019
 
*/
#include <stdio.h>


float altura; //Atenção aos tipos de variável. Perdi muito tempo por declarar altura como INT e calculando com 		
			  //float dentro do CASE
char sexo;

int main()

{

printf("Qual o sexo, M ou F?");
scanf("%c",&sexo);
printf("Digite a altura da pessoa em m\n");
scanf("%f",&altura);

	switch(sexo) {	
		case 'M':
				printf("O peso ideal para um homem com a altura de %.2f m eh de %.2f kg \n",altura, (72.7*altura)-58.0);
		break;
		case 'm':
				printf("O peso ideal para um homem com a altura de %.2f m eh de %.2f kg \n",altura, (72.7*altura)-58.0);
		break;
		case 'F':
			printf("O peso ideal para uma mulher com a altura de %.2f m eh de %.2f kg \n",altura, (62.1*altura)-44.7);
		break;
		case  'f': 
			printf("O peso ideal para uma mulher com a altura de %.2f m eh de %.2f kg \n",altura, (62.1*altura)-44.7);
		break;
		default: 
			printf("Sexo Invalido");					
	} 
}
