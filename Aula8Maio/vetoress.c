#include<stdio.h>

int main(){
    float notas[] = {10, 2 , 8 , 5 , 4, 8};
    int tamanho = sizeof(notas)/sizeof(notas[0]); // --> float 4 bytess 
    float soma = 0;

    for(int i = 0; i < tamanho; i++){
        soma += notas[i];
    }
    /* int qtd_notas;
    printf("digite a quantidade de notas para registrar:");
    scanf("%d", &qtd_notas); 

    // float , nota1, nota2, nota3, nota4, ........
    float notas[qtd_notas];
    float soma; 
    // pode ser vazio "()" as notas são armazenadas infinitamente ou qtd. de valores "(x)" 

    
    for(int i = 0; i < qtd_notas; i++){
        printf("digite sua nota:");
        scanf("%f", &notas[i]);
        // printf("%f\n", notas[i]);
        soma = soma + notas[i];
        // printf("%d --> soma %d + nota %f", i, soma, notas);
    };
    printf("A media das notas e: %.2f\n", soma/qtd_notas);

    /* printf("\n");
    notas[0] = 10;
    notas[1] = 8;
    printf("%d e %f\n", notas[0], notas[1]);

    float media = (notas[0] + notas[1] + notas[2]);
    */

    return 0;
}