#include <stdio.h>

    int main(){
      //Declaração das variaveis
       const char torre [] = "Torre";
       const char bispo [] = "Bispo";
       const char rainha[] = "Rainha";
       int t = 1, b = 1 ,r = 1;

       //Movimentos da Torre
       while(t <= 5){
        printf("%s direita. \n",torre);
        t++;
       }

       printf("\n");

       //Movimentos do Bispo
       do{
        printf("%s cima direita. \n", bispo);
        b++;

       }while(b <= 5);

       printf("\n");

       //Movimentos da Rainha
       for(r = 1; r <= 8; r++){
        printf("%s esquerda. \n", rainha);
       }


       return 0;
    }