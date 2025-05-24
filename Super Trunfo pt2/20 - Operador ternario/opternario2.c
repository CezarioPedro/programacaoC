#include <stdio.h>

int main(){
    int temperatura = 22;
    int resultado;

    resultado = temperatura >= 30 ? 1 : 0 ;

    if (resultado == 1)
    {
        printf("Está calor!");
    }else{
        printf("Está frio!");
    }
}