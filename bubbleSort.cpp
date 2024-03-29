#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include "time.h"
//#include <math.h>

void bubbleSort (int vetor[], int n) {
    int k, j, aux;

    for (k = n - 1; k > 0; k--) {
        //printf("\n[%d] ", k);

        for (j = 0; j < k; j++) {
            //printf("%d, ", j);

            if (vetor[j] > vetor[j + 1]) {
                aux          = vetor[j];
                vetor[j]     = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
    printf("\n\n");
}



void imprimir_vetor(int vetor[], int tamanho){ 

    int i;
    printf("Imprimindo Vetor:\n");

    for(i = 0; i < tamanho; i++){
        printf("%d\t", vetor[i]);

        if(!((i + 1) % tamanho)) /*Condicao para pular linha*/
            printf("\n");
    }
}


int main()
{
  long i;
  long tamanho1, tamanho2, tamanho3, tamanho4;
  
  tamanho1 = 4000;
  tamanho2 = 50000;
  tamanho3 = 70000;
  tamanho4 = 80000;
  
  int vetor1[tamanho1], vetor2[tamanho2], vetor3[tamanho3], vetor4[tamanho4];
  

  srand(time(NULL));
  
  
   printf("Gerando vetor1 com %d valores aleatorios:\n", tamanho1);
  for (i = 0; i < tamanho1; i++)
  {
    /* gerando valores aleatórios entre zero e 100 */    
    vetor1[i]= rand() % 100;
    //imprime = vetor[i];
    printf("%d\t", vetor1[i]);
  }
  
    printf("\nOrdenando %d valores aleatorios...\n\n", tamanho1);
    clock_t tempoInicial, tempoFinal;
   double tempo_gasto1;
   tempoInicial = clock();   
   bubbleSort(vetor1, tamanho1);
   tempoFinal = clock();
   tempo_gasto1 = ( (double) (tempoInicial - tempoFinal) ) / CLOCKS_PER_SEC;   
   imprimir_vetor(vetor1, tamanho1);
   printf("\nTempo gasto: %lf s\n", tempo_gasto1);
   

   
   
  
    printf("\n\n Gerando vetor2 com %d valores aleatorios:\n", tamanho2 );  
    for (i = 0; i < tamanho2; i++)
  {
    /* gerando valores aleatórios entre zero e 100 */    
    vetor2[i]= rand() % 100;
    //imprime = vetor2[i];
    printf("%d\t", vetor2[i]);
  }
  
  
     printf("\nOrdenando %d valores aleatorios...\n", tamanho2);
	clock_t tempoInicial2, tempoFinal2;
   double tempo_gasto2;
   tempoInicial2 = clock();   
   bubbleSort(vetor2, tamanho2);
   tempoFinal2 = clock();
   tempo_gasto2 = ( (double) (tempoInicial2 - tempoFinal2) ) / CLOCKS_PER_SEC;   
   imprimir_vetor(vetor2, tamanho2);
   printf("\nTempo gasto: %lf s\n", tempo_gasto2);
  
  
  
  
  printf("\n\n Gerando vetor3 com %d valores aleatorios:\n", tamanho3 );  
    for (i = 0; i < tamanho3; i++)
  {
    /* gerando valores aleatórios entre zero e 100 */    
    vetor3[i]= rand() % 100;
    //imprime = vetor3[i];
    printf("%d\t", vetor3[i]);
  }
  
  
  
     printf("\nOrdenando %d valores aleatorios...\n", tamanho3);
   clock_t tempoInicial3, tempoFinal3;
   double tempo_gasto3;
   tempoInicial3 = clock();   
   bubbleSort(vetor3, tamanho3);
   tempoFinal3 = clock();
   tempo_gasto3 = ( (double) (tempoInicial3 - tempoFinal3) ) / CLOCKS_PER_SEC;   
   imprimir_vetor(vetor3, tamanho3);
   printf("\nTempo gasto: %lf s\n", tempo_gasto3);
  
  
  
  
  printf("\n\n Gerando vetor4 com %d valores aleatorios:\n", tamanho4 );  
    for (i = 0; i < tamanho4; i++)
  {
    /* gerando valores aleatórios entre zero e 100 */    
    vetor4[i]= rand() % 100;
    //imprime = vetor4[i];
    printf("%d\t", vetor4[i]);
  }

     printf("\nOrdenando %d valores aleatorios...\n", tamanho4);
   clock_t tempoInicial4, tempoFinal4;
   double tempo_gasto4;
   tempoInicial4 = clock();   
   bubbleSort(vetor4, tamanho4);
   tempoFinal4 = clock();
   tempo_gasto4 = ( (double) (tempoInicial4 - tempoFinal4) ) / CLOCKS_PER_SEC;   
   imprimir_vetor(vetor4, tamanho4);
   printf("\nTempo gasto: %lf s\n", tempo_gasto4);
   

printf("\nTempo gasto para ordenar vetor1 com %d elementos --> %f s",tamanho1, tempo_gasto1);
printf("\nTempo gasto para ordenar vetor2 com %d elementos --> %f s",tamanho2, tempo_gasto2);
printf("\nTempo gasto para ordenar vetor3 com %d elementos --> %f s",tamanho3, tempo_gasto3);
printf("\nTempo gasto para ordenar vetor1 com %d elementos --> %f s",tamanho4, tempo_gasto4);
   
}
