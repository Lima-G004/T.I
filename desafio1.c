#include <stdio.h>

int main(){
    char cidade[30];          // Nome da cidade
    int populacao;            // População da cidade
    int area;                 // Área da cidade (em km²)
    int pib;                  // PIB da cidade (em bilhões)
    int pontos_turisticos;    // Número de pontos turísticos

    printf("São Paulo \n");
    scanf("%s", &cidade);

    printf("44,41 milhões \n");
    scanf("%d", &populacao);

    printf("248.219 km \n");
    scanf("%d", &area);

    printf("31,1 \n");
    scanf("%d", &pib);

    printf("muitos pontos turísticos, incluindo parques, museus, edifícios, e outros locais. \n");
    scanf("%d", &pontos_turisticos);

    return 0;

}
