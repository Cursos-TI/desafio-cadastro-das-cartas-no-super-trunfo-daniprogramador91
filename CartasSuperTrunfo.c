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
    char Nome2 [30] = "Carta 2;";   
    char Nome1[20] =  "Estado B";
    char nome_2 [40]= "Codigo: B02";
    char nome_22 [80] = "Nome da cidade: Rio de Janeiro";
    int populacao = 6748000;
    float area2 = 1200.25;
    float pib = 300.50;
    int turistico = 30;
    
// cadastro de cartas
 char cadastro [30] = "Carta 2;";   
    char cadastro1 [20] =  "Estado B";
    char cadastro12 [40]= "Codigo: B02";
    char cadastro13 [80] = "Nome da cidade: Rio de Janeiro";
    int cadastro14 = 6748000;
    float cadastro15 = 1200.25;
    float cadastro16 = 300.50;
    int cadastro17 = 30;


printf("Cadastre a sua carta\n");
printf("qual o numero da sua carta: ");
scanf("%s",&cadastro);
printf("qual o estado: ");
scanf("%s",&cadastro1);
printf("qual o codigo: ");
scanf("%s",&cadastro12);
printf("qual o nome da sua cidade: ");
scanf("%s",&cadastro13);
printf("qual a população: ");
scanf("%d",&cadastro14);
printf("qual a area km²: ");
scanf("%.2f",&cadastro15);
printf("qual o Pib: ");
scanf("%.2f",&cadastro16);
printf("Quantos Pontos turisticos: ");
scanf("%d",&cadastro17);




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
    printf("Numero de Pontos Turistico: %d\n", turistico); 
    
    
    



return 0;

}