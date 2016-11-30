/**
 * Tipos de Variaveis Primarias
 *
 * char: Caracter: O valor armazenado eh um caractere. Caracateres 
 * geralmente sao armazenados em códigos (usualmente o codigo ASCII).
 *
 * int: Numero inteiro eh o tipo padrao e o tamanho do conjunto que
 * pode ser representado normalmente depende da máquina em que o programa está rodando.
 *
 * float: Numero em ponto flutuante de precisao simples. Sao conhecidos
 * normalmente como numeros reais.
 *
 * double: Numero em ponto flutuante de precisao dupla
 *
 * void: Este tipo serve para indicar que um resultado nao tem um tipo definido. 
 *
 * Uma das aplicacoes deste tipo em C eh criar um tipo vazio que pode posteriormente ser
 * modificado para um dos tipos anteriores.
 *
 */
 
 
 /** Importação das bibliotecas
  *
  * stdio.h eh um cabecalho da biblioteca padrao do C. Seu nome vem 
  * da expressao inglesa standard input-output header, que significa
  * "cabecalho padrao de entrada/saida".
  *
  * Possui definicoes de subrotinas relativas as operacoes de entrada/saida,
  * como leitura de dados digitados no teclado e exibicao de informacoes na
  * tela do programa de computador. Tambem possui numerosas definicoes de 
  * constantes, variaveis e tipos. eh um dos cabecalhos mais populares da
  * linguagem de programacao C, intensivamente utilizado tanto por 
  * programadores iniciantes como por experientes.
  *
  * Abaixo temos 3 funcoes desta biblioteca que são bem conhecidas:
  *
  * printf() funcao usada para imprimir dados na tela
  * scanf() funcao usada para capturar dados do usuário
  * system() funcao usada para executar comandos no sistema operacional
  *
  * stdlib.h eh um arquivo cabecalho da biblioteca de proposito geral padrao
  * da linguagem de programação C. Ela possui funcoes envolvendo alocacao de memoria,
  * controle de processos, conversões e outras. Ela é compatível com C++ e
  * chamada cstdlib em C++. O nome "stdlib" vem de standard library (standard library é biblioteca padrao em ingles).
  *
  */

//Importação das bibliotecas
#include <stdio.h> 
#include <stdlib.h>

// Funcao Principal
int main() {
	
	// Declaracao de Variaveis
	char caractere = 135;
	char palavra[] = "Rodolfo Goncalves";
	int inteiro = 50;
	float decimal= 70.31;
	double decimalMoeda = 60.98;
	
	printf("%c\n", caractere); 		//funcao printf impressao com formatacao, %c para caractere Tabela ASCII
	printf("%s\n", palavra); 		//funcao printf impressao com formatacao, %s para string
	printf("%d\n", inteiro); 		//funcao printf impressao com formatacao, %d ou i para inteiro
	printf("%.2f\n", decimal); 		//funcao printf impressao com formatacao, %f para pontos flutuantes
	printf("%.2f\n", decimalMoeda); //funcao printf impressao com formatacao, %f para pontos flutuantes
	
	return 0; // retorno da funcao main	
}
