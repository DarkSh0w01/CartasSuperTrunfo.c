#include <stdio.h>  // Inclusão da biblioteca padrão de entrada e saída

int main() {
    // Declaração das variáveis para armazenar informações das duas cidades

    // Estado (letra que representa o estado)
    char Estado1, Estado2;

    // Nome da cidade (string de até 49 caracteres + '\0')
    char NomedaCidade1[50], NomedaCidade2[50];

    // Código da cidade (string curta de até 4 caracteres + '\0')
    char CodigodaCidade1[5], CodigodaCidade2[5];

    // População de cada cidade (inteiro)
    int Populacao1, Populacao2;

    // Área territorial em km² (valor decimal)
    float Area1, Area2;

    // Produto Interno Bruto de cada cidade (valor decimal)
    float PIB1, PIB2;

    // Número de pontos turísticos (inteiro)
    int PontosTuristicos1, PontosTuristicos2;

    // --- COLETA DE DADOS DA PRIMEIRA CIDADE ---

    printf("Digite o estado da cidade1: \n");
    scanf(" %c", &Estado1);  // Espaço antes de %c remove o '\n' deixado no buffer

    printf("Digite o nome da cidade1: \n");
    scanf("%s", NomedaCidade1);  // Lê uma palavra (sem espaços)

    printf("Digite o codigo da cidade1: \n");
    scanf("%s", CodigodaCidade1);  // Código curto, como "SP01"

    printf("Digite a população1: \n");
    scanf("%d", &Populacao1);  // População como número inteiro

    printf("Digite o tamanho da area1: \n");
    scanf("%f", &Area1);  // Área com casas decimais

    printf("Digite o valor do pib1: \n");
    scanf("%f", &PIB1);  // PIB com casas decimais

    printf("Número de pontos turísticos1: ");
    scanf("%d", &PontosTuristicos1);  // Número de pontos turísticos

    // --- COLETA DE DADOS DA SEGUNDA CIDADE ---

    printf("Digite o estado da cidade2: \n");
    scanf(" %c", &Estado2);  // Espaço antes de %c evita erro de leitura

    printf("Digite o nome da cidade2: \n");
    scanf("%s", NomedaCidade2);

    printf("Digite o codigo da cidade2: \n");
    scanf("%s", CodigodaCidade2);

    printf("Digite a população2: \n");
    scanf("%d", &Populacao2);

    printf("Digite o tamanho da area2: \n");
    scanf("%f", &Area2);

    printf("Digite o valor do pib2: \n");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos2: \n");
    scanf("%d", &PontosTuristicos2);

    // --- IMPRESSÃO DOS DADOS COLETADOS ---

    // Cidade 1
    printf("\n--- INFORMAÇÕES DA CIDADE 1 ---\n");
    printf("Estado: %c\n", Estado1);
    printf("Código da cidade: %s\n", CodigodaCidade1);
    printf("Nome da Cidade: %s\n", NomedaCidade1);
    printf("População: %d\n", Populacao1);
    printf("Número de pontos turísticos: %d\n", PontosTuristicos1);
    printf("Área: %.2f km²\n", Area1);
    printf("PIB: %.2f\n", PIB1);

    // Cidade 2
    printf("\n--- INFORMAÇÕES DA CIDADE 2 ---\n");
    printf("Estado: %c\n", Estado2);
    printf("Código da cidade: %s\n", CodigodaCidade2);
    printf("Nome da Cidade: %s\n", NomedaCidade2);
    printf("População: %d\n", Populacao2);
    printf("Número de pontos turísticos: %d\n", PontosTuristicos2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: %.2f\n", PIB2);

    // Retorno de sucesso
    return 0;
}
