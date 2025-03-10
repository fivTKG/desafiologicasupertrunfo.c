#include <stdio.h>
#include <ctype.h>


//valores pré formados assim como no exercício pedia
//variaveis 1 card
int main() {
char estado = 'SP';
char codigo = '01';
char nomecity = 'São Paulo';
int  pontotur = 50, popu = 12325000;
float area = 1521.11, pib = 699.28;


//variaveis 2 card
char estado2 = 'RJ';
char codigo2 = '02';
char nomecity2 = 'Rio de Janeiro';
int  pontotur2 = 30, popu2 = 6748000;
float area2 = 1200.25, pib2 = 300.50;

int resulpopu, resulpontotur;
float resularea, resulpib, resuldensi, resulppc;

//explicacao para o usuario
printf("*------------------------------------------------------*\n");
printf("**Bem vindo ao jogo super trunfo dos estados!!**\n");
printf("Temos apenas duas cartas competindo e são:\n");
printf("São Paulo e Rio de Janeiro!\n");
printf("Segue o resultado das comparações de valores delas:\n");

printf("*------------------------------------------------------*\n");

//calculo densidade e pib carta 1
float densi = popu / area;
float ppc = (pib*1000000000) / popu;       //ppc - pib per capita

//calculo densidade e pib carta 2
float densi2 = popu2 / area2;
float ppc2 =  (pib2*1000000000 / popu2);        //ppc - pib per capita

//if e else sendo usados
//ao inves de mostrar apenas 1 resultado, tomei a liberdade de colocar todos
resulpontotur = pontotur > pontotur2 ? 1 : 0;
resulpopu = popu > popu2 ? 1 : 0;
resularea = area > area2 ? 1 : 0;
resulpib = pib > pib2 ? 1 : 0;
resuldensi = densi < densi2 ? 1 : 0;
resulppc = ppc > ppc2 ? 1 : 0;

if(resulpontotur == 1)
{
    printf("Em pontos turísticos a carta 01 ---------------------- São Paulo venceu com: %d\n", pontotur);
} else {
    printf("Em pontos turísticos a carta 02 ---------------------- Rio de Janeiro venceu com: %d\n", pontotur2);
}

if(resulpopu == 1)
{
    printf("Em população a carta 01 ------------------------------ São Paulo venceu com: %d!\n",popu);
} else {
    printf("Em população a carta 02 ------------------------------ Rio de Janeiro venceu com: %d\n", popu2);
}

if(resularea == 1)
{
    printf("Em área a carta 01 ----------------------------------- São Paulo venceu com: %.2f km²!\n", area);
} else {
    printf("Em área a carta 02 ----------------------------------- Rio de Janeiro venceu com: %.2f km²!\n", area2);
}

if(resulpib == 1)
{
    printf("Em PIB a carta 01 ------------------------------------ São Paulo venceu com: %.2f bilhões de reais!\n", pib);
} else {
    printf("Em PIB a carta 02 ------------------------------------ Rio de Janeiro venceu com: %.2f bilhões de reais!\n", pib2);
}

if(resuldensi == 1)
{
    printf("Em densidade populacional a carta 01 ----------------- São Paulo venceu com: %.2f hab/km²\n", densi);
} else {
    printf("Em densidade populacional a carta 02 ----------------- Rio de Janeiro venceu com: %.2f hab/km²\n", densi2);
}

if(resulppc == 1)
{
    printf("Em PIB per Capita a carta 01 ------------------------- São Paulo venceu com: %.2f\n", ppc);
} else {
    printf("Em PIB per Capita a carta 02 ------------------------- Rio de Janeiro venceu com: %.2f\n", ppc2);
}

return 0;
}