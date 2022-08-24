#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//exercicio-revisao

//  Uma pesquisa sobre algumas caracter�sticas f�sicas da popula��o de uma determinada regi�o coletou os seguintes dados, referentes a cada habitante:
//a) sexo (masculino, feminino);
//b) cor dos olhos (azuis, verdes, castanhos, pretos);
//c) cor dos cabelos (loiros, castanhos, pretos);
//d) idade em anos.
//  Para indicar fim dos habitantes pesquisados, o usu�rio fornecer� um habitante fict�cio com idade igual a �1. Fazer um algoritmo que determine e escreva:
//a) a maior idade dos habitantes pesquisados;
//b) a porcentagem de indiv�duos do sexo feminino cuja idade est� entre 18 e 35 anos inclusive que tenham olhos verdes e cabelos loiros.

int main(){
	 
	float porcentagemf;
	char cor_olhos[50], cor_cabelo[50], sexo[50];
	int maioridade, idade, cont, porcentagemc;
	
	porcentagemc = 0;
    maioridade = 0;
    cont = 0;
	
	do{
		printf("Informe o sexo: ");
		scanf("%s", &sexo);
		 printf("Informe a cor dos olhos: ");
		 scanf("%s", &cor_olhos);
		printf("Informe a cor dos cabelos: ");
		scanf("%s", &cor_cabelo);
		 printf("Informe sua idade: ");
		 scanf("%d", &idade);
	if ((strcmp (sexo,"feminino") == 0) && ((idade >= 18) && (idade <= 35)) && (strcmp (cor_olhos,"verdes") == 0) && (strcmp (cor_cabelo,"loiros") == 0)) {
            porcentagemc++;
	}
	
	{
		if (idade > maioridade) 
            maioridade = idade;
	}
	
    }
while (idade != -1);
    printf(" A maior idade e: %d\n", maioridade);
    porcentagemf = (100 * porcentagemc)/cont;
    printf("A porcentagem de indiv�duos do sexo feminino cuja idade est� entre 18 e 35 anos inclusive que tenham olhos verdes e cabelos loiros: %.2f\n", porcentagemf);
    
	return 0;
}
