#include <stdio.h>
#include <string.h>
#include <stdbool.h>
typedef struct
{
    int codigo;
    char nome[50];
    float valor;
} Produto;

void aplicarDesconto(Produto* p, float desc)
{
    p->preco = 
}

int main(){
    Produto prod1 = {0001, "Capacete", 50};

    aplicarDesconto(&prod1, 10.0);
return 0;
}