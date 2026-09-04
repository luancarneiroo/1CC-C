#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct {
    int rm;
    char nome[50];
    float media;
}Aluno;

void atualizarNota(Aluno* aluno, float valor){
    if(valor >= 0 && valor <= 10){
        aluno->media = valor;
    }else{
        printf("nota inexistente");
    }
}

int main(){
    Aluno aluno1 = {123, "Ana", 9.0};
    aluno1.rm = 298; // Forma indireta de acesso da variavel int rm criada

    // uso do ponteiro
    Aluno* ptr = &aluno1;
    printf("%p\n", &ptr->rm); // print do endereço de memoria
    printf("%p\n", &ptr->nome);
    printf("%p\n", &ptr->media);

    ptr->rm = 123;
    printf("%d", ptr->rm);
    printf("%p", &ptr->rm);

    printf("A nota atual: %f\n", aluno1.media);
    atualizarNota(&aluno1, 8);
    printf("A nota atualizada: %f\n", aluno1.media);

    return 0;
}