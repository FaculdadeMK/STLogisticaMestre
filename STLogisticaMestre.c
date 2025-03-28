#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

  char estado[20], estado2[20];
  char codigo[20], codigo2[20];
  char nome[20], nome2[20];
  int populaçao , populaçao2;
  float area , area2;
  float pib , pib2;
  int pontos , pontos2;
  float densidade , densidade2;
  float capita , capita2;
  float pibc , pibc2;
  float superpoder , superpoder2;
  int opcao , opcao2;
  int resultado1 , resultado2;

  printf("Digite o nome de um estado: ");
  scanf("%s", &estado);
  printf("Digite o codigo da carta: ");
  scanf("%s", &codigo);
  printf("Digite o nome de uma cidade nesse estado: ");
  scanf("%s", &nome);
  printf("Digite o número de habitantes da cidade: ");
  scanf("%d", &populaçao);
  printf("Digite a área por km2 da cidade: ");
  scanf("%f", &area);
  printf("Digite o PIB dessa cidade: ");
  scanf("%f", &pib);
  printf("Digite a quantidade de pontos turisticos: ");
  scanf("%d", &pontos);

  printf("Digite o nome de um estado: ");
  scanf("%s", &estado2);
  printf("Digite o codigo da carta: ");
  scanf("%s", &codigo2);
  printf("Digite o nome de uma cidade nesse estado: ");
  scanf("%s", &nome2);
  printf("Digite o número de habitantes da cidade: ");
  scanf("%d", &populaçao2);
  printf("Digite a área por km2 da cidade: ");
  scanf("%f", &area2);
  printf("Digite o PIB dessa cidade: ");
  scanf("%f", &pib2);
  printf("Digite a quantidade de pontos turisticos: ");
  scanf("%d", &pontos2);

  pibc = pib * 1000000000;
  pibc2 = pib2 * 1000000000;

  densidade = (float)populaçao / area;
  densidade2 = (float)populaçao2 / area2;
  capita = pibc / (float)populaçao;
  capita2 = pibc2 / (float)populaçao2;

  superpoder = populaçao + area + pib + pontos + capita + (1 / densidade);
  superpoder2 = populaçao2 + area2 + pib2 + pontos2 + capita2 + (1 / densidade2);

  printf("\n Carta 1: \n");
  printf("Estado: %s \n", estado);
  printf("Codigo da Carta: %s \n", codigo);
  printf("Nome da Cidade: %s \n", nome);
  printf("População: %d \n", populaçao);
  printf("Área: %.2f km² \n", area);
  printf("PIB: %.2f bilhões de reais \n", pib);
  printf("Número de Pontos Turisticos: %d \n", pontos);
  printf("Densidade Populacional: %.2f hab/km² \n", densidade);
  printf("PIB per Capita: %.2f reais \n", capita);
  printf("Super Poder: %.2f \n", superpoder);
  
  printf("\n Carta 2: \n");
  printf("Estado: %s \n", estado2);
  printf("Codigo da Carta: %s \n", codigo2);
  printf("Nome da Cidade: %s \n", nome2);
  printf("População: %d \n", populaçao2);
  printf("Área: %.2f km² \n", area2);
  printf("PIB: %.2f bilhões de reais \n", pib2);
  printf("Numero de Pontos Turisticos: %d \n", pontos2);
  printf("Densidade Populacional: %.2f hab/km² \n", densidade2);
  printf("PIB per Capita: %.2f reais \n", capita2);
  printf("Super Poder: %.2f \n", superpoder2);

  printf("\nEscolha o Primeiro Atributo a Ser Comparado: \n");
  printf("1.População \n");
  printf("2.Área \n");
  printf("3.PIB \n");
  printf("4.Pontos Turisticos \n");
  printf("5.Densidade Populacional \n");
  printf("6.PIB per Capita \n");
  printf("7.Super Poder \n\n");
  scanf("%d", &opcao);


  switch (opcao){
   case 1:
   resultado1 = populaçao > populaçao2;
     printf("\nAtributo Selecionado: População \n");
     printf("Carta 1: %d \n", populaçao);
     printf("Carta 2: %d \n\n", populaçao2);
    if (populaçao > populaçao2)
    {
      printf("Carta 1 Vence!\n");
    } else if (populaçao < populaçao2) {
      printf("Carta 2 Vence!\n");
    } else {
      printf("Empate!\n");
    }
    break;

    case 2:
    resultado1 = area > area2;
     printf("\nAtributo Selecionado: Área \n");
     printf("Carta 1: %.2f  km² \n", area);
     printf("Carta 2: %.2f  km² \n\n", area2);
    if (area > area2)
    {
      printf("Carta 1 Vence!\n");
    } else if (area < area2) {
        printf("Carta 2 Vence!\n");
      } else {
        printf("Empate!\n");
      }
    break;

    case 3:
    resultado1 = pib > pib2;
    printf("\nAtributo Selecionado: PIB \n");
    printf("Carta 1: %.2f bilhões de reais \n", pib);
    printf("Carta 2: %.2f bilhões de reais \n\n", pib2);
    if (pib > pib2)
    {
      printf("Carta 1 Vence!\n");
    } else if (pib < pib2) {
        printf("Carta 2 Vence!\n");
      } else {
        printf("Empate!\n");
      }
    break;

    case 4:
    resultado1 = pontos > pontos2;
    printf("\nAtributo Selecionado: Pontos Turisticos \n");
    printf("Carta 1: %d \n", pontos);
    printf("Carta 2: %d \n\n", pontos2);
    if (pontos > pontos2)
    {
      printf("Carta 1 Vence!\n");
    } else if (pontos < pontos2) {
        printf("Carta 2 Vence!\n");
      } else {
        printf("Empate!\n");
      }
    break;

    case 5:
    resultado1 = densidade < densidade2;
    printf("\nAtributo Selecionado: Densidade Populacional \n");
    printf("Carta 1: %.2f  \n", densidade);
    printf("Carta 2: %.2f  \n\n", densidade2);
    if (densidade < densidade2)
    {
      printf("Carta 1 Vence!\n");
    } else if (densidade > densidade2) {
        printf("Carta 2 Vence!\n");
      } else {
        printf("Empate!\n");
      }
    break;

    case 6:
    resultado1 = capita > capita2;
    printf("\nAtributo Selecionado: PIB per Capita \n");
    printf("Carta 1: %.2f reais \n", capita);
    printf("Carta 2: %.2f reais \n\n", capita2);
    if (capita > capita2){
      printf("Carta 1 Vence!\n");
    } else if (capita < capita2) {
        printf("Carta 2 Vence!\n");
      } else {
        printf("Empate!\n");
      }
    break;

    case 7:
    resultado1 = superpoder > superpoder2;
    printf("\nAtributo Selecionado: Super Poder \n");
    printf("Carta 1: %.2f  \n", superpoder);
    printf("Carta 2: %.2f  \n\n", superpoder2);
    if (superpoder > superpoder2){
      printf("Carta 1 Vence!\n");
    } else if (superpoder < superpoder2) {
        printf("Carta 2 Vence!\n");
      } else {
        printf("Empate!\n");
      }
    break;

    default:
     printf("Opção Invalida");
     break;
  }
  
  printf("\nEscolha o Segundo Atributo a Ser Comparado: \n");
  printf("1.População \n");
  printf("2.Área \n");
  printf("3.PIB \n");
  printf("4.Pontos Turisticos \n");
  printf("5.Densidade Populacional \n");
  printf("6.PIB per Capita \n");
  printf("7.Super Poder \n\n");
  scanf("%d", &opcao2);

  if (opcao == opcao2){
     printf("Você Escolheu o Mesmo Atributo!");
    
  } else{
    switch (opcao2){
    case 1:
    resultado2 = populaçao > populaçao2;
      printf("\nAtributo Selecionado: População \n");
      printf("Carta 1: %d \n", populaçao);
      printf("Carta 2: %d \n\n", populaçao2);
     if (populaçao > populaçao2)
     {
       printf("Carta 1 Vence!");
     } else if (populaçao < populaçao2) {
       printf("Carta 2 Vence!");
     } else {
       printf("Empate!");
     }
     break;
 
     case 2:
     resultado2 = area > area2;
      printf("\nAtributo Selecionado: Área \n");
      printf("Carta 1: %.2f  km² \n", area);
      printf("Carta 2: %.2f  km² \n\n", area2);
     if (area > area2)
     {
       printf("Carta 1 Vence!");
     } else if (area < area2) {
         printf("Carta 2 Vence!");
       } else {
         printf("Empate!");
       }
     break;
 
     case 3:
     resultado2 = pib > pib2;
     printf("\nAtributo Selecionado: PIB \n");
     printf("Carta 1: %.2f bilhões de reais \n", pib);
     printf("Carta 2: %.2f bilhões de reais \n\n", pib2);
     if (pib > pib2)
     {
       printf("Carta 1 Vence!");
     } else if (pib < pib2) {
         printf("Carta 2 Vence!");
       } else {
         printf("Empate!");
       }
     break;
 
     case 4:
     resultado2 = pontos > pontos2;
     printf("\nAtributo Selecionado: Pontos Turisticos \n");
     printf("Carta 1: %d \n", pontos);
     printf("Carta 2: %d \n\n", pontos2);
     if (pontos > pontos2)
     {
       printf("Carta 1 Vence!");
     } else if (pontos < pontos2) {
         printf("Carta 2 Vence!");
       } else {
         printf("Empate!");
       }
     break;
 
     case 5:
     resultado2 = densidade < densidade2;
     printf("\nAtributo Selecionado: Densidade Populacional \n");
     printf("Carta 1: %.2f  \n", densidade);
     printf("Carta 2: %.2f  \n\n", densidade2);
     if (densidade < densidade2)
     {
       printf("Carta 1 Vence!");
     } else if (densidade > densidade2) {
         printf("Carta 2 Vence!");
       } else {
         printf("Empate!");
       }
     break;
 
     case 6:
     resultado2 = capita > capita2;
     printf("\nAtributo Selecionado: PIB per Capita \n");
     printf("Carta 1: %.2f reais \n", capita);
     printf("Carta 2: %.2f reais \n\n", capita2);
     if (capita > capita2){
       printf("Carta 1 Vence!");
     } else if (capita < capita2) {
         printf("Carta 2 Vence!");
       } else {
         printf("Empate!");
       }
     break;
 
     case 7:
     resultado2 = superpoder > superpoder2;
     printf("\nAtributo Selecionado: Super Poder \n");
     printf("Carta 1: %.2f  \n", superpoder);
     printf("Carta 2: %.2f  \n\n", superpoder2);
     if (superpoder > superpoder2){
       printf("Carta 1 Vence!");
     } else if (superpoder < superpoder2) {
         printf("Carta 2 Vence!");
       } else {
         printf("Empate!");
       }
     break;
 
     default:
      printf("Opção Invalida");
      break;
   }

   printf("\n\nResultado Final: \n");

   if (resultado1 && resultado2){
     
     printf("Carta 1 Venceu a Comparação de Atributos!");

   }else if (resultado1 != resultado2)
   {
    printf("Houve um Empate na Comparação de Atributos!");
   } else {
    printf("Carta 2 Venceu a Comparação de Atributos!");
   }
   

  } 

}
