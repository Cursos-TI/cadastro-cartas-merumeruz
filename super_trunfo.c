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

    densidadePopulacional1 = populacao1 / area1; //calculo densidade populacional primeira carta
    pibPerCapita1 = (float)(pib1 * 1000000000) / (float)populacao1;

    //saida primeira carta  
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d \n", populacao1);
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
    printf("População: %d \n", populacao2);
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
    printf("\nComparações entre as cartas:\n");
    printf("População: Carta %d venceu (%d)\n", (populacao1 > populacao2) ? 1 : 2, populacao1 > populacao2);
    printf("Área: Carta %d venceu (%d)\n", (area1 > area2) ? 1 : 2, area1 > area2);
    printf("PIB: Carta %d venceu (%d)\n", (pib1 > pib2) ? 1 : 2, pib1 > pib2);
    printf("Número de Pontos Turísticos: Carta %d venceu (%d)\n", (pontosTuristicos1 > pontosTuristicos2) ? 1 : 2, pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidadePopulacional1 < densidadePopulacional2) ? 1 : 2, densidadePopulacional1 > densidadePopulacional2);
    printf("PIB per capita: Carta %d venceu (%d)\n", (pibPerCapita1 > pibPerCapita2) ? 1 : 2, pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta %d venceu (%d)\n", (SuperPoder1 > SuperPoder2) ? 1 : 2, SuperPoder1 > SuperPoder2);

    return 0;

}
