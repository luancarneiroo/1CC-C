#include<stdio.h>
#include<string.h>

int main(){
    char inicial_variavel = 'g';
    char palavra_variavel[20] = {'c','u','s',};
    char frase_variavel[50] = "bem-vindos";

    printf("%c", inicial_variavel);
    printf("%s", palavra_variavel);
    printf("%s", frase_variavel);

    char nome[50];
    printf("Digite seu nome:");
    // scanf("%s", &nome);
    fgets(nome, 50, stdin); // por ser uma função ele ditas as informações direto e pula linha tbm

    char nome_ref[50] = "erick yamamoto";
    int tamanho_nome_ref = strlen(nome);
    printf("");


    printf("Entrou como sono %s", nome);



    return 0;
}