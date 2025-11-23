#include <stdio.h>

int main(){

//Declaração das varíaveis que vão armazenar as informações na carta 01//

    char estado1 [50]="Paraiba";
    char codigo1 [20]="A01";
    char cidade1 [50]= "João Pessoa";
    int populacao1= 840000;
    float area1= 211.5;
    float pib1= 4800808170;
    int pontos_turisticos1= 38;

 //Declaração das varíaveis que vão armazenar as informações na carta 02//

    char estado2 [50]="Alagoas";
    char codigo2 [20]="B02";
    char cidade2 [50]= "Maceio";
    int populacao2= 994952;
    float area2= 509.6;
    float pib2= 2705000000;
    int pontos_turisticos2= 40;

// Exibir as informações da carta 01//

    printf("Nome do Estado: %s\n",estado1); 
    printf("Codigo da carta:A01 %c\n",codigo1);
    printf("Nome da cidade: %s\n",cidade1);
    printf("Números de habitantes:%d\n",populacao1);
    printf("A área:%f\n",area1);
    printf("PIB:%f\n",pib1);
    printf("Quantidade de pontos turísticos:%d",pontos_turisticos1);

//========== SEPARAÇÃO ENTRE AS CARTAS (AQUI) ==========
printf("\n=========================================\n\n");

// Exibir as informações da carta 02//

    printf("Nome do Estado: %s\n",estado2); 
    printf("Codigo da carta:A01 %c\n",codigo2);
    printf("Nome da cidade: %s\n",cidade2);
    printf("Números de habitantes:%d\n",populacao2);
    printf("A área:%f\n",area2);
    printf("PIB:%f\n",pib2);
    printf("Quantidade de pontos turísticos:%d",pontos_turisticos2);

return 0;

}