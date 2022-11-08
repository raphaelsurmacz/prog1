#include <stdio.h>

#define ASSENTO 50

void imprimeOnibus(int onibus[]){

   for(int i = 4; i < 50; i = i + 4)
      printf(" [%d] ", onibus[i]);
   
   printf(" [%d]", onibus[49]);
   printf("\n");

   for(int i = 3; i < 49; i = i + 4)
      printf(" [%d] ", onibus[i]);
   
   printf("\n\n     ");

   for(int i = 2; i < 48; i = i + 4)
      printf(" [%d] ", onibus[i]); 
   
   printf("\n");
   printf(" [%d] ", onibus[0]);

   for(int i = 1; i < 47; i = i + 4)
      printf(" [%d] ", onibus[i]);
   
   printf("\n\n");
}

int verificarAssento(int onibus[], int Nassento){
   
   if(Nassento == 0 || Nassento == 49)
      return 0;

   if(onibus[Nassento] == Nassento)
      return 1;
   else
      return 0;

}

int reservarAssento(int onibus[], int Nassento){

   if((verificarAssento(onibus, Nassento)) == 1){
      onibus[Nassento] = 0;
      imprimeOnibus(onibus);
   }
   else
      printf("Ocupado\n");

   return 0;
}

int main(){
   int onibus[ASSENTO];
   int code, Nassento;

   for (int i = 0; i < ASSENTO; i++)
         onibus[i] = i;
         
   onibus[0] = 0;
   onibus[49] = 0;

   printf("Digite \"1\" para reservar\nDigite \"2\" para verificar\nDigite \"3\" para ver assentos\nDigite \"0\" para sair\n");
   scanf("%d", &code);

   while (code != 0){
      if(code == 1){
         imprimeOnibus(onibus);
      
         printf("Qual assento deseja reservar?\n");
         scanf("%d", &Nassento);

         reservarAssento(onibus, Nassento);
      }
      else{
         if (code == 2){
            imprimeOnibus(onibus);

            printf("Qual assento deseja verificar?\n");
            scanf("%d", &Nassento);

            if(verificarAssento(onibus, Nassento) == 0)
               printf("Ocupado\n");
            else
               printf("Disponivel\n");
         }
         else{
            printf("0 para Ocupado ---- \"N\" para assento Livre\n\n");
            imprimeOnibus(onibus);
         }
      }
      printf("Digite \"1\" para reservar\nDigite \"2\" para verificar\nDigite \"3\" para ver assentos\nDigite \"0\" para sair\n");
      scanf("%d", &code);
   }
      
   return 0;
}
