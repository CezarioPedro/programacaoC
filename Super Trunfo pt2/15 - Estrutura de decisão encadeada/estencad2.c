#include <stdio.h>

int main(){
    int nota;

    printf("Digide a sua idade:\n")
    scanf("%d", &nota);


    if(nota >=90){
        printf("O seu conceito é A!");
    } else if (nota >= 80){
        printf("O seu conceito é B!");
    } else if (nota >= 70){
        printf("O seu conceito é C!");
    } else if(nota >= 60){
        printf("O seu conceito é D!")
    } else if(nota >= 50){
        printf("O seu conceito é E!")
    } else{
        printf("O seu conceito é F!")
    }
    
    return 0;
}