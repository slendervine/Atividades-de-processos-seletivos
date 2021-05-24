#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include<time.h>

/*
Dois amigos resolveram fazer um programa para sortear os números de um bingo, 
mas como estão ocupados com o churrasco, pediram para você fazer um algoritmo 
que sorteie os números e os exiba na tela conforme o usuário tecle “X”. Os números 
do bingo vão de 1 a 79. Faça a verificação para garantir que o número sorteado 
não se repita. Obs.: Considere a existência de uma função 
chamada rand(limite inferior, limite superior) que retorna um número aleatório 
entre “limite inferior” e “limite superior”. *
*/


//var
int n1;

//cod
 int main(){
	 
	 //Utilizar relogio do PC para sempre gerar numeros aleatorios
	 srand(time(NULL));
	 
	 //Digite 1 para gerar numero aleatorio
	printf("Digite 1 para BINGO!");
	scanf("%d", &n1);
	
	while(n1!=1){
		printf("Digite 1 para BINGO!");
		scanf("%d", &n1);
	}	
	
	do{
		printf("%d\n\n", rand() % 79);
		printf("Digite 1 para BINGO!");
		scanf("%d", &n1);
	}while(n1==1);{
		printf("Digite 1 para BINGO!");
		scanf("%d", &n1);
	}
	
  getch();
  return 0;
 }
 
//fimcod
