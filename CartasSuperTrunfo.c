#include<stdio.h>

// declaro as variaveis 
int main(){

    char Estado[3] = "RJ";                //RJ ou SP
    char CodigoDaCarta[3] = "A01";               //cartas A01 OU B01
    char NomeDaCidade[30] = "bangu";              //Bangu ou Santos
    int População;                     // RJ 209.302 / SP 418.608
    float Área;                       // RJ 45.71 / SP 281.033
    float PIB;                        // RJ 331.28 / sp 24.09
    int QntDePontosTurístico;           // RJ 20 / sp 15



// usuario escolhe as cartas
    printf("Digite a UF do Estado: \n");
    scanf("%s", &Estado);
    printf("Digite a Quantidade da População: \n");
    scanf("%d", &População);
    printf("Digite Codigo da Carta: \n");
    scanf("%s", &CodigoDaCarta);
    printf("Digite o nome da Cidade: \n");
    scanf("%s", &NomeDaCidade);
    printf("Digite a Área (em km²): \n");
    scanf("%f", &Área);
    printf("Digite o PIB: \n");
    scanf("%f", &PIB);
    printf("Numero de Pontos Turístico: \n");
    scanf("%d", &QntDePontosTurístico);


// imprimi a carta do usuario
    printf ("UF do Estado: %s\n" , Estado );
    printf("Populução da Cidade: %d\n",População );
    printf("Carta Escolhida: %s\n" , CodigoDaCarta );
    printf("Cidade Escolhida: %s\n" , NomeDaCidade);
    printf("Área da Cidade: %f\n", Área);
    printf("PIB da cidade: %f\n",PIB );
    printf("Pontos turísticos da Cidade: %d\n", QntDePontosTurístico);
    


return 0;

}
