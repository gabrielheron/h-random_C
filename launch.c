#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int a;
    int b = rand();
    srand(time(NULL));

    printf("Esse codigo ira mostrar se certo numero e igual a outro aleatorio \n");
    printf("Insira um numero inteiro: ");
    scanf("%d", &a);

    if (a==b) {
        printf("Os numeros sao iguais!/\n");
        printf("Sendo eles %d e %d!", a, b);
    } else {
        printf("Os numeros nao sao iguais!\n");
        printf("Sendo eles %d e %d!", a, b);
    }   

    printf("Pressione ENTER para sair!");
    getchar();
    return 0;
}