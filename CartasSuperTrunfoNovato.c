#include <stdio.h>

// Super Trunfo - Países
// Cadastro das Cartas

int main() {
    printf(" **SUPER TRUNFO PAÍSES**\n");
    printf("Siga o exemplo abaixo para criar suas cartas e começar a diversão\n");

    // Definir variáveis
    char nome_do_estado[50];
    char codigo_da_carta[4]; // Sempre utilizar Letra + Número (Letras de A a H números de 01 a 99)
    char nome_da_cidade[20]; // Cidade pertencente ao estado informado
    int populacao;  // População em habitantes
    float area_em_km; // Área em km²
    float pib; // PIB em bilhões
    int numero_de_pontos_turisticos; 
   
    printf("____________________________________________\n");

    // Leitura do Exemplo
    printf("*** CARTA 01 ***\n");

    // Inserir dados para a Carta 01
    printf("Nome do Estado = Pará\n");
    printf("Código da carta = A01\n");
    printf("Nome da Cidade = Santarém \n");
    populacao = 306480000;  // População em habitantes 
    area_em_km = 228870.80; // Área em km²
    pib = 63090;            // PIB em bilhões
    numero_de_pontos_turisticos = 32;

    
    // Exibindo resultados da Carta 01
    printf("População = %d habitantes\n", populacao);
    printf("Área em KM² = %.2f \n", area_em_km);
    printf("PIB = %.2f bilhões\n", pib);
    printf("Número de pontos turísticos = %d pontos \n", numero_de_pontos_turisticos);
   
    printf("____________________________________________\n");

    // *** CARTA 02 ***
    printf("*** CARTA 02 ***\n");

    // Inserir dados para a Carta 02
    printf("Nome do Estado = Paraná\n");
    printf("Código da carta = C03\n");
    printf("Nome da Cidade = Curitiba \n");
    populacao = 1829225;  // População em habitantes 
    area_em_km = 435277.00; // Área em km²
    pib = 98;            // PIB em bilhões
    numero_de_pontos_turisticos = 25;

    
    // Exibindo resultados da Carta 02
    printf("População = %d habitantes\n", populacao);
    printf("Área em KM² = %.2f \n", area_em_km);
    printf("PIB = %.2f bilhões\n", pib);
    printf("Número de pontos turísticos = %d pontos \n", numero_de_pontos_turisticos);
   

    printf("____________________________________________\n");

    printf("CRIE A SUA CARTA\n");

    printf("DIGITE O NOME DE UM ESTADO:");
    scanf("%s", nome_do_estado);  // Corrigido: não precisa de &

    printf("DIGITE O CODIGO DA CARTA:"); // Utilizar letras de A a H e número de 01 a 99.
    scanf("%s", codigo_da_carta);  // Corrigido: não precisa de &

    printf("DIGITE O NOME DE UMA CIDADE:"); // Cidade existente no estado descrito anteriormente.
    scanf("%s", nome_da_cidade);  // Corrigido: não precisa de &

    printf("DIGITE A POPULAÇÃO DA CIDADE:");
    scanf("%d", &populacao); 

    printf("DIGITE A AREA EM KM:");// Área em km²
    scanf("%f", &area_em_km);  

    printf("DIGITE O PIB DA CIDADE:"); // PIB em bilhões
    scanf("%f", &pib); 

    printf("DIGITE O NUMERO DE PONTOS TURISTICOS DA CIDADE:");
    scanf("%d", &numero_de_pontos_turisticos);  

   
    printf("____________________________________________\n");

    printf("**CARTA 03**\n");
    // Conferir o Resultado
    printf("População = %d habitantes\n", populacao);
    printf("Área em KM² = %.2f \n", area_em_km);
    printf("PIB = %.2f bilhões\n", pib);
    printf("Número de pontos turísticos = %d pontos \n", numero_de_pontos_turisticos);
    

    return 0;
}
