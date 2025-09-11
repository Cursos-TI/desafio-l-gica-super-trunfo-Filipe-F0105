#include <stdio.h>


int main() {
//printf("Desafio de logica Super Trunfo");    

//("Variaveis para a Primeira Carta");
char codigo1[4];
unsigned long int Populacao1;
int PontosTuristicos1;
float Pib1, Area1 ,Densidadepopulacional1, Pibpercapita1, Superpoder1;


//("Variaveis Para a Segunda Carta");
char codigo2[4];
unsigned long int Populacao2;
int PontosTuristicos2;
float Pib2, Area2, Densidadepopulacional2, Pibpercapita2, Superpoder2; 

// Cadastro Da Carta 1;
printf (" Cadastro Da carta 1 \n");
printf ("Codigo Da Carta (ex: A01): ");
scanf ("%3s", codigo1);

printf ("População: ");
scanf ("%lu", &Populacao1);

printf("Área: ");
scanf ("%f", &Area1);

printf("PIb: ");
scanf ("%f", &Pib1);

printf ("Número De Pontos Turisticos: ");
scanf ("%d",&PontosTuristicos1);

// Cadastro Da Carta 1;
Densidadepopulacional1 = Populacao1 / Area1;
Pibpercapita1 = (Pib1 * 1000000000 )/ Populacao1;
Superpoder1 = (float)Populacao1 + Area1 + Pib1 + PontosTuristicos1 + Pibpercapita1 + (1.0f / Densidadepopulacional1);

//Cadastro Da Carta 2;
printf ("\n Cadastro Da Carta 2 \n");
printf ("Codigo Da Carta (ex: B02): ");
scanf ("%3s", codigo2);

printf ("População: ");
scanf ("%lu", &Populacao2);

printf("Área: ");
scanf ("%f", &Area2);

printf ("PIB: ");
scanf ("%f", &Pib2);

printf ("Número De Pontos Turisticos: ");
scanf ("%d", &PontosTuristicos2);

//Cadastro Da Carta 2;
Densidadepopulacional2 = Populacao2 / Area2;
Pibpercapita2 = (Pib2 * 1000000000)/ Populacao2;
Superpoder2 = (float)Populacao2 + Area2 + Pib2 + PontosTuristicos2 + Pibpercapita2 + (1.0f / Densidadepopulacional2);

// Exibição Das Cartas;
printf("\nCarta 1 - %s\n", codigo1);
printf("População: %lu\n", Populacao1);
printf("Área: %.2f\n", Area1);
printf("PIB: %.2f bilhões\n", Pib1);
printf("Numero De Pontos Turistico: %d\n", PontosTuristicos1);
printf("Densidade Populacional: %.2f hab/km²\n", Densidadepopulacional1);
printf("PIB Per Capita: %.2f reais\n", Pibpercapita1);
printf(" Super poder: %.2f\n", Superpoder1);
  
printf("\nCarta 2 - %s\n", codigo2);
printf("População: %lu\n", Populacao2);
printf("Área: %.2f\n", Area2);
printf("PIB: %.2f bilhões\n", Pib2);
printf("Numero De Pontos Turisticos: %d\n", PontosTuristicos2);
printf("Densidade Populacional: %.2f hab/km²\n", Densidadepopulacional2);
printf("PIB Per Capita: %.2f reais\n", Pibpercapita2);
printf("Super poder: %.2f\n", Superpoder2);


//          População
if (Populacao1 > Populacao2){ 
    printf("População: Carta 1 Venceu\n");
}
else if (Populacao2 > Populacao1){
printf("População: Carta 2 Venceu\n");
}
else{
    printf("População: Empate\n");
}
//          Área
if (Area1 > Area2){
    printf("Área: Carta 1 Venceu\n");
}
else if (Area2 > Area1){
    printf ("Área: Carta 2 Venceu\n");
}
else{
    printf("Área: Empatou\n");
}

//          PIB
if (Pib1 > Pib2){
    printf("PIB: Carta 1 Venceu\n");
}
else if (Pib2 > Pib1){
    printf("PIB: Carta 2 Venceu\n");
}
else{
    printf("PIB: Empate\n");
}

//          Número de pontos turisticos

if(PontosTuristicos1 > PontosTuristicos2){
    printf("Pontos Turisticos: Carta 1 Venceu\n");
}
else if (PontosTuristicos2 > PontosTuristicos1){
    printf("Pontos Turisticos: Carta 2 Venceu\n");
}
else {
    printf("Pontos Turisticos: Empate\n");
}

//          Densidade Populacional

if(Densidadepopulacional1 < Densidadepopulacional2){
    printf("Densidade Populacional: Carta 1 Venceu\n");
}
else if (Densidadepopulacional2 < Densidadepopulacional1){
    printf("Densidade Populacional: Carta 2 Venceu\n");
}
else {
    printf ("Densidade Populacional: Empate\n");
}

//          PIB per Capita 

if (Pibpercapita1 > Pibpercapita2){
    printf(" PIB per capita: Carta 1 Venceu\n");
}
else if (Pibpercapita2 > Pibpercapita1){
    printf(" PIB per capita: Carta 2 Venceu\n");
}
else {
    printf(" PIB per capita: Empate\n");
}

//          Super Poder

if(Superpoder1 > Superpoder2){
    printf("Super poder: Carta 1 Venceu\n");
}
else if (Superpoder2 > Superpoder1){
    printf("Super poder: Carta 2 Venceu\n");
}
else {
    printf("Super poder: Empate\n");
}


return 0;
}