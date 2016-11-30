/**
 * Lista Sequencial.
 *
 * Listas São estruturas formadas por um conjunto de dados de forma a preservar
 * a relação de ordem linear entre eles. Uma lista é composta por nós, 
 * os quais podem conter, cada um deles, um dado primitivo ou composto.
 * 
 * Uma lista representada de forma seqüencial é um conjunto de registros 
 * onde estão estabelecidas regras de precedência entre seus elementos.
 *
 * O sucessor de um elemento ocupa posição física subsequente.
 * A implementação de operações pode ser feita utilizando array e registro,
 * associando o elemento a(i) com o índice i(mapeamento seqüencial).
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
  
#include <stdio.h>
#include <stdlib.h>

//Constantes por Definição

#define MAX 10 /* tamanho máximo da lista */

//Estruturas do Projeto

typedef int telem; 			/* tipo base dos elementos da lista */
typedef struct listaSeq {
	telem v[MAX]; 			/* vetor que contém a lista */
	int indiceSeq; 			/* posição do último elemento da lista */
} tlistaSeq; 				/* tipo lista */

// Escopo do Projeto
void criarListaSeq (tlistaSeq *LS);
int verificaListaSeqVazia (tlistaSeq LS);
int verificaListaSeqCheia (tlistaSeq LS);
int tamanhoListaSeq (tlistaSeq LS);
int elementoListaSeq (tlistaSeq LS, int pos, telem *dado);
int posicaoListaSeq (tlistaSeq LS, telem dado);
int inserirListaSeq (tlistaSeq *LS, int pos, telem dado);
int removerListaSeq (tlistaSeq *LS, int pos, telem *dado);
int limparListaSeq (tlistaSeq* LS, tlistaSeq TLS);
void imprimirLista(tlistaSeq LS);

// Função Principal
int main(void){
	
	tlistaSeq lista;
	
	int opcao = 0;
	int x = 0;
	int posicao = 0;
	int valor = 0;

	criarListaSeq(&lista);

	do {
		system("cls");
		puts("|***************************************************|");
		puts("|DESENVOLVIDO POR: RODOLFO GONCALVES DE LUNA FREIRE |");
		puts("|DISCIPLINA: ESTRUTURA DE DADOS I                   |");
		puts("|***************************************************|");
		puts("|*********** EDITOR DE LISTA SEQUENCIAL ************|");
		puts("|***************************************************|");
		puts("|                                                   |");
		puts("| 1 - (LISTA SEQUENCIAL) - EXIBIR                   |");
		puts("| 2 - (LISTA SEQUENCIAL) - INSERIR                  |");
		puts("| 3 - (LISTA SEQUENCIAL) - REMOVER                  |");
		puts("| 4 - (LISTA SEQUENCIAL) - EXIBIR POSICAO           |");
		puts("| 5 - (LISTA SEQUENCIAL) - ESVAZIAR LISTA           |");
		puts("| 0 - (LISTA SEQUENCIAL) - SAIR                     |");
		puts("|                                                   |");
		puts("|************************************************** |");
		printf("   DIGITE SUA OPCAO: "); scanf("%d", &opcao);
		
		switch (opcao) {
			case 1 : 	{
							system("cls");
							puts("|***************************************************|");
							puts("|DESENVOLVIDO POR: RODOLFO GONCALVES DE LUNA FREIRE |");
							puts("|DISCIPLINA: ESTRUTURA DE DADOS I                   |");
							puts("|***************************************************|");
							puts("|*********** EDITOR DE LISTA SEQUENCIAL ************|");
							puts("|***************************************************|");
							puts("|                                                   |");
							imprimirLista(lista);
							puts("|                                                   |");
							puts("|************************************************** |\n");
							system("pause");
							break;
						}
			case 2 : 	{	
							system("cls");
							puts("|***************************************************|");
							puts("|DESENVOLVIDO POR: RODOLFO GONCALVES DE LUNA FREIRE |");
							puts("|DISCIPLINA: ESTRUTURA DE DADOS I                   |");
							puts("|***************************************************|");
							puts("|*********** EDITOR DE LISTA SEQUENCIAL ************|");
							puts("|***************************************************|");
							if (verificaListaSeqCheia(lista) == 1) {
								puts("|                                                   |");
								puts("| LISTA CHEIA                                       |");
								puts("|                                                   |");
								puts("|************************************************** |\n");
							} else {
								posicao = (lista.indiceSeq + 1);
								printf(" DIGITE UM VALOR: ");
								scanf("%d", &valor);
								inserirListaSeq(&lista,posicao,valor);
							}
							system("pause");
							break;
						}
			case 3 :	{	
							system("cls");
							puts("DIGITE UMA POSICAO");
							scanf("%d", &posicao);
							valor = valor;
							removerListaSeq(&lista, posicao, &lista.v[valor]);
							system("pause");
							break;
						} 	
			case 4 : 	{	
							system("cls");
							puts("|***************************************************|");
							puts("|DESENVOLVIDO POR: RODOLFO GONCALVES DE LUNA FREIRE |");
							puts("|DISCIPLINA: ESTRUTURA DE DADOS I                   |");
							puts("|***************************************************|");
							puts("|*********** EDITOR DE LISTA SEQUENCIAL ************|");
							puts("|***************************************************|");
							printf("| DIGITE UM VALOR: ");
							scanf("%d", &valor);
							x = posicaoListaSeq(lista, valor);
							printf("| O Valor [%d] possui a seguinte posicao [%d]\n    |", valor, x);
							puts("|                                                   |");
							puts("|************************************************** |\n");
							system("pause");
							break;
						} 	
			case 5 : 	{
							system("cls");
							puts("|***************************************************|");
							puts("|DESENVOLVIDO POR: RODOLFO GONCALVES DE LUNA FREIRE |");
							puts("|DISCIPLINA: ESTRUTURA DE DADOS I                   |");
							puts("|***************************************************|");
							puts("|*********** EDITOR DE LISTA SEQUENCIAL ************|");
							puts("|***************************************************|");
							limparListaSeq (&lista, lista);	
							imprimirLista(lista);
							puts("|                                                   |");
							puts("|************************************************** |\n");
							system("pause");
							break;
						}
			case 0 : 	{
							system("exit");
							break;
						}
			default  : 	puts("DIGITE SUA OPCAO:");
		}
	}while (opcao != 0);	
}



