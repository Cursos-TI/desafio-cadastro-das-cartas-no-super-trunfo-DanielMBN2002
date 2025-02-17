#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    char estado[50];
    char carta[50];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int turismo;;

    printf("Digite o nome do Estado: \n");
    scanf("%s", &estado);
    printf("Digite o código da carta: \n");
    scanf("%s", &carta);
    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade);
    printf("Digite a população total da cidade: \n");
    scanf("%d", &populacao);
    printf("Digite a área total da cidade: \n");
    scanf("%f", &area);
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &turismo);

    printf("Estado: %s\n", estado);
    printf("Código de Carta: %s\n", carta);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %f Km²\n", area);
    printf("PIB: R$ %f\n", pib);
    printf("Número de pontos turísticos: %d\n", turismo);
    
    return 0;
}
