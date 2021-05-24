/*
Fazer uma função que dado o número de um mês, retorne a sua descrição 
(Janeiro, Fevereiro, ...). Obs.: Algortimos menores receberão 
melhor nota na questão. 
*/
	
#include <stdio.h>
#include <stdlib.h>

//var
int m;

//cod
int main(){
	 
	 //Coleta de dados - mes
	 printf("Digite o numero de um mes:  \n\n");
	 scanf("%d", &m);
	 
	//Apresentacao de resultado
	if(m>=1 && m<=12)
		switch(m){
			case 1: printf("Janeiro");
					break;
			case 2: printf("Fevereiro");
					break;
			case 3: printf("Marco");
					break;
			case 4: printf("Abril");
					break;
			case 5: printf("Maio");
					break;
			case 6: printf("Junho");
					break;
			case 7: printf("Julho");
					break;
			case 8: printf("Agosto");
					break;
			case 9: printf("Setembro");
					break;
			case 10: printf("Outubro");
					break;
			case 11: printf("Novembro");
					break;
			case 12: printf("Dezembro");
					break;
		}
	else printf("Por favor, digite um numero de 1 a 12");
  getch();
  return 0;
 }
//fimcod
