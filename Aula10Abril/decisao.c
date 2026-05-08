#include<stdio.h>
 
int main(){
    /* AULA DIA 10/04: Tomada de Decisão
    int idade = 18;
    if (idade >= 18) {
    printf("Maior de idade\n"); 
     

    CONDIÇÃO DE PRESENÇA
    APROVADO --> MAIOR ; IGUAL 75%
    REPROVADO -> MENOR QUE 75
    
    MÉDIA + PRESENÇA
    APROVADO -> MEDIA MAIOR OU IGUAL A 6 PRESENCA MAIOR IGUAL 75
    REPOVADO POR FALTA -----> PRESENÇA INSUFICIENTE
    REPROVADO POR NOTA -----> MÉDIA INSUFICIENTE
    REPROVADO TOTAL --------> PRESENÇA E NOTA INSUFICIENTE
    */


   float nota_1;
   float nota_2;
   float presenca;

   printf("CALCULADORA DE MEDIA\n");
   printf("Digite a primeira nota do aluno:\n");
   scanf("%f",&nota_1);
   printf("Digite a segunda nota do aluno:\n");
   scanf("%f",&nota_2);
   printf("Digite a presença do aluno:\n");
   scanf("%f",&presenca);


   float media = (nota_1 + nota_2)/2;

      if (media >= 6 && presenca >= 75){
        printf("APROVADO");
    } else if (media >= 4 && media > 6) {
        printf("RECUPERAÇÃO");
    } else if(presenca <= 75 && media <= 4) {
        printf("REPROVADO TOTAL");
    } else if(presenca <= 75) {
        printf("REPROVADO POR FALTA");
    } else if(media <= 4){
        printf("REPROVADO POR NOTA");
    } 
    



    return 0;
}