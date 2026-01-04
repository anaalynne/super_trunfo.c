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



//Comparação das atribuições da carta 01 com carta 02//
  
    // População (Número de habitantes)- Maior valor vence
    int Populacao1_vence= populacao1 > populacao2;
    int Populacao2_vence= populacao2 > populacao1;

    // Área (Número de habitantes em km²)-Maior valor vence
    float Area1_vence= area1 > area2;
    float Area2_vence= area2 > area1; 

    // PIB (Produto interno Bruto)- Maior valor vence
    float Pib1_vence= pib1 > pib2;
    float Pib2_vence= pib2 > pib1;

    // Números de pontos turísticos- Maior valor vence
    int Pontosturisticos1_vence= pontos_turisticos1 > pontos_turisticos2;
    int Pontosturisticos2_vence= pontos_turisticos2 > pontos_turisticos1;

    //Densidade Populacional- Menor valor vence
    float Densidadepopulacional1_vence= densidadePopulacional1 < densidadePopulacional2;
    float Densidadepopulacional2_vence= densidadePopulacional2 < densidadePopulacional1;

//Exibição das cartas vencedoras//
    printf ("A população da carta 2 vence %d\n", populacao2 > populacao1 );
    printf ("A área da carta 2 vence %d\n",area2 > area1 );
    printf ("O Pib da carta 2 vence %d\n", pib2 > pib1);
    printf ("O número de ponto turísticos da carta 2 vence, %d\n", pontos_turisticos2 > pontos_turisticos1);
    printf ("A densidade da carta 1 venceu,%d\n", densidadePopulacional1 < densidadePopulacional2);


return 0;

}
