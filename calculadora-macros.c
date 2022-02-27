//calculadora de macros
//valores de macronutrientes coletados de: https://www.habibs.com.br/_pdf/tabela_Nutricional_Habibs.pdf

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

#define N 8

//structs
typedef struct {
	char sabor[10+1];
	int totalCarbs, totalProts, totalFats, totalSodium;
}esfiha;

esfiha data [N] = {
	{"frango",19,6.4,5.6,313},
	{"italianinha",8.5,7.5,7.2,195},
	{"carne",10,5.4,7.9,346},
	{"cordeiro",8.1,4.8,5.0,177},
	{"espinafre e phi",19,4,7.1,267},
	{"pepperoni com muss e phi",8.4,8.8,12,357},
	{"picanha",8.0,4.9,4.1,314},
	{"queijo",18,9.7,7.9,162},
	{"quatro queijos e phi",8.3,8.5,12,277},
};

//global variables
int fra, ita, car, cor, espi, pepp, pic, quei, quat;
char opc;

//declaring functions
char escolheSabor(void);

//functions
char escolheSabor(void){
	
	system("cls");
	printf("\nSabor:\n1) Frango\n2) Italianinha\n3) Carne\n4) Cordeiro\n5) Espinafre com Philadelphia\n6) Pepperoni com mussarela e Philadelphia\n7) Picanha\n8) Mussarela\n9) Quatro queijos com Philadelphia");
	printf("\n\nQual sabor você comeu?");
	
	switch(N){
		case 1 : printf("Insira aqui quantas esfihas você comeu >> "); fflush(stdin); scanf("%i", &fra);	
				 printf("\nVocê comeu mais algum sabor? Escolha (y/n) >> "); scanf("%c", &opc);
				 if (opc=="y"){
				 	char escolheSabor(void);
				 } else break;
					
		default : printf("\nOpção inválida."); break;
	} return(opc);
};



int main(void){

	setlocale(LC_ALL,"");
	
	system("mode 80,20");
	printf("=======================================================");
	printf("\nCalculadora de macronutrientes das esfihas do Habbibs");
	printf("\n=======================================================");	
	printf("\n\nAperte qualquer tecla para continuar.");
	getch(); system("cls");
	
	//do{
		
		printf("\n=============");
		printf("\n  MENU");
		printf("\n=============");
		printf("\n\nQual sabor de esfiha você comeu?");
		char escolheSabor(void);
		
		
		scanf("%c", &opc);	

	//}while(opc!="n"||opc!="N");
	
	return(0);	
};
