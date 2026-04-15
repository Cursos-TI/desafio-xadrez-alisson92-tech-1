#include <stdio.h>

    int main(){
      //Declaração das variaveis
       const char torre [] = "Torre";
       const char bispo [] = "Bispo";
       const char rainha[] = "Rainha";
       const char cavalo[] = "Cavalo";
       int t = 1, b = 1 , r = 1, c = 1;

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

       printf("\n");

       //Movimentos do cavalo
       for(c = 1; c <= 1; c++){
          for(int cc = 1; cc <= 2; cc++){
            printf("%s baixo \n", cavalo);
          }
          printf("%s esquerda \n", cavalo);
       }


       return 0;
    }