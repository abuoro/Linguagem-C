/* 
autor: abuoro

Exercicio 6: Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit.
A formula de conversao e: F = C(9.0/5:0)+32.0, sendo F a temperatura em Fahrenheit
e C a temperatura em Celsius.

Data: 04/04/2019
 
*/
#include <stdio.h>

int main()


{

float temp;
printf("Digita uma temperatura em Celsius\n");
scanf("%f",&temp);

printf("A temperatura em fahrenheit = %f", temp=(temp*(9.0/5.0)+32));


}
