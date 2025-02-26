#include <stdio.h>
#include <ctype.h>

//variaveis
int main() {
char estado[7], estado2[7];
char codigo[4], codigo2[4];
char nomecity[50], nomecity2[50];
int popu, pontotur, popu2, pontotur2;
float area, pib, area2, pib2;

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
    printf("--------CARTA 1--------\n");
    printf("Estado: %s \n", estado);
    printf("Código da Carta: %s%s \n", estado, codigo);
    printf("Nome da Cidade: %s \n", nomecity);
    printf("População: %d \n", popu);
    printf("Área: %.2f Km² \n", area);
    printf("PIB: %.3f \n", pib);
    printf("Número de Pontos Turísticos: %d \n", pontotur);


    printf("--------CARTA 2--------\n");
    printf("Estado: %s \n", estado2);
    printf("Código da Carta: %s%s \n", estado2, codigo2);
    printf("Nome da Cidade: %s \n", nomecity2);
    printf("População: %d \n", popu2);
    printf("Área: %.2f Km² \n", area2);
    printf("PIB: %.3f \n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontotur2);


    return 0;
}