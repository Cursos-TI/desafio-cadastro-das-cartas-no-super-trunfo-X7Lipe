#include <stdio.h>

int main() {
    

//declarar variáveis carta 1
    char estado1;
    char codigo1[5];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

//declarar variáveis carta 2
    char estado2;
    char codigo2[5];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

//Ler dados carta 1
    printf("-------Digite os dados da carta 1: -------\n");

    printf("Estado de A até H: \n");
    scanf("%c", &estado1);

    printf("Código da carta (EX: D01): \n");
    scanf("%s", &codigo1);

    printf("Cidade da carta 1: \n");
    scanf("%s", &cidade1);

    printf("População: \n");
    scanf("%d", &populacao1);

    printf("Área total: \n");
    scanf("%f", &area1);

    printf("PIB total: \n");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos1);

    printf("\n");
    
//Ler dados carta 2
    printf("-------Digite os dados da carta 2: -------\n");

    printf("Estado de A até H:\n");
    scanf(" %c", &estado2);

    printf("Código da carta 2 (EX: C02): \n");
    scanf("%s", &codigo2);

    printf("Cidade da carta 2: \n");
    scanf("%s", &cidade2);

    printf("População: \n");
    scanf("%d", &populacao2);

    printf("Área total: \n");
    scanf("%f", &area2);

    printf("PIB total: \n");
    scanf("%f", &pib2);

    printf("Número pontos turísticos: \n");
    scanf("%d", &pontos_turisticos2);

    printf("\n");

//Mostrar dados carta 1
    printf("-------Dados carta 1-------\n");

    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área em km²: %.2f km²\n", area1);
    printf("PIB: R$ %.2f\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos1);

    printf("\n");

//Mostrar dados carta 2
    printf("-------Dados carta 2-------\n");

    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área em km²: %.2f km²\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Número de pontos turísticos: %d", pontos_turisticos2);

    return 0;
    

}

