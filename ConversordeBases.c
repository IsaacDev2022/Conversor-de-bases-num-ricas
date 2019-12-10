#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 
	22 de outubro de 2019
	
	Departamento de tecnologia da informação do Uniprojeção (Taguatinga - DF)
	Matéria: Lógica computacional - Mestre Welton
	
	Autor: Isaac Silva Martins
	Curso: Análise e desenvolvimento de sistemas (2º semestre)

	Algoritmo de conversão de bases numéricas
*/

// Funções: 
	void Header ();
	void cls ();
	int baseOption ();
	int baseConvChoice ();


// Variáveis: 
	int i, n, firstOption, val, baseInput, baseConv, output;
	char conv [40];

// Função de cabeçalho
void Header (){
		printf ("|*********************************************|\n");
		printf ("|                            	              |\n");
		printf ("|\tAlgoritmo de converão de bases        |\n");
		printf ("|                                             |\n");
		printf ("|*********************************************|\n");
		
		getch ();
	
		system ("cls");
}

// Função para a entrada de valores 
int baseOption (){

		printf ("|*********************************************************************************|\n");
		printf ("|                                      	                                          |\n");
		printf ("|\tEscolha uma das opções de base abaixo para inserir o número desejado:     |\n");
		printf ("|\t[01] - Decimal 			                                          |\n");
		printf ("|\t[02] - Hexadecimal	                                                  |\n");
		printf ("|\t[03] - Octal                                                              |\n");
		printf ("|                                      	                                          |\n");
		printf ("|*********************************************************************************|\n");
		printf ("Opção: ");
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

// Função para escolher as opções de conversão
int baseConvChoice (){

		printf ("\n");
		printf ("|**********************************************************************|\n");
		printf ("|                                      	                               |\n");
		printf ("|\tEscolha uma das opções de base abaixo para a conversão:	       |\n");
		printf ("|\t[01] - Binário 			                               |\n");
		printf ("|\t[02] - Decimal 			                               |\n");
		printf ("|\t[03] - Hexadecimal	                                       |\n");
		printf ("|\t[04] - Octal                                                   |\n");
		printf ("|                                      	                               |\n");
		printf ("|**********************************************************************|\n");
		printf ("Opção: ");
			scanf ("%d", &baseConv); // Recebe o valor referente a opção de base em que se deseja realizar a conversão
		
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
		printf ("|\tEscolha uma das opções abaixo para a saída:	               |\n");
		printf ("|\t[01] - Resultado individual 			               |\n");
		printf ("|\t[02] - Tabela individual			               |\n");
		printf ("|\t[03] - Tabela completa                                         |\n");
		printf ("|                                      	                               |\n");
		printf ("|**********************************************************************|\n");
		printf ("Opção: ");
			scanf ("%d", &output); // Opções de saída de resultados
			
		
		switch (output){
			
			case 01:{ // A primeira opção mostra o resultado individualmente
			// Para realiar as conversões, usamos caracteres de formatação para as bases hexadecimal, decimal e octal
				if (baseConv == 1)
				{
					itoa (val, conv, 2); // A função itoa realiza a conversão do número escolhido para a base binária, pois não existe caractere de formtação para binário em C
					printf ("Seu número convertido para base binária: %s", conv);
				}
				
				if (baseConv == 2)
				{
					printf ("\n\nSeu número convertido para a base decimal: %d", conv);/* Quando o valor digitado na primeira função passar pelo caractere "%x", ele será convertido para seu respectitvo 
					valor em decimal */
				}
				
				if (baseConv == 3)
				{
					printf ("\n\nSeu número convertido para a base hexadecimal: %x", conv); // O mesmo ocorre na base Hexadecimal e Otcal
				}
				
				if (baseConv == 4)
				{
					printf ("\n\nSeu número convertido para a base octal: %o", conv);
				}
				
				break;
			}
			
			case 02:{
				if (baseConv == 1)
				{
					// O for é utilziado para uma tabela de contagem do primeiro algarismo até o número digitado e imprimi-la na tela
					for (i = 1; i <= val; i++){
						itoa (i, conv, 2);
							printf ("\nBinário: [%s]", conv);
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
				// Nesse caso, o for faz a mesma contagem que o CASE anterior, com a diferença de que ele imprime da tela a contagem em todas as bases
				for (i = 1; i <= val; i++){
						itoa (i, conv, 2);
						printf ("\nDecimal: [%d] \tHexadecimal: [%x] \tOctal: [%o] \tBinário: [%s]", i, i, i, conv);
				}
				
				break;
			}	
		}
	}
			
		
	return 0;
}
