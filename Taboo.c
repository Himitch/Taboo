#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(void) {
  
  //inicialização de variáveis
  float tb1;
  float sm1, sm2;
  float sb1, sb2;
  float ml1, ml2;
  float dv1, dv2;
  float x;
  float ex1; 
  int ex2;
  int conf;
  int opc1, opc2;
  int y;
  int maior;
  int menor;
  int soma;
  int media;

  
  //nome do programa
  printf("[ =============== Taboo =============== ]\n");
  printf("Pressione [ENTER] para continuar.\n");
  scanf("%c");

  //menu
  printf("\nNeste programa voce consegue realizar cálculos e ver dados, selecione a seguir o que deseja fazer:\n");
  m3:
  printf("\n1. Tabuada do 5\n2. Tabuada do seu valor\n3. Calculadora\n4. Média e análise de 20 numeros aleatórios\n5. Mostra todos os numeros pares e impares de 1 a 100\n6. Sair\n");
  printf("\nDigite a opção que deseja: ");
  m1:
  scanf("%d", &opc1);

  //menu de escolhas
  switch(opc1){
    //tabuada do 5
    case 1:
      printf("\n[ ------------- TABUADA DO 5 ------------- ]\n");
      printf("\nAqui esta a tabuada do 5:\n");
      for(int i = 1; i <= 10; i++) {
      printf("5 * %d = %d\n", i, 5*i);
        if (i == 10){
          printf("\n[ ----------------------------------------- ]\n");
      
        }
      }  
    break;
    
    //Tabuada do seu valor
    case 2:
      
      printf("\n[ -------------- TABUADAS -------------- ]\n");
      printf("\nDigite o valor que deseja ver a tabuada: ");
      scanf("%f", &tb1);
      for(int i = 1; i <= 10; i++) {
      printf("%.2f * %d = %.2f\n", tb1, i, tb1*i);
      printf("\n[ ----------------------------------------- ]\n");
    break;
      }    
    //Calculadora
    case 3:
      printf("\n[ -------------- CALCULADORA -------------- ]\n");
      printf("Selecione o tipo de operação que deseja fazer:\n1. Soma\n2. Subtração\n3. Multiplicação\n4. Divisão\n5. Potenciação\n6. Sair\n");  
      m2:
      scanf("%d", &opc2);
      switch(opc2){
      //Soma
        case 1:
      
          printf("\n[ ----------------- SOMA ------------------ ]\n");
          printf("\nDigite o primeiro numero: ");
          scanf("%f", &sm1);
          printf("\nDigite o segundo numero: ");
          scanf("%f", &sm2);
          printf("[ %.2f + %.2f = %.2f ]", sm1, sm2, sm1+sm2);
          printf("\n[ ----------------------------------------- ]\n");
        break;
      //Subtração
        case 2:
        
          printf("\n[ --------------- SUBTRAÇÃO --------------- ]\n");
          printf("\nDigite o primeiro numero: ");
          scanf("%f", &sb1);
          printf("\nDigite o segundo numero: ");
          scanf("%f", &sb2);
          printf("[ %.2f + %.2f = %.2f ]", sb1, sb2, sb1-sb2);
          printf("\n[ ----------------------------------------- ]\n");
        break;
      //Multiplicação
        case 3:
      
          printf("\n[ ------------- MULTIPLICAÇÃO ------------- ]\n");
          printf("\nDigite o primeiro numero: ");
          scanf("%f", &ml1);
          printf("Digite o segundo numero: ");
          scanf("%f", &ml2);
          printf("\n[ %.2f x %.2f = %.2f ]", ml1, ml2, ml1*ml2);
          printf("\n[ ----------------------------------------- ]\n");
        break;
      //Divisão
        case 4:
        
          printf("\n[ ---------------- DIVISÃO ---------------- ]\n");
          printf("\nDigite o primeiro numero: ");
          scanf("%f", &dv1);
          printf("Digite o segundo numero: ");
          scanf("%f", &dv2);
          printf("[ %.2f / %.2f = %.2f ]", dv1, dv2, dv1);
          printf("\n[ ----------------------------------------- ]\n");
        break;
      //Exponenciação
        case 5:
 
          printf("\n[ ------------- EXPONENCIAÇÃO ------------- ]\n");
          printf("\nDigite o numero de base: ");
          scanf("%f", &ex1);
          printf("Digite o exponente: ");
          scanf("%d", &ex2);
          printf("[ %.2f ^ %d = %.3f ]", ex1, ex2, pow(ex1, ex2));
          printf("\n[ ----------------------------------------- ]\n");
        break;
        //Saida
        case 6:
        break;
        //Erro
        default:
        printf("[ OPÇÃO INVÁLIDA ]\n");
        printf("Digite novamente: ");
        goto m2;
      }
    break;
    //Média e analise de 20 numeros aleatorios
    case 4:
      
      srand(time(NULL));
      for (int i = 1; i <= 20; i++) {
        y = rand()%100;
        printf("%d   ", y);
       
        printf("\nO maior e o menor número são, %d e %d.\n");
        printf("\n[ ------------- MÉDIA ------------- ]\n");
        soma = soma + y;
        media = soma / 20;
        printf("\nA média entre os numeros é %d\n");
      }
    break;
    //Numeros pares e impares entre 0 e 100
    case 5:
      
      for (int i = 1; i <= 100; i++) {
        printf("%d", i);
      
      x = i % 2;
      printf("Os números pares são:\n");
      if (x == 0) {
        printf("%d ",i);    
      }
      }
          
    break;
    //Saida
    case 6:
    break;
    //Erro
    default:
    printf("[ OPÇÃO INVÁLIDA ]\n");
    printf("Digite novamente: ");
    goto m1;
  }

  //ponto de retorno
  printf("\nDeseja refazer alguma das operações?\n1. [SIM]\n2. [NÃO]\n");
  scanf("%d", &conf);
  if (conf == 1) {
    goto m3;
  }
  if (conf == 2) {
    goto fim;
  }

  //finalização
  fim:
  printf("[ ===================================== ]\n");
  printf("\nObrigado por usar o TABOO, até breve!! :)\n");
  printf("\n[ ===================================== ]");
  
return 0;
}