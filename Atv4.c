/*
4. A recursividade é um poderoso instrumento que permite a definição de estruturas infinitas 
com um conjunto finito de sentenças. Um exemplo comum da aplicação de recursividade é o 
processamento de um número fatorial (O fatorial – n! – é calculado com o produto de 1 até n, 
sendo que o fatorial de 0 é 1. Ex.: O fatorial de 3 é dado por 3x2x1). Um programador escreveu 
uma função recursiva para o cálculo do fatorial de um número. Verifique se a rotina está correta 
com o teste chinês e, caso não esteja, aplique a correção: PS: Imagem Atv4.png
*/
	
//Funcao para calculo da fatorial:
int fat(int i){
	if(i==1 || i==0)       
		return 1;                    // Porque sei que 1! e 0! são ambos = 1
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
