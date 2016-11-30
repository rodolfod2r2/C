/**
 * Estruturas de Repeticao
 *
 * While - No comando while a condição é testada antes do bloco de instruções, e caso a condição seja falsa a repetição não será executada.
 * Do <-> While - No comando do while o bloco de comandos é executado pelo menos uma vez de forma obrigatória, independente do resultado da expressão lógica 
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
	float valorUm=0;
	float valorDois=0;
	float mediaValor=0;
	int verificador = 1;
	float nota1=0;
	float nota2=0;
	float media=0;
	int resp2;
	
	// While
 	while (verificador == 1) {

		printf("Repeticao - While\n");
		printf("Digite um valor: ");
		scanf("%f",&valorUm);
		printf("Digite o segundo valor: ");
		scanf("%f",&valorDois);
		
		media = (valorUm + valorDois)/2;
		printf("Media de valores = %f\n",mediaValor);
		printf("Digite 1 para continuar ou 0 para sair\n");
		scanf("%d", &verificador);
	}
 
 	//Do <-> While
	do {

		printf("Repeticao - Do ~ While\n");
		printf("Digite a primeira nota: ");
    scanf("%f",&nota1);
    printf("Digite a segunda nota: ");
    scanf("%f",&nota2);
 
    media = (nota1 + nota2)/2;
    printf("Media do aluno = %f\n",media);
		printf("Digite 1 para continuar ou 2 para sair\n");
		scanf("%d", &resp2);
	
	}while (resp2==1);
 
  	return 0;
	
}
