#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include<time.h>

/*
Dois amigos resolveram fazer um programa para sortear os n�meros de um bingo, 
mas como est�o ocupados com o churrasco, pediram para voc� fazer um algoritmo 
que sorteie os n�meros e os exiba na tela conforme o usu�rio tecle �X�. Os n�meros 
do bingo v�o de 1 a 79. Fa�a a verifica��o para garantir que o n�mero sorteado 
n�o se repita. Obs.: Considere a exist�ncia de uma fun��o 
chamada rand(limite inferior, limite superior) que retorna um n�mero aleat�rio 
entre �limite inferior� e �limite superior�. *
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
