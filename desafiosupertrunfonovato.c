#include <stdio.h>
#include <ctype.h>

//variaveis 1 card
int main() {
char estado;
char codigo[4];
char nomecity[50];
int  pontotur, popu;
float area, pib, densi, ppc;         //ppc - pib per capita

//cadastro 1 card
printf("**Bem vindo ao jogo super trunfo dos estados!!**\n");
printf("Vamos digitar os dados da primeira carta? Bora lá!!\n");
printf("-----CARTA 1-----\n");
printf("Digite uma letra de 'A' a 'H'\n");
scanf(" %c", &estado);
printf("Digite um número de 01 a 04: \n");
scanf("%s", &codigo);
printf("O nome da cidade: \n");
scanf("%s", &nomecity);
printf("Agora o número de habitantes da cidade: \n");
scanf("%d", &popu);
printf("Qual o tamanho da área da cidade?: \n");
scanf("%f", &area);
printf("E agora o PIB: \n");
scanf("%f", &pib);
printf("E por fim a quantidade de pontos turísticos: \n");
scanf("%d", &pontotur);


//variaveis 2 card
char estado2[7];
char codigo2[4];
char nomecity2[100];
int  pontotur2, popu2;
float area2, pib2, densi2, ppc2;         //ppc - pib per capita

//cadastro 2 card
printf("Vamos entrar com a segunda carta agora? Bora lá!!\n");
printf("-----CARTA 2-----\n");
printf("Digite uma letra de 'A' a 'H' \n");
scanf(" %c", &estado2);
printf("Digite um número de 01 a 04: \n");
scanf("%s", &codigo2);
printf("O nome da cidade: \n");
scanf("%s", &nomecity2);
printf("Agora o número de habitantes da cidade: \n");
scanf("%d", &popu2);
printf("Qual o tamanho da área da cidade? \n");
scanf("%f", &area2);
printf("E agora o PIB: \n");
scanf("%f", &pib2);
printf("E por fim a quantidade de pontos turísticos: \n");
scanf("%d", &pontotur2);


//-------------------------------------------------------------


float densi = popu /= area;
float ppc = pib /= popu;

    printf("--------CARTA 1--------\n");
    printf("Estado: %c \n", estado);
    printf("Código da Carta: %c%s \n", estado, codigo);
    printf("Nome da Cidade: %s \n", nomecity);
    printf("População: %d \n", popu);
    printf("Área: %.2f Km² \n", area);
    printf("Densidade populacional: %.2f hab/km² \n", densi);
    printf("PIB: %.2f bilhões de reais \n", pib);
    printf("PIB per Capita: %.2f \n", ppc);
    printf("Número de Pontos Turísticos: %d \n", pontotur);

    
float densi2 = popu2 /= area2;
float ppc2 = pib2 /= popu2;

    printf("--------CARTA 2--------\n");
    printf("Estado: %c \n", estado2);
    printf("Código da Carta: %c%s \n", estado2, codigo2);
    printf("Nome da Cidade: %s \n", nomecity2);
    printf("População: %d \n", popu2);
    printf("Área: %.2f Km² \n", area2);
    printf("Densidade populacional: %.2f hab/km² \n", densi2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("PIB per Capita: %.2f \n", ppc2);
    printf("Número de Pontos Turísticos: %d\n", pontotur2);


    return 0;
}