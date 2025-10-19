#include <stdio.h>
#include <string.h>

int main(){

    char estado;
    char codigo[4];
    char cidade[50];
    int populacao;
    float area;
    float PIB;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;

    //primeira carta

    printf("Digite a sigla do estado:");
    scanf(" %c", &estado); 
    printf("Digite o código da carta:");
    scanf("%3s", codigo); //lê até 3 chars e garante codigo[3] == '\0'
    scanf("%*c"); //limpa o buffer do teclado
    printf("Digite o nome da cidade:");
    fgets(cidade, 50, stdin); //lê uma linha com espaços
    cidade[strcspn(cidade, "\r\n")] = '\0'; //remove o '\n' do final da string
    printf("Digite a população da cidade:");
    scanf("%d", &populacao); 
    printf("Digite a área da cidade (em km²):");
    scanf("%f", &area);
    printf("Digite o PIB da cidade (em bilhões):");
    scanf("%f", &PIB);
    printf("Digite o número de pontos turísticos da cidade:");
    scanf("%d", &pontosTuristicos);

    //calculos primeira carta

    densidadePopulacional = (float)populacao / area; //calculo densidade populacional primeira carta
    pibPerCapita = (float)((PIB * 1000000000) / populacao); // calculo pib per capita primeira carta

    //saida primeira carta  
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d \n", populacao);
    printf("Área: %.2f km² \n", area);
    printf("PIB: %.2f bilhões de reais\n", PIB);
    printf("Número de Pontos Turísticos: %d \n", pontosTuristicos);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional);
    printf("PIB per capita: %.2f reais\n", pibPerCapita);
    
    
    //segunda carta

    printf("Digite a sigla do estado:");
    scanf(" %c", &estado); 
    printf("Digite o código da carta:");
    scanf("%3s", codigo); //lê até 3 chars e garante codigo[3] == '\0'
    scanf("%*c"); //limpa o buffer do teclado
    printf("Digite o nome da cidade:");
    fgets(cidade, 50, stdin); //lê uma linha com espaços
    cidade[strcspn(cidade, "\r\n")] = '\0'; //remove o '\n' do final da string
    printf("Digite a população da cidade:");
    scanf("%d", &populacao); 
    printf("Digite a área da cidade (em km²):");
    scanf("%f", &area);
    printf("Digite o PIB da cidade (em bilhões):");
    scanf("%f", &PIB);
    printf("Digite o número de pontos turísticos da cidade:");
    scanf("%d", &pontosTuristicos);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional);
    printf("PIB per capita: %.2f reais\n", pibPerCapita);

    //calculos segunda carta

    densidadePopulacional = (float)populacao / area; //calculo densidade populacional segunda carta
    pibPerCapita = (float)((PIB * 1000000000) / populacao); // calculo pib per capita segunda carta

    //saida segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d \n", populacao);
    printf("Área: %.2f km² \n", area);
    printf("PIB: %.2f bilhões de reais\n", PIB);
    printf("Número de Pontos Turísticos: %d \n", pontosTuristicos);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional);
    printf("PIB per capita: %.2f reais\n", pibPerCapita);

    return 0;
}