/**
 *
 * Função Cria Lista 
 *
 *
 */
void criarListaSeq (tlistaSeq *LS) {
	LS->indiceSeq = 0;
}

/**
 *
 * Função Verifica Lista Vazia
 *
 * O parâmetro dado irá receber o elemento encontrado
 * Retorna 0 se for diferente. Caso contrário, retorna 1 
 *
 */
int verificaListaSeqVazia (tlistaSeq LS) {
	return (LS.indiceSeq == 0);
}

// Função Verifica Lista Cheia

/**
 *
 * Função Verifica Lista Cheia
 *
 * O parâmetro dado irá receber o elemento encontrado
 * Retorna 0 se for diferente. Caso contrário, retorna 1 
 *
 */
int verificaListaSeqCheia (tlistaSeq LS) {
	return (LS.indiceSeq == MAX);
}


/**
 *
 * Função Verifica Tamanho Lista
 *
 * O parâmetro dado irá receber o elemento encontrado
 * Retorna o tamanho da Lista 
 *
 */
int tamanhoListaSeq (tlistaSeq LS) {
	return (LS.indiceSeq);
}

/**
 *
 * Função Obter o i-ésimo Elemento de uma Lista
 *
 * O parâmetro dado irá receber o elemento encontrado
 * Retorna 0 se a posição for inválida. Caso contrário, retorna 1 
 *
 */
int elementoListaSeq (tlistaSeq LS, int pos, telem *dado){
	
	if ( (pos > LS.indiceSeq) || (pos <= 0) ) {
		return (0);
	}
	
	*dado = LS.v[pos-1];
	
	return (1);
}

/**
 *
 * Função Obter a posição do Elemento de uma Lista
 *
 * Retorna a posição do elemento ou 0 caso não seja encontrado  
 *
 */
int posicaoListaSeq (tlistaSeq LS, telem dado) {
	
	int i;
	
	for (i=1; i<=LS.indiceSeq; i++){
		if (LS.v[i-1] == dado){
			return (i);
		} else {
			return (0);
		}		
	}
	
}

/**
 *
 * Função para Inserir um Elemento na Lista 
 *
 * Retorna 0 se a posição for inválida ou se a lista estiver cheia 
 * Caso contrário, retorna 1 
 *
 */ 
int inserirListaSeq (tlistaSeq *LS, int pos, telem dado) {

	int i;
	
	if ( (LS->indiceSeq == MAX) || (pos > LS->indiceSeq + 1) ) {
		return (0);
	}
	for (i=LS->indiceSeq; i>=pos; i--){
		LS->v[i] = LS->v[i-1];
	}
	
	LS->v[pos-1] = dado;
	(LS->indiceSeq)++;
	
	return (1);
}

/**
 *
 * Função para Remover um Elemento na Lista
 *
 * O parâmetro dado irá receber o elemento encontrado 
 * Retorna 0 se a posição for inválida. Caso contrário, retorna 1 
 *
 */
int removerListaSeq (tlistaSeq *LS, int pos, telem *dado) {
	 
	int i;
	
	if ( (pos > LS->indiceSeq) || (pos <= 0) ){
		return (0);
	} 
	
	*dado = LS->v[pos-1];
	
	for (i=pos; i<=(LS->indiceSeq)-1; i++){
		LS->v[i-1] = LS->v[i];
	}
	
	(LS->indiceSeq)--;
	
	return (1);
}

/**
 *
 * Função para Remover Todos Elementos na Lista
 *
 * O parâmetro dado irá receber o elemento encontrado 
 * Retorna 1 
 *
 */

int limparListaSeq (tlistaSeq* LS, tlistaSeq TLS) {
	
	int i;
	
	for (i=1 ; i<=tamanhoListaSeq(TLS); i++){
		LS->v[i-1] = LS->v[i];
		(LS->indiceSeq)--;
	}
	
	return (1);
}

/**
 *
 * Função para Imprimir Todos Elementos na Lista
 *
 * O parâmetro dado irá receber o elemento encontrado 
 * Retornando os Dados Inseridos
 *
 */
void imprimirLista (tlistaSeq LS) {
	int i = 0;
	int x = 0;
	x = tamanhoListaSeq(LS);
	x = x - 1;
	
	if (verificaListaSeqVazia(LS) == 1) {
		puts("| LISTA VAZIA                                       |");
	
	} else {
		puts("| IMPRIMINDO LISTA                                  |");
		puts("|                                                   |");
		for (i; i<=x; i++) {
			printf("| POSICAO [%d] - ITEM: %d                             |\n", i + 1 , LS.v[i]);
		}
		
		if (verificaListaSeqCheia(LS) == 1) {
			puts("|                                                   |");
			puts("| LISTA CHEIA                                       |");
			puts("|                                                   |");
		}
		
	}
}
