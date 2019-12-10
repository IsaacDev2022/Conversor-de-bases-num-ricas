#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 
	22 de outubro de 2019
	
	Departamento de tecnologia da informa��o do Uniproje��o (Taguatinga - DF)
	Mat�ria: L�gica computacional - Mestre Welton
	
	Autor: Isaac Silva Martins
	Curso: An�lise e desenvolvimento de sistemas (2� semestre)

	Algoritmo de convers�o de bases num�ricas
*/

// Fun��es: 
	void Header ();
	void cls ();
	int baseOption ();
	int baseConvChoice ();


// Vari�veis: 
	int i, n, firstOption, val, baseInput, baseConv, output;
	char conv [40];

// Fun��o de cabe�alho
void Header (){
		printf ("|*********************************************|\n");
		printf ("|                            	              |\n");
		printf ("|\tAlgoritmo de conver�o de bases        |\n");
		printf ("|                                             |\n");
		printf ("|*********************************************|\n");
		
		getch ();
	
		system ("cls");
}

// Fun��o para a entrada de valores 
int baseOption (){

		printf ("|*********************************************************************************|\n");
		printf ("|                                      	                                          |\n");
		printf ("|\tEscolha uma das op��es de base abaixo para inserir o n�mero desejado:     |\n");
		printf ("|\t[01] - Decimal 			                                          |\n");
		printf ("|\t[02] - Hexadecimal	                                                  |\n");
		printf ("|\t[03] - Octal                                                              |\n");
		printf ("|                                      	                                          |\n");
		printf ("|*********************************************************************************|\n");
		printf ("Op��o: ");
			scanf ("%d", &baseInput);
			
		switch (baseInput){
			case 01:{
			
				printf ("Decimal: ");
					scanf ("%d", &val);
			break;
			}
		
			case 02:{
				
				printf ("Hexadecimal: ");
					scanf ("%x", &val);
				break;
			}
		
			case 03:{
				
				printf ("Octal: ");
					scanf ("%o", &val);
				break;
			}
	}
	
	return val;
	
}

// Fun��o para escolher as op��es de convers�o
int baseConvChoice (){

		printf ("\n");
		printf ("|**********************************************************************|\n");
		printf ("|                                      	                               |\n");
		printf ("|\tEscolha uma das op��es de base abaixo para a convers�o:	       |\n");
		printf ("|\t[01] - Bin�rio 			                               |\n");
		printf ("|\t[02] - Decimal 			                               |\n");
		printf ("|\t[03] - Hexadecimal	                                       |\n");
		printf ("|\t[04] - Octal                                                   |\n");
		printf ("|                                      	                               |\n");
		printf ("|**********************************************************************|\n");
		printf ("Op��o: ");
			scanf ("%d", &baseConv); // Recebe o valor referente a op��o de base em que se deseja realizar a convers�o
		
	return baseConv;
			
		
}

int main(void) {
	setlocale (LC_ALL, "Portuguese");
			
	Header ();
	
	baseOption ();
	
	baseConvChoice ();
	
		printf ("\n");
		printf ("|**********************************************************************|\n");
		printf ("|                                      	                               |\n");
		printf ("|\tEscolha uma das op��es abaixo para a sa�da:	               |\n");
		printf ("|\t[01] - Resultado individual 			               |\n");
		printf ("|\t[02] - Tabela individual			               |\n");
		printf ("|\t[03] - Tabela completa                                         |\n");
		printf ("|                                      	                               |\n");
		printf ("|**********************************************************************|\n");
		printf ("Op��o: ");
			scanf ("%d", &output); // Op��es de sa�da de resultados
			
		
		switch (output){
			
			case 01:{ // A primeira op��o mostra o resultado individualmente
			// Para realiar as convers�es, usamos caracteres de formata��o para as bases hexadecimal, decimal e octal
				if (baseConv == 1)
				{
					itoa (val, conv, 2); // A fun��o itoa realiza a convers�o do n�mero escolhido para a base bin�ria, pois n�o existe caractere de formta��o para bin�rio em C
					printf ("Seu n�mero convertido para base bin�ria: %s", conv);
				}
				
				if (baseConv == 2)
				{
					printf ("\n\nSeu n�mero convertido para a base decimal: %d", conv);/* Quando o valor digitado na primeira fun��o passar pelo caractere "%x", ele ser� convertido para seu respectitvo 
					valor em decimal */
				}
				
				if (baseConv == 3)
				{
					printf ("\n\nSeu n�mero convertido para a base hexadecimal: %x", conv); // O mesmo ocorre na base Hexadecimal e Otcal
				}
				
				if (baseConv == 4)
				{
					printf ("\n\nSeu n�mero convertido para a base octal: %o", conv);
				}
				
				break;
			}
			
			case 02:{
				if (baseConv == 1)
				{
					// O for � utilziado para uma tabela de contagem do primeiro algarismo at� o n�mero digitado e imprimi-la na tela
					for (i = 1; i <= val; i++){
						itoa (i, conv, 2);
							printf ("\nBin�rio: [%s]", conv);
					}
				}
				
				if (baseConv == 2)
				{	
					// Realiza a tabela de contagem para a base decimal
					for (i = 1; i <= val; i++){
							printf ("\nDecimal: [%d]", conv);
					}
				}
				
				if (baseConv == 3)
				{
					// Realiza a tabela de contagem para a base hexadecimal
					for (i = 1; i <= val; i++){
							printf ("\nHexadecimal: [%x]", conv);
					}
				}
				
				if (baseConv == 4)
				{
					// Realiza a tabela de contagem para a base octal
					for (i = 1; i <= val; i++){
							printf ("\nOctal: [%o]", conv);
					}
				}
				
				break;
			
			case 03:{
				// Nesse caso, o for faz a mesma contagem que o CASE anterior, com a diferen�a de que ele imprime da tela a contagem em todas as bases
				for (i = 1; i <= val; i++){
						itoa (i, conv, 2);
						printf ("\nDecimal: [%d] \tHexadecimal: [%x] \tOctal: [%o] \tBin�rio: [%s]", i, i, i, conv);
				}
				
				break;
			}	
		}
	}
			
		
	return 0;
}
