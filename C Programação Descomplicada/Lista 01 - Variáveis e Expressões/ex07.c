/* 
autor: abuoro

Exercicio 7: Leia uma temperatura em graus Fahrenheit e apresente-a convertida em graus Celsius.
A formula de convers ao  e: C = 5.0*(F − 32.0)=9.0, sendo C a temperatura em Celsius
e F a temperatura em Fahrenheit

Data: 08/04/2019
 
*/
#include <stdio.h>


int main()

{

float temp;
printf("Digite a temperatura em fahrenheit ");
scanf("%f",&temp);
printf("A temperatura em Celsius = %f\n", temp=5.0*((temp-32.0)/9.0));

}
