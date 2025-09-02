#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    printf("Cartas Super Trunfo\n");
    //Carta 1
    char Estado_1;
    char Cidade_1_1[50];
    char Cidade_1_2[50];
    char Cidade_1_3[50];
    char Codigo_1[3];
    int Populacao_1;
    int Ponto_Turistico_1;
    float Area_1;
    float PIB_1;
    //Carta 2
    char Estado_2;
    char Cidade_2_1[50];
    char Cidade_2_2[50];
    char Cidade_2_3[50];
    char Codigo_2[3];
    int Populacao_2;
    int Ponto_Turistico_2;
    float Area_2;
    float PIB_2;
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    //Carta 1
    printf("Carta 1\n");

    printf("Estado: ");
    scanf("%c", &Estado_1);

    printf("Código: ");
    scanf("%s", Codigo_1);

    printf("Nome da Cidade: ");
    scanf("%s %s", Cidade_1_1, Cidade_1_2);

    printf("População: ");
    scanf("%d", &Populacao_1);

    printf("Área: ");
    scanf("%f", &Area_1);

    printf("PIB: ");
    scanf("%f", &PIB_1);

    printf("Número de Ponto Turísticos: ");
    scanf("%d", &Ponto_Turistico_1);
    //Carta 2
    printf("\n");
    printf("Carta 2\n");

    printf("Estado: ");
    scanf("%s", &Estado_2);

    printf("Código: ");
    scanf("%s", Codigo_2);

    printf("Nome da Cidade: ");
    scanf("%s %s %s", Cidade_2_1, Cidade_2_2, Cidade_2_3);

    printf("População: ");
    scanf("%d", &Populacao_2);

    printf("Área: ");
    scanf("%f", &Area_2);

    printf("PIB: ");
    scanf("%f", &PIB_2);

    printf("Número de Ponto Turísticos: ");
    scanf("%d", &Ponto_Turistico_2);
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    //Carta1
    printf("\n");
    printf("Carta 1\n");
    printf("Estado: %c\n", Estado_1);
    printf("Código: %s\n", Codigo_1);
    printf("Nome da Cidade: %s %s\n", Cidade_1_1, Cidade_1_2);
    printf("População: %d\n", Populacao_1);
    printf("Área: %4.2f km²\n", Area_1);
    printf("PIB: %4.2f bilhões de reais\n", PIB_1);
    printf("Números de Pontos Turísticos: %d\n", Ponto_Turistico_1);
    //Carta 2
    printf("\n");
    printf("Carta 2\n");
    printf("Estado: %c\n", Estado_2);
    printf("Código: %s\n", Codigo_2);
    printf("Nome da Cidade: %s %s %s\n", Cidade_2_1, Cidade_2_2, Cidade_2_3);
    printf("População: %d\n", Populacao_2);
    printf("Área: %4.2f km²\n", Area_2);
    printf("PIB: %4.2f bilhões de reais\n", PIB_2);
    printf("Números de Pontos Turísticos: %d\n", Ponto_Turistico_2);   

    return 0;
}
