#include <stdio.h>

int main(){
    int idade = 22;
    int resultado;

    resultado = idade >= 18 ? 1 : 0 ;

    if (resultado == 1)
    {
        printf("Você é maior de idade!");
    }else{
        printf("Você é menor de idade");
    }
}