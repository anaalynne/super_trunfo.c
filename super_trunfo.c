#include <stdio.h>

int main(){

//Declaração das varíaveis que vão armazenar as informações na carta 01//

    char estado1 [50]="Paraiba";
    char codigo1 [20]="A01";
    char cidade1 [50]= "João Pessoa";
    int populacao1= 840000;
    float area1= 211.5; //km²
    float pib1= 24700000000 ;
    int pontos_turisticos1= 38;

// Variáveis para os cálculos para a carta 01 //
    float densidadePopulacional1;
    float pibPerCapita1;
    float inverso_densidade1;
    float Super_Poder1;

//Cálculos de atributos especiais para a carta 01//
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;
    inverso_densidade1 = 1/  densidadePopulacional1;

//Cálculos para o Super Poder para a carta 01//
    Super_Poder1= populacao1 + area1 + pib1, pontos_turisticos1 + pibPerCapita1 +inverso_densidade1; 


 //Declaração das varíaveis que vão armazenar as informações na carta 02//

    char estado2 [50]="Alagoas";
    char codigo2 [20]="B02";
    char cidade2 [50]= "Maceio";
    int populacao2= 994952;
    float area2= 509.6; //km²
    float pib2= 2705000000;
    int pontos_turisticos2= 40;

// Variáveis para os cálculos para a carta 02 //
    float densidadePopulacional2;
    float pibPerCapita2;
    float inverso_densidade2;
    float Super_Poder2;

//Cálculos de atributos especiais para a carta 02//
    densidadePopulacional2= populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;
    inverso_densidade1 = 1/ densidadePopulacional2;

//Cálculos para o Super Poder para a carta 02//
    Super_Poder2= populacao2 + area2 + pib2, pontos_turisticos2+ pibPerCapita2 +inverso_densidade2; 



// Exibir as informações da carta 01//

    printf("Nome do Estado: %s\n",estado1); 
    printf("Codigo da carta:A01 %c\n",codigo1);
    printf("Nome da cidade: %s\n",cidade1);
    printf("Números de habitantes:%d\n",populacao1);
    printf("A área:%f km²\n",area1);
    printf("PIB:%f\n",pib1);
    printf("Quantidade de pontos turísticos:%d",pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);
    printf ("O Super Poder 1 é: %2f\n",populacao1 + area1 + pib1, pontos_turisticos1 + pibPerCapita1 +inverso_densidade1);


//========== SEPARAÇÃO ENTRE AS CARTAS (AQUI) ==========
printf("\n=========================================\n\n");

// Exibir as informações da carta 02//

    printf("Nome do Estado: %s\n",estado2); 
    printf("Codigo da carta:A01 %c\n",codigo2);
    printf("Nome da cidade: %s\n",cidade2);
    printf("Números de habitantes:%d\n",populacao2);
    printf("A área:%f km²\n",area2);
    printf("PIB:%f\n",pib2);
    printf("Quantidade de pontos turísticos:%d",pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);
    printf ("O Super Poder 2 é: %2f\n",populacao2+ area2 + pib2, pontos_turisticos2 + pibPerCapita2 +inverso_densidade2);

// ================= MENU =================
    int opcao;
    int atributo1, atributo2;
    float valor1_carta1, valor1_carta2;
    float valor2_carta1, valor2_carta2;
    float soma1, soma2;

    printf("\n========== MENU ==========\n");
    printf("1 - Mostrar Carta 1\n");
    printf("2 - Mostrar Carta 2\n");
    printf("3 - Comparar Cartas\n");
    printf("0 - Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch(opcao){

        case 1:
            printf("\n--- CARTA 1 ---\n");
            printf("Estado: %s\n", estado1);
            printf("Codigo: %s\n", codigo1);
            printf("Cidade: %s\n", cidade1);
            printf("Populacao: %d\n", populacao1);
            printf("Area: %.2f km²\n", area1);
            printf("PIB: %.2f\n", pib1);
            printf("Pontos Turisticos: %d\n", pontos_turisticos1);
            printf("Densidade Populacional: %.2f\n", densidadePopulacional1);
            printf("PIB per Capita: %.2f\n", pibPerCapita1);
            printf("Super Poder: %.2f\n", Super_Poder1);
            break;

        case 2:
            printf("\n--- CARTA 2 ---\n");
            printf("Estado: %s\n", estado2);
            printf("Codigo: %s\n", codigo2);
            printf("Cidade: %s\n", cidade2);
            printf("Populacao: %d\n", populacao2);
            printf("Area: %.2f km²\n", area2);
            printf("PIB: %.2f\n", pib2);
            printf("Pontos Turisticos: %d\n", pontos_turisticos2);
            printf("Densidade Populacional: %.2f\n", densidadePopulacional2);
            printf("PIB per Capita: %.2f\n", pibPerCapita2);
            printf("Super Poder: %.2f\n", Super_Poder2);
            break;

        case 3:
            printf("\n--- COMPARACAO ---\n");

            if(populacao1 > populacao2)
                printf("Carta 1 vence em Populacao\n");
            else
                printf("Carta 2 vence em Populacao\n");

            if(area1 > area2)
                printf("Carta 1 vence em Area\n");
            else
                printf("Carta 2 vence em Area\n");

            if(pib1 > pib2)
                printf("Carta 1 vence em PIB\n");
            else
                printf("Carta 2 vence em PIB\n");

            if(pontos_turisticos1 > pontos_turisticos2)
                printf("Carta 1 vence em Pontos Turisticos\n");
            else
                printf("Carta 2 vence em Pontos Turisticos\n");

            if(densidadePopulacional1 < densidadePopulacional2)
                printf("Carta 1 vence em Densidade Populacional\n");
            else
                printf("Carta 2 vence em Densidade Populacional\n");

            break;
        case 4:
            // Escolha do primeiro atributo
            printf("\nEscolha o primeiro atributo para comparar:\n");
            printf("1 - Populacao\n");
            printf("2 - Area\n");
            printf("3 - PIB\n");
            printf("4 - Pontos Turisticos\n");
            printf("5 - Densidade Populacional\n");
            printf("6 - PIB per Capita\n");
            printf("Opcao: ");
            scanf("%d", &atributo1);

    

            // Soma dos valores
            soma1 = valor1_carta1 + valor2_carta1;
            soma2 = valor1_carta2 + valor2_carta2;

            printf("\n--- RESULTADO FINAL ---\n");
            if (soma1 > soma2) printf("Carta 1 vence a rodada!\n");
            else if (soma2 > soma1) printf("Carta 2 vence a rodada!\n");
            else printf("Empate!\n");

        case 0:
            printf("Jogo finalizado.\n");
            break;

        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}




