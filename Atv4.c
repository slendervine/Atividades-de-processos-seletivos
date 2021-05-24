/*
4. A recursividade � um poderoso instrumento que permite a defini��o de estruturas infinitas 
com um conjunto finito de senten�as. Um exemplo comum da aplica��o de recursividade � o 
processamento de um n�mero fatorial (O fatorial � n! � � calculado com o produto de 1 at� n, 
sendo que o fatorial de 0 � 1. Ex.: O fatorial de 3 � dado por 3x2x1). Um programador escreveu 
uma fun��o recursiva para o c�lculo do fatorial de um n�mero. Verifique se a rotina est� correta 
com o teste chin�s e, caso n�o esteja, aplique a corre��o: PS: Imagem Atv4.png
*/
	
//Funcao para calculo da fatorial:
int fat(int i){
	if(i==1 || i==0)       
		return 1;                    // Porque sei que 1! e 0! s�o ambos = 1
	else 
		return i * fat(i-1);         // Executando a funcao 'fatorial' 
}

void main(){                         // Executar funcao principal
//var:
int i;	
	
//coletando de dados:
printf("Me de um numero, que lhe trarei o seu fatorial:  ");
scanf("%d", &i);

//Printando resultado da fatorial:
printf("Entao seu fatorial e: %d\n", fat(i));

getch();
return 0; 
}                                    //Fim main
