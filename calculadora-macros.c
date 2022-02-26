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

//declaring functions
void escolheSabor(void);

//functions
void escolheSabor(void){

	switch(N){
		case 1 : printf("ok"); 
					
		default : printf("\nOpção inválida."); break;
	}
	
};



int main(void){

	setlocale(LC_ALL,"");
	char opc;

	printf("=======================================================");
	printf("\nCalculadora de macronutrientes das esfihas do Habbibs");
	printf("=======================================================");	
	printf("\n\nAperte qualquer tecla para continuar.");
	getch(); system("cls");
	
	do{
		
		printf("\n=============");
		printf("\n\tMENU");
		printf("\n=============");
		printf("\n\nQual sabor de esfiha você comeu?");
		
		
		scanf("%c", &opc);	
		
	}while(opc!="n"||opc!="N");
	
	return(0);	
};
