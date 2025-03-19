//Desafio Logica Nivel AVentureiro  Aluno matricula 202502813139
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

    // Exibindo e capturando o menu com as opções de atributos para comparação
    char pais[50];
    char pais2[50];

    printf("informe o Pais da primeira carta: \n");
    scanf("%s", pais);
    printf("informe o Pais da segunda carta: \n");
    scanf("%s", pais2);

    printf("Escolha qual atributo voce quer usar para comparar as cartas: \n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Numero de Pontos Turisticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    int opcao;
    scanf("%d", &opcao);

    // Comparando as cartas pela opção escolhida

    printf("o nome do pais da primeira carta é : %s\n", &pais);
    printf("o nome do pais da segunda carta é : %s\n", &pais2);

    switch (opcao)
    {
    case     1:
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
        break;

    case 2:
        printf("O atributo escolhido foi Area \n");
        if (area > area2) {
            printf("A carta vencedora foi a Primeira Carta\n");
            printf("Carta 1 -  %s (%s) : %.2f\n", nomeCidade, estado, area);
        } else if (area < area2) {
            printf("A carta vencedora foi a Segunda Carta\n");
            printf("Carta 2 -  %s (%s) : %.2f\n", nomeCidade2, estado2, area2);
        } else {
            printf("Empate\n");
            printf("Carta 1 -  %s (%s) : %.2f\n", nomeCidade, estado, area);
            printf("Carta 2 -  %s (%s) : %.2f\n", nomeCidade2, estado2, area2);
        }
        break;
    case 3:
        printf("O atributo escolhido foi PIB \n");
        if (pib > pib2) {
            printf("A carta vencedora foi a Primeira Carta\n");
            printf("Carta 1 -  %s (%s) : %f\n", nomeCidade, estado, pib);
        } else if (pib < pib2) {
            printf("A carta vencedora foi a Segunda Carta\n");
            printf("Carta 2 -  %s (%s) : %f\n", nomeCidade2, estado2, pib2);
        } else {
            printf("Empate\n");
            printf("Carta 1 -  %s (%s) : %f\n", nomeCidade, estado, pib);
            printf("Carta 2 -  %s (%s) : %f\n", nomeCidade2, estado2, pib2);
        }
        break;
    case 4:
        printf("O atributo escolhido foi Numero de Pontos Turisticos \n");
        if (numeroPontosTuristicos > numeroPontosTuristicos2) {
            printf("A carta vencedora foi a Primeira Carta\n");
            printf("Carta 1 -  %s (%s) : %d\n", nomeCidade, estado, numeroPontosTuristicos);
        } else if (numeroPontosTuristicos < numeroPontosTuristicos2) {
            printf("A carta vencedora foi a Segunda Carta\n");
            printf("Carta 2 -  %s (%s) : %d\n", nomeCidade2, estado2, numeroPontosTuristicos2);
        } else {
            printf("Empate\n");
            printf("Carta 1 -  %s (%s) : %d\n", nomeCidade, estado, numeroPontosTuristicos);
            printf("Carta 2 -  %s (%s) : %d\n", nomeCidade2, estado2, numeroPontosTuristicos2);
        }
        break;
    case 5:
        printf ("O atributo escolhido foi Densidade Populacional \n");
        if (densidadePop < densidadePop2) {
            printf("A carta vencedora foi a Primeira Carta\n");
            printf("Carta 1 -  %s (%s) : %.2f\n", nomeCidade, estado, densidadePop);
        } else if (densidadePop > densidadePop2) {
            printf("A carta vencedora foi a Segunda Carta\n");
            printf("Carta 2 -  %s (%s) : %.2f\n", nomeCidade2, estado2, densidadePop2);
        } else {
            printf("Empate\n");
            printf("Carta 1 -  %s (%s) : %.2f\n", nomeCidade, estado, densidadePop);
            printf("Carta 2 -  %s (%s) : %.2f\n", nomeCidade2, estado2, densidadePop2);
        }
        break;
    case 6:
        printf("O atributo escolhido foi PIB per Capita \n");
        if (pibPerCapita > pibPerCapita2) {
            printf("A carta vencedora foi a Primeira Carta\n");
            printf("Carta 1 -  %s (%s) : %.2f\n", nomeCidade, estado, pibPerCapita);
        } else if (pibPerCapita < pibPerCapita2) {
            printf("A carta vencedora foi a Segunda Carta\n");
            printf("Carta 2 -  %s (%s) : %.2f\n", nomeCidade2, estado2, pibPerCapita2);
        } else {
            printf("Empate\n");
            printf("Carta 1 -  %s (%s) : %.2f\n", nomeCidade, estado, pibPerCapita);
            printf("Carta 2 -  %s (%s) : %.2f\n", nomeCidade2, estado2, pibPerCapita2);
        }
        break;
    default:
        printf("Opcao Invalida\n");
        break;
    }



    return 0;
}