/**
 * Capturando informações do teclado
 *
 * scanf ()
 *
 * getchar() 
 *
 * printf ()
 *
 * puts()
 *
 */
 
 
 /** Importação das bibliotecas
  *
  * stdio.h é um cabeçalho da biblioteca padrão do C. Seu nome vem 
  * da expressão inglesa standard input-output header, que significa
  * "cabeçalho padrão de entrada/saída".
  *
  * Possui definições de subrotinas relativas às operações de entrada/saída,
  * como leitura de dados digitados no teclado e exibição de informações na
  * tela do programa de computador. Também possui numerosas definições de 
  * constantes, variáveis e tipos. É um dos cabeçalhos mais populares da
  * linguagem de programação C, intensivamente utilizado tanto por 
  * programadores iniciantes como por experientes.
  *
  * Abaixo temos 3 funções desta biblioteca que são bem conhecidas:
  *
  * printf() Função usada para imprimir dados na tela
  * scanf() Função usada para capturar dados do usuário
  * system() Função usada para executar comandos no sistema operacional
  *
  * stdlib.h é um arquivo cabeçalho da biblioteca de propósito geral padrão
  * da linguagem de programação C. Ela possui funções envolvendo alocação de memória,
  * controle de processos, conversões e outras. Ela é compatível com C++ e
  * é chamada cstdlib em C++. O nome "stdlib" vem de standard library (standard library é biblioteca padrão em inglês).
  *
  */

//Importação das bibliotecas
#include <stdio.h> 
#include <stdlib.h> 

// Função Principal
int main() {
	
	// Declaração de Variaveis
	char palavra[50];
	int inteiro;
	float decimal;
	
	printf("Digite uma palavra: ");
	scanf("%s", &palavra);
	printf("Digite um inteiro: ");
	scanf("%d", &inteiro);
	printf("Digite um decimal: ");
	scanf("%f", &decimal);
	
	printf("%s\n", palavra);
	printf("%d\n", inteiro);
	printf("%.2f\n", decimal);

	puts("Digite uma palavra: ");
	palavra[50] = getchar();
	puts("Digite um inteiro: ");
	inteiro = getchar();
	puts("Digite um decimal: ");
	decimal = getchar();
	
	printf("%s\n", palavra);
	printf("%d\n", inteiro);
	printf("%.2f\n", decimal);
	
	return 0;
	
}
