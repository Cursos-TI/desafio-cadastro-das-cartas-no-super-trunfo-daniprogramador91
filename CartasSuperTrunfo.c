#include <stdio.h>
int main (){
//estado de São Paulo

char nome_111[30] = "Carta 1:";    
char Nome [30] = "Estado: A";
    char nome_11 [20] = "Codigo: A01";
    char nome_1[80] = "Nome da Cidade: São Paulo";
    int populacao1 = 12325000;
    float area1= 1521.11;
    float pib1 = 699.28;
    int turistico1 = 50;

    
//estado de Rio de Janeiro
    char Nome2 [30] = "Carta 2";   
    char Nome1[20] =  "Estado B";
    char nome_2 [40]= "Codigo: B02";
    char nome_22 [80] = "Nome da cidade: Rio de Janeiro";
    int populacao = 6748000;
    float area2 = 1200.25;
    float pib = 300.50;
    int turistico = 30;
    
// cadastro de cartas
 char cadastro; 
    char cadastro1[30];
    char cadastro12[30];
    char cadastro13[30];
    int cadastro14;
    float cadastro15;
    float cadastro16;
    int cadastro17;

//exemplo
printf("cadastre suas cartas de acordo com os exemplos!!\n");

    //estado de São Paulo
    printf("\n%s\n%s\n%s\n%s\n",nome_111, Nome, nome_11, nome_1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("Pib: %.3f Bilhões de reais\n", pib1);
    printf("Numero de Pontos Turistico: %d\n", turistico1); 
    //Rio de Janeiro
    printf("\n%s\n%s\n%s\n%s\n",Nome2, Nome1, nome_2, nome_22);
    printf("População: %d\n", populacao);
    printf("Área: %.2f Km²\n", area2);
    printf("Pib: %.3f Bilhões de reais\n", pib);
    printf("Numero de Pontos Turistico: %d\n\n", turistico);




printf("Cadastre a sua carta\n");

printf("qual o numero da sua carta: ");
scanf("%s",&cadastro);

printf("qual o estado: ");
scanf("%s",&cadastro1);

printf("qual o codigo: ");
scanf("%s",&cadastro12);

printf("qual o nome da sua cidade: ");
scanf("%s[^\n]",&cadastro13);

printf("qual a população: ");
scanf("%d",&cadastro14);

printf("qual a area km²: ");
scanf("%d",&cadastro15);

printf("qual o Pib: ");
scanf("%d",&cadastro16);

printf("Quantos Pontos turisticos: ");
scanf("%d",&cadastro17);

printf("\nCadastre a sua carta\n");
printf("qual o numero da sua carta: ");
scanf("%s",&cadastro);

printf("qual o estado: ");
scanf("%s",&cadastro1);

printf("qual o codigo: ");
scanf("%s",&cadastro12);

printf("qual o nome da sua cidade: ");
scanf("%s[^\n]",&cadastro13);

printf("qual a população: ");
scanf("%d",&cadastro14);

printf("qual a area km²:");
scanf("%f",&cadastro15);

printf("qual o Pib: bilhoes");
scanf("%f",&cadastro16);

printf("Quantos Pontos turisticos:");
scanf("%d",&cadastro17);

    

return 0;

}