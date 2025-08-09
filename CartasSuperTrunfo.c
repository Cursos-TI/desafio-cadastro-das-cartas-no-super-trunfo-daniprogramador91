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
    float densidade_sp;// densidade populacional
    float pib_per_capita_sp;//pib percapita

    
//estado de Rio de Janeiro
    char Nome2 [30] = "Carta 2";   
    char Nome1[20] =  "Estado B";
    char nome_2 [40]= "Codigo: B02";
    char nome_22 [80] = "Nome da cidade: Rio de Janeiro";
    int populacao = 6748000;
    float area2 = 120025;
    float pib = 30050;
    int turistico = 30;
    float densidade_rj;// densidade populacional
    float pib_per_capita_rj;//pib percapita
    
// cadastro de cartas
    char cadastro [30]; //carta
    char cadastro1 [30]; //estado
    char cadastro12 [30];//codigo
    char cadastro13 [30];//nome daa cidade
    int cadastro14;//população
    float cadastro15;//area
    float cadastro16;//pib
    int cadastro17;//ponto turistico
    float densidade1;// densidade populacional
    float pib_per_capita1;//pib percapita
 //calculo de pib percapita
 
 //calculo de densidade populacional
  
     // cadastro da sua segunda carta
    char cadastroseg [33];//carta
    char cadastro1seg [30];//estado
    char cadastro_12seg [30];//codigo
    char cadastro13seg [30];//nome da cidade
    int cadastro14seg;//população
    float cadastro15seg;//area²
    float cadastro16seg;//pib
    int cadastro17seg;//pontos turistico
    float densidade2;// densidade populacional
    float pib_per_capita2;//pib percapita

//variavels do nivel avntureiro

float pibexemplo1, pibexemplo2, pibcadastro1, pibcadastro2;
float populacao_ex1, populacao_ex2, populacao_cad1, populacao_cad2;
float areaexemplo1, areaexemplo2, areacad_3, areacad_4;
//pib percapita
pibexemplo1 = (float)pib1 / populacao1;
pibexemplo2 = (float) pib / populacao;
pibcadastro2 = (float) cadastro16 / cadastro14;
pibcadastro1 = (float) cadastro16seg / cadastro14seg;
//densidade populacional
areaexemplo1 = (float) populacao1 / area1;
areaexemplo2 = (float) populacao / area2;
areacad_3 = (float) cadastro14 / cadastro15;
areacad_4 = (float) cadastro14seg / cadastro15seg;

printf("cadastre suas cartas de acordo com os exemplos!!\n");

    //estado de São Paulo
    printf("\n%s\n%s\n%s\n%s\n",nome_111, Nome, nome_11, nome_1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("Pib: %.2f Bilhões de reais\n", pib1);
    printf("Numero de Pontos Turistico: %d\n", turistico1); 
    printf("Densidade Populacional: %.2f hab/km²\n", areaexemplo1 );
    printf("PIB per Capita: %2f reais\n", pibexemplo1);
    //Rio de Janeiro
    printf("\n%s\n%s\n%s\n%s\n",Nome2, Nome1, nome_2, nome_22);
    printf("População: %d\n", populacao);
    printf("Área: %.2f Km²\n", area2);
    printf("Pib: %.2f Bilhões de reais\n", pib);
    printf("Numero de Pontos Turistico: %d\n", turistico);
    printf("Densidade Populacional: %.2f hab/km²\n", areaexemplo2);
    printf("PIB per Capita: %.2f reais\n", pibexemplo2);
// cadastro da primeira carta
printf("Cadastre a sua primeira carta\n");
printf("\n");


printf("qual o numero da sua carta: ");
scanf("%s" ,cadastro);

printf("qual o estado: ");
scanf("%s", cadastro1);

printf("qual o codigo: ");
scanf("%s", cadastro12);

printf("qual o nome da sua cidade: ");
scanf("%s[^\n]", cadastro13);

printf("qual a população: ");
scanf("%d", &cadastro14);

printf("qual a area km²: ");
scanf("%f",&cadastro15);

printf("qual o Pib: ");
scanf("%f",&cadastro16);

printf("Quantos Pontos turisticos: ");
scanf("%d",&cadastro17);
printf("\n");
printf("\n");

// cadastro da segunda parte


printf("Cadastre a sua segunda carta");
printf("\n");
printf("qual o numero da sua carta: ");
scanf("%s" ,cadastroseg);

printf("qual o estado: ");
scanf("%s" ,cadastro1seg);

printf("qual o codigo: ");
scanf("%s" ,cadastro_12seg);

printf("qual o nome da sua cidade: ");
scanf("%s" ,cadastro13seg);

printf("qual a população: ");
scanf("%d" ,&cadastro14seg);

printf("qual a area km²:");
scanf("%f" ,&cadastro15seg);

printf("qual o Pib: ");
scanf("%f",&cadastro16seg);

printf("Quantos Pontos turisticos:");
scanf("%d",&cadastro17seg);
printf("\n");
printf("\n");

/// resultado a serem impressos
// primeira carta cadastraada
printf("primeira carta cadastrada\n");
printf("\n");
///scanf("%c ", resultado_primeira_carta);
printf("Numero da carta: %s\n", cadastro);
printf("Seu estado: %s\n", cadastro1);
printf("Seu codigo: %s\n", cadastro12);
printf("Sua cidade: %s\n", cadastro13);
printf("População: %d\n", cadastro14);
printf("Area %.2f km²\n", cadastro15);
printf("Pib %.2f  bilhões\n", cadastro16);
printf("Pontos turisticos: %d\n", cadastro17);
printf("Densidade Populacional: %.2f hab/km²\n", areacad_3);
printf("PIB per Capita: %.2f reais\n",pibcadastro1);
printf("\n");

// segunda carta cadastrada
printf("Segunda carta cadastrada\n");
printf("\n");
//scanf("%s", resultado_segunda_carta);
printf("Numero da carta: %s\n", cadastroseg);
printf("Seu estado: %s\n", cadastro1seg);
printf("Seu codigo: %s\n", cadastro_12seg);
printf("Sua cidade: %s\n", cadastro13seg);
printf("População: %d\n", cadastro14seg);
printf("Area %.2f km²\n", cadastro15seg);
printf("Pib %.2f  bilhões\n", cadastro16seg);
printf("Pontos turisticos: %d\n", cadastro17seg);
printf("Densidade Populacional: %.2f hab/km²\n", areacad_4);
printf("PIB per Capita: %.2f reais\n",pibcadastro2);


    
    



return 0;

}