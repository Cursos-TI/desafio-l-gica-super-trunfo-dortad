//Desafio Logica Nivel Novato  Aluno matricula 202502813139
// Aluno : Durval (Polo Santo Andre) V Entrega !
#include <stdio.h>

// criando as variaves 


    char estado[2] = "", estado2[2]  = "";
    char codigoCarta[3] = "", codigoCarta2[3] = "";
    char nomeCidade[51] = "", nomeCidade2[51] = "";
    int populacao = 0, populacao2 =0;
    float area = 0, area2 =0;
    float pib = 0, pib2 =0;
    int numeroPontosTuristicos = 0, numeroPontosTuristicos2 = 0;
    float densidadePop = 0, densidadePop2 = 0;
    float pibPerCapita = 0, pibPerCapita2 = 0;
    


int main() {
    //entrada de dados da primeira carta
    printf("Digite os dados da primeira Carta: \n");
    printf("Digite o estado: \n");
    scanf("%s", estado);
    printf("Digite o codigo da carta: \n");
    scanf("%s", codigoCarta);
    printf("Digite o nome da cidade: \n");
    scanf("%s", nomeCidade);
    printf("Digite a populacao: \n");
    scanf("%d", &populacao);
    printf("Digite a area: \n");
    scanf("%f", &area);
    printf("Digite o pib: \n");
    scanf("%f", &pib);
    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &numeroPontosTuristicos);

    //mostrando os dados a primeira carta
    printf("\n");
    printf("Dados da Primeira Carta\n");
    printf("Estado: %s\n", estado);
    printf("Codigo da Carta: %s%s\n", estado, codigoCarta);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("Populacao: %d\n", populacao);	
    printf("Area: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", numeroPontosTuristicos);
    densidadePop = populacao / area;
    pibPerCapita = pib / populacao;
    printf("Densidade Populacional: %.2f\n", densidadePop);
    printf("PIB per Capita: %.2f\n", pibPerCapita);
    printf("\n");

    //entrada de dados da segunda carta
 
    estado2[0]  = '\0';
    codigoCarta2[0] = '\0';
    nomeCidade2[0] = '\0';
    populacao2 =0;
    area2 =0;
    pib2 =0;
    numeroPontosTuristicos2 = 0;
    densidadePop2  = 0;
    pibPerCapita2 = 0;

    printf("Digite os dados da segunda Carta: \n");
    printf("Digite o estado: \n");
    scanf("%s", estado2);
    printf("Digite o codigo da carta: \n");
    scanf("%s", codigoCarta2);
    printf("Digite o nome da cidade: \n");
    scanf("%s", nomeCidade2);
    printf("Digite a populacao: \n");
    scanf("%d", &populacao2);
    printf("Digite a area: \n");
    scanf("%f", &area2);
    printf("Digite o pib: \n");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &numeroPontosTuristicos2);
    printf("Digite a densidade populacional: \n");


    //mostrando os dados da segunda carta
    printf("\n");

    printf("Dados da Segunda Carta\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo da Carta: %s%s\n", estado2, codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);	
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", numeroPontosTuristicos2);
    densidadePop = populacao / area2;
    pibPerCapita = pib / populacao2;
    printf("Densidade Populacional: %.2f\n", densidadePop2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);
    printf("\n");
    
    printf("\n");

    //comparando as cartas
    printf("O atributo escolhido foi População \n");
    if (populacao > populacao2) {
        printf("A carta vencedora foi a Primeira Carta\n");
        printf("Carta 1 -  %s (%s) : %d\n", nomeCidade, estado, populacao);
    } else if (populacao < populacao2) {
        printf("A carta vencedora foi a Segunda Carta\n");
        printf("Carta 2 -  %s (%s) : %d\n", nomeCidade2, estado2, populacao2);
    } else {
        printf("Empate\n");
        printf("Carta 1 -  %s (%s) : %d\n", nomeCidade, estado, populacao);
        printf("Carta 2 -  %s (%s) : %d\n", nomeCidade2, estado2, populacao2);
    }
  
    return 0;
}