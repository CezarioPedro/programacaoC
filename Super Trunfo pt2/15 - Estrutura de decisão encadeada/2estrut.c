#include <stdio.h>

int main(){
    int numero;

    printf("Digite um número:");
    scanf("%d", &numero);

    if (numero > 0){
        if (numero % 2 == 0 )
        {
            printf("Par!");
        } else{
            printf("Impar!");
        }  
    } else if{numero == 0
        printf("Zero!");
    } else{
        printf("Negativo!")
    }
    
    
}