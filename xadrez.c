#include <stdio.h>

    void ftorre(int ft){
        if(ft > 0){
            printf("Torre direita \n");
            ftorre(ft - 1);
        }
    }

   void fbispo(int fb){
    if(fb > 0){

        for(int vertical = 0; vertical < 1; vertical++){
            for(int horizontal = 0; horizontal < 1; horizontal++){
                printf("Bispo cima direita\n");
            }
        }

        fbispo(fb - 1);
    }
}

void frainha(int fr){
        if(fr > 0){
            printf("Rainha esquerda \n");
            frainha(fr - 1);
        }
    }

    int main(){
      //Declaração das variaveis
       const char torre [] = "Torre";
       const char bispo [] = "Bispo";
       const char rainha[] = "Rainha";
       const char cavalo[] = "Cavalo";
       int t = 5, b = 5 , r = 8;

       
        printf("Movimentos da Torre \n");
        ftorre(t);
       

       printf("\n");

     
       printf("Movimentos do Bispo \n");
        fbispo(b);


       printf("\n");


        printf("Movimentos da Rainha \n");
        frainha(r);


       printf("\n");


     printf("Movimentos do Cavalo \n");

for (int v = 0, h = 0; v < 2; v++, h = (v == 1)) {  //loop externo
    printf("%s cima\n", cavalo);                    

    for (int step = 0; step < h; step++) {  //loop interno 
        printf("%s direita\n", cavalo);             
    }
}

       return 0;
    }