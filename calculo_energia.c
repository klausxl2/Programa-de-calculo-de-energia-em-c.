#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>
//Limpa o buffer do teclado
void flush_in(){ 
    int ch;
    while( (ch = fgetc(stdin)) != EOF && ch != '\n' ){} 
}
typedef struct {
  float w;
  char imovel[50];
  int hora;
  }energia;
  int main(){
  setlocale(LC_ALL, "Portuguese");
  float hora;
  int imovell;
  float calculo;
  float mes;
   energia n[10];
   printf("---------------------------------\n");
   printf("Bem vindo ao sistema de calculo de energia.\n");
   printf("Quantos imóveis você possui?:\n");
   scanf("%d",&imovell);
   while (getchar() != '\n');
     for(int i=0 ;i<imovell;i++){
      printf("Nome do imóvel:\n");
      scanf("%50[^\n]",n[i].imovel);
      flush_in(); 

      printf("What do imovel:\n");
      scanf("%f",&n[i].w);
      printf("Qual  o tempo de uso do imóvel?/\n obs:(DIGITE O TEMPO EM MINUTOS:\n");
      scanf("%d",&n[i].hora);
      flush_in();
      } system("clear");
       for(int i=0 ;i<imovell;i++){
       hora = n[i].hora/60;
       calculo = (n[i].w*hora)/1000*0.8333;
       mes = calculo*30;
       printf("\tNOME DO IMÒVEL:%s \n ",n[i].imovel);
       printf("\tENERGIA GASTA:R$%.2f \n",calculo);
       printf("\tA CONTA DE ENERGIA TOTAL DO MÊS É: %.2f\n",mes);

       }
        return 0;
       }
       
       
      
      
     
