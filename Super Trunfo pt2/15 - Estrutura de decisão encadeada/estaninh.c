#include <stdio.h>

int main(){
    int idade;
    float renda;


    printf("Digite a sua idade:\n");
    scanf("%d", &idade);
    printf("Digite a sua renda mensal:\n");
    scanf("%f", &renda);

    if (idade <= 18 || idade >= 60){
        if (renda > 2000)
        {
            printf("Parabéns, você ganhou o desconto!");

        } else{
            printf("Você não tem direito ao desconto!");   
        }
    } else{
        printf("A sua idade não atende aos critérios do desconto!");
    }

}