/**
 *
 * Estruturas de Decisão
 *
 * IF ELSE  - No comando if else a condição é testada antes do bloco de instruções, 
 * Se a expressão de teste for verdadeira (algo diferente de 0), o comando if executa a
 * instrução ou bloco nele contido. Caso contrário a instrução não será executada, 
 * passando assim para o else executando a instrução ou bloco nele contido
 *
 * IF ELSE IF - No comando if else a condição é testada antes do bloco de instruções, 
 * Se a expressão de teste for verdadeira (algo diferente de 0), o comando if executa a
 * instrução ou bloco nele contido. Caso contrário a instrução não será executada, 
 * passando assim para o else executando a instrução ou bloco nele contido;
 *
 * TERNÁRIO - Teste logico ? verdadeiro : falso - Um comando idêntico ao comando de seleção onde
 * há uma expressão de teste com uma alternativa (if-else) é o operador “? :”
 *
 * SWITCH CASE - Dentro dos switch há o case (que significa caso). Ou seja, é quase que um if
 * com várias possibilidades, mas com algumas diferenças importantes.
 *
 * 1a diferença: Os cases não aceitam operadores lógicos. Portanto, não é possível fazer
 * uma comparação. Isso limita o case a apenas valores definidos.
 *
 * 2a diferença: O switch executa seu bloco em cascata. Ou seja, se a variável indicar para
 * o primeiro case e dentro do switch tiver 5 cases, o switch executará todos os outros 
 * 4 cases a não ser que utilizemos o comando para sair do switch. (Nos referimos ao BREAK).
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
	float valorUm = 0;
	float valorDois = 0;
	int opcao = 0;
	int numero;
	
	// IF ELSE
	if (valorUm == valorDois){
		puts("Os valores, sao iguais");
	} else {
		puts("Os valores, sao diferentes");
	}
	
	//IF ELSE IF 
	if (valorUm > valorDois){
		puts("O primeiro valor eh maior que o segundo");
	} else if (valorUm < valorDois) {
		puts("O segundo valor eh maior que o primeiro");
	} else {
		puts("Os valores, sao iguais");
	} 
	
	//TERNÁRIO
	puts("digite um numero: ");
	scanf("%i", &numero);
	(numero % 2) == 0 ? printf("O Numero eh Par\n") : printf("O Numero eh Impar\n");
	
	
	//SWITCH CASE
	puts("ESCOLHA UMA OPÇÃO: ");
	scanf("%i", &opcao);
	
	switch (opcao) {
		case 1: puts("Opcao 1"); break;
		case 2: puts("Opcao 2"); break;
		case 3: puts("Opcao 3"); break;
		case 4: puts("Opcao 4"); break;
		default: puts("Opcao PADRAO"); break;
	}
 
  return 0;
	
}
