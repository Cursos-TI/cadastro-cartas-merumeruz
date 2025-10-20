#include <stdio.h>
#include <string.h>

int main(){

    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidadePopulacional1, densidadePopulacional2;
    float pibPerCapita1, pibPerCapita2;
    float SuperPoder1, SuperPoder2;


    //primeira carta
{
    printf("Digite a sigla do estado:");
    scanf(" %c", &estado1); 
    printf("Digite o código da carta:");
    scanf("%3s", codigo1); //lê até 3 chars e garante codigo[3] == '\0'
    scanf("%*c"); //limpa o buffer do teclado
    printf("Digite o nome da cidade:");
    fgets(cidade1, 50, stdin); //lê uma linha com espaços
    cidade1[strcspn(cidade1, "\r\n")] = '\0'; //remove o '\n' do final da string
    printf("Digite a população da cidade:");
    scanf("%lu", &populacao1); 
    printf("Digite a área da cidade (em km²):");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade (em bilhões):");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da cidade:");
    scanf("%d", &pontosTuristicos1);

    //calculos primeira carta

    densidadePopulacional1 = (float)populacao1 / area1; //calculo densidade populacional primeira carta
    pibPerCapita1 = (pib1 * 1000000000) / (float)populacao1;

    //saida primeira carta  
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu \n", populacao1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d \n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional1);
    printf("PIB per capita: %.2f reais\n", pibPerCapita1);

    //segunda carta

    printf("Digite a sigla do estado:");
    scanf(" %c", &estado2); 
    printf("Digite o código da carta:");
    scanf("%3s", codigo2); //lê até 3 chars e garante codigo[3] == '\0'
    scanf("%*c"); //limpa o buffer do teclado
    printf("Digite o nome da cidade:");
    fgets(cidade2, 50, stdin); //lê uma linha com espaços
    cidade2[strcspn(cidade2, "\r\n")] = '\0'; //remove o '\n' do final da string
    printf("Digite a população da cidade:");
    scanf("%lu", &populacao2); 
    printf("Digite a área da cidade (em km²):");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade (em bilhões):");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da cidade:");
    scanf("%d", &pontosTuristicos2);

    //calculos segunda carta

    densidadePopulacional2 = (float)populacao2 / area2; //calculo densidade populacional primeira carta
    pibPerCapita2 = (pib2 * 1000000000) / (float)populacao2;

    //saida segunda carta  
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d \n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional2);
    printf("PIB per capita: %.2f reais\n", pibPerCapita2);
    
}
    
    SuperPoder1 = (float) populacao1 + area1 + pib1 + (float)pontosTuristicos1 + (float)(1/densidadePopulacional1) + pibPerCapita1;
    SuperPoder2 = (float) populacao2 + area2 + pib2 + (float)pontosTuristicos2 + (float)(1/densidadePopulacional2) + pibPerCapita2;

    //printf("Debug: SuperPoder1 = %.2f\n", SuperPoder1);
    //printf("Debug: SuperPoder2 = %.2f\n", SuperPoder2);

    int cartaVencedora; //variavel para armazenar a carta vencedora em cada comparação
    printf("\nComparações entre as cartas:\n");
    cartaVencedora = 1 + (populacao2 > populacao1); //comparacao resulta em 0 ou 1, somando 1 resulta em 1 ou 2, se populacao2 < populacao1 os () valem 0, + 1, logo cartaVencedora = 1 e vice versa
    printf("População: Carta %lu venceu (%d)\n", cartaVencedora, populacao1 > populacao2);
    cartaVencedora = 1 + (area2 > area1);
    printf("Área: Carta %d venceu (%d)\n", cartaVencedora, area1 > area2);
    cartaVencedora = 1 + (pib2 > pib1);
    printf("PIB: Carta %d venceu (%d)\n", cartaVencedora, pib1 > pib2);
    cartaVencedora = 1 + (pontosTuristicos2 > pontosTuristicos1);
    printf("Número de Pontos Turísticos: Carta %d venceu (%d)\n", cartaVencedora, pontosTuristicos1 > pontosTuristicos2);
    cartaVencedora = 1 + (densidadePopulacional2 < densidadePopulacional1);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", cartaVencedora, densidadePopulacional1 < densidadePopulacional2);
    cartaVencedora = 1 + (pibPerCapita2 > pibPerCapita1);
    printf("PIB per capita: Carta %d venceu (%d)\n", cartaVencedora, pibPerCapita1 > pibPerCapita2);
    cartaVencedora = 1 + (SuperPoder2 > SuperPoder1);
    printf("Super Poder: Carta %d venceu (%d)\n", cartaVencedora, SuperPoder1 > SuperPoder2);

    return 0;
}

