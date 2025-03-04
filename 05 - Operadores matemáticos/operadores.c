#include <stdio.h>


int main(){

/*
Operadores Matemáticos
Soma (+)            Subtração(-)
Multiplicação(*)    Divisão(/)
*/

int numero1, numero2;

int soma, subtracao, multiplicacao, divisao;

printf("Entre com o numero 1");
scanf("%d", &numero1);
printf("Entre com o numero 2");
scanf("%d", &numero2);

// Operação soma
soma = numero1 + numero2;

//Operação subtração
subtracao = numero1 - numero2;

// Operação multiplicação
multiplicacao = numero1 * numero2;

// Operação divisão
divisao = numero1 / numero2;

printf("A soma e: %d\n", soma);
printf("A subtraçao e: %d\n", subtracao);
printf("A multiplicaçao e: %d\n", multiplicacao);
printf("A divisao e: %d\n", divisao);

}