/*
Escreva um programa que leia dois inteiros e então determine se o maior é múltiplo do
menor.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;

    printf("Digite dois numeros: ");
    scanf("%d %d", &num1, &num2);

    if((num1 % num2) == 0) printf("%d Eh multiplo de %d\n", num1, num2);
    else printf("%d nao eh multiplo de %d\n", num1, num2);

    return 0;
}
