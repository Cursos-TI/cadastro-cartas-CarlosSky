#include <stdio.h>


/* Desafio Super-Trunfo, Faculdade Estacio - Nivel Novato
Entrada e saida de dados de apenas 2 cartas, com 7 informações de cada
Optei por não usar cararcteres como acentos pois a mensagem sai sem a formatação certa, com caracteres diferentes aos digitados

*/
int main(){
    // ================== DECLARAÇÃO DE VARIÁVEIS ==================
    
    char Estado1[50], Estado2[50];//optei por juntar em pares de cada cidade(ex: char, int, float..)
    char CodigoDeCarta1[4], CodigoDeCarta2[4]; 
    char NomeDaCidade1[50], NomeDaCidade2[50];
    int Populacao1, Populacao2;
    float AreaEmKm1, AreaEmKm2;
    float Pib1, Pib2;
    int NumeroPontosTuristicos1, NumeroPontosTuristicos2;

    // ================== ENTRADA: CARTA 1 ==================
    printf("--- CADASTRO DA CARTA 1 ---\n");
    printf("Digite o nome do Estado: ");
    scanf(" %[^\n]", Estado1);// o codigo "[^\n]" orienta o programa ler as informações completas, respeitando os espaços

    printf("Digite o Codigo da carta (Ex: A01): ");
    scanf(" %[^\n]", CodigoDeCarta1);

    printf("Digite o nome da Cidade: ");
    scanf(" %[^\n]", NomeDaCidade1);

    printf("Digite a Populacao: ");
    scanf("%d", &Populacao1);

    printf("Digite a Area em Km²: ");
    scanf("%f", &AreaEmKm1);

    printf("Digite o PIB: ");
    scanf("%f", &Pib1);

    printf("Digite o numero de pontos turísticos: ");
    scanf("%d", &NumeroPontosTuristicos1);

    printf("Fim das informacoes da primeira carta");


    // ================== ENTRADA: CARTA 2 ==================
    printf("\n--- CADASTRO DA CARTA 2 ---\n");
    printf("Digite o nome do Estado: ");
    scanf(" %[^\n]", Estado2);

    printf("Digite o Codigo da carta (Ex: B02): ");
    scanf(" %[^\n]", CodigoDeCarta2);

    printf("Digite o nome da Cidade: ");
    scanf(" %[^\n]", NomeDaCidade2);

    printf("Digite a Populacao: ");
    scanf("%d", &Populacao2);

    printf("Digite a Area em Km²: ");
    scanf("%f", &AreaEmKm2);

    printf("Digite o PIB: ");
    scanf("%f", &Pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &NumeroPontosTuristicos2);

    printf("Fim das informações da segunda carta, agora veremos abaixo cada carta e respectivos dados");


    // ================== EXIBIÇÃO DOS RESULTADOS ==================
    printf("\n=================================");
    printf("\n===    RESULTADO DAS CARTAS   ===\n");
    printf("=================================\n\n");

    // Saída da primeira carta
    printf("--- CARTA 1 ---\n");
    printf("Estado: %s\n", Estado1);
    printf("Codigo da Carta: %s\n", CodigoDeCarta1);
    printf("Nome da Cidade: %s\n", NomeDaCidade1);
    printf("Populacao: %d habitantes\n", Populacao1);
    printf("Area: %.2f Km²\n", AreaEmKm1);
    printf("PIB: %.2f de reais\n", Pib1);
    printf("Pontos Turisticos: %d\n", NumeroPontosTuristicos1);
    printf("\n\n"); 

    // Saída da segunda carta
    printf("--- CARTA 2 ---\n");
    printf("Estado: %s\n", Estado2);
    printf("Codigo da Carta: %s\n", CodigoDeCarta2);
    printf("Nome da Cidade: %s\n", NomeDaCidade2);
    printf("Populacao: %d habitantes\n", Populacao2); 
    printf("Area: %.2f Km²\n", AreaEmKm2);
    printf("PIB: %.2f de reais\n", Pib2);
    printf("Pontos Turisticos: %d\n", NumeroPontosTuristicos2);

    return 0;
}