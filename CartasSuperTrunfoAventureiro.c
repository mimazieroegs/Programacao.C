#include <stdio.h>

// Super Trunfo - Países
// Cadastro das Cartas

int main() {
    printf(" **SUPER TRUNFO PAÍSES**\n");
    printf("Siga o exemplo abaixo para criar suas cartas e começar a diversão\n");

    // Definir variáveis
    char nome_do_estado1, nome_do_estado2, nome_do_estado3[50];
    char codigo_da_carta1, codigo_da_carta2,codigo_da_carta3 [4]; // Sempre utilizar Letra + Número (Letras de A a H números de 01 a 99)
    char nome_da_cidade1, nome_da_cidade2, nome_da_cidade3[20]; // Cidade pertencente ao estado informado
    int populacao1, populacao2, populacao3;  // População em habitantes
    float area_em_km1, area_em_km2, area_em_km3; // Área em km²
    float pib1, pib2, pib3; // PIB em bilhões
    int numero_de_pontos_turisticos1, numero_de_pontos_turisticos2, numero_de_pontos_turisticos3; 
    // Definir variáveis para densidade e PIB per capita
    float densidade_populacional1, densidade_populacional2, densidade_populacional3;
    float pib_per_capita1, pib_per_capita2, pib_per_capita3;

    printf("____________________________________________\n");
    printf("____________________________________________\n");

    // Leitura do Exemplo
    printf("*** CARTA 01 ***\n");

    // Inserir dados para a Carta 01
    printf("Nome do Estado = Pará\n", nome_do_estado1);
    printf("Código da carta = A01\n", codigo_da_carta1);
    printf("Nome da Cidade = Santarém \n",nome_da_cidade1);
    populacao1 = 306480000;  // População em habitantes 
    area_em_km1 = 228870.80; // Área em km²
    pib1 = 63090;            // PIB em bilhões
    numero_de_pontos_turisticos1 = 32;
    // Calculando densidade populacional e PIB per capita
    densidade_populacional1 = populacao1 / area_em_km1;
    pib_per_capita1 = pib1 * 1000000000 / populacao1; // Multiplicando PIB por 1 bilhão para converter para valores monetários reais

    // Exibindo resultados da Carta 01
    printf("População = %d habitantes\n", populacao1);
    printf("Área em KM² = %.2f \n", area_em_km1);
    printf("PIB = %.2f bilhões\n", pib1);
    printf("Número de pontos turísticos = %d pontos \n", numero_de_pontos_turisticos1);
    printf("Densidade Populacional = %.2f habitantes por km²\n", densidade_populacional1);
    printf("PIB per Capita = %.2f\n", pib_per_capita1);

    printf("____________________________________________\n");
    printf("____________________________________________\n");

    // *** CARTA 02 ***
    printf("*** CARTA 02 ***\n");

    // Inserir dados para a Carta 02
    printf("Nome do Estado = Paraná\n", nome_do_estado2);
    printf("Código da carta = C03\n",codigo_da_carta2);
    printf("Nome da Cidade = Curitiba \n", nome_da_cidade2);
    populacao2 = 1829225;  // População em habitantes 
    area_em_km2 = 435277.00; // Área em km²
    pib2 = 98;            // PIB em bilhões
    numero_de_pontos_turisticos2 = 25;
    // Calculando densidade populacional e PIB per capita
    densidade_populacional2 = populacao2 / area_em_km2;
    pib_per_capita2 = pib2 * 1000000000 / populacao2; // Multiplicando PIB por 1 bilhão para converter para valores monetários reais

    // Exibindo resultados da Carta 02
    printf("População = %d habitantes\n", populacao2);
    printf("Área em KM² = %.2f \n", area_em_km2);
    printf("PIB = %.2f bilhões\n", pib2);
    printf("Número de pontos turísticos = %d pontos \n", numero_de_pontos_turisticos2);
    printf("Densidade Populacional = %.2f habitantes por km²\n", densidade_populacional2);
    printf("PIB per Capita = %.2f\n", pib_per_capita2);

    printf("____________________________________________\n");
    printf("____________________________________________\n");

    printf("***CRIE A SUA CARTA***\n");

    printf("DIGITE O NOME DE UM ESTADO:");
    scanf("%s", nome_do_estado3); 
    printf("DIGITE O CODIGO DA CARTA:"); // Utilizar letras de A a H e número de 01 a 99.
    scanf("%s", codigo_da_carta3);  
    printf("DIGITE O NOME DE UMA CIDADE:"); // Cidade existente no estado descrito anteriormente.
    scanf("%s", nome_da_cidade3); 
    printf("DIGITE A POPULAÇÃO DA CIDADE:");
    scanf("%d", &populacao3); 
    printf("DIGITE A AREA EM KM:");// Área em km²
    scanf("%f", &area_em_km3);  
    printf("DIGITE O PIB DA CIDADE:"); // PIB em bilhões
    scanf("%f", &pib3); 
    printf("DIGITE O NUMERO DE PONTOS TURISTICOS DA CIDADE:");
    scanf("%d", &numero_de_pontos_turisticos3);  
   // Calculando densidade populacional e PIB per capita
   densidade_populacional3 = populacao3 / area_em_km3;
   pib_per_capita3 = pib3 * 1000000000 / populacao3; // Multiplicando PIB por 1 bilhão para converter para valores monetários reais


    printf("____________________________________________\n");
    printf("____________________________________________\n");

    printf("**CARTA 03**\n");
    // Conferir o Resultado
    printf("Nome do Estado = %s\n", nome_do_estado3);
    printf("Código da carta = %s\n",codigo_da_carta3);
    printf("Nome da Cidade = %s\n", nome_da_cidade3);
    printf("População = %d habitantes\n", populacao3);
    printf("Área em KM² = %.2f \n", area_em_km3);
    printf("PIB = %.2f bilhões\n", pib3);
    printf("Número de pontos turísticos = %d pontos \n", numero_de_pontos_turisticos3);
    printf("Densidade Populacional = %.2f habitantes por km²\n", densidade_populacional3);
    printf("PIB per Capita = %.2f\n", pib_per_capita3);


    return 0;
}