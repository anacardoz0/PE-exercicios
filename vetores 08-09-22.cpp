#include<stdio.h>

//vetores 

int main(){
	
int i;
float nota1[3], nota2[3], media[3];
 
 //nota1
for (i=0;i<3; i++){
	printf("Digite a nota1: ");
	scanf ("%f", &nota1[i]);
}

//nota2	
for (i=0;i<3; i++){
	printf("Digite a nota2: ");
	scanf ("%f", &nota2[i]);
}

//média
for(i=0;i<3;i++){

media[i] = (nota1[i] + nota2[i]) / 2;
printf("Media das notas: %f\n", media[i]);
}
	return 0;
}
