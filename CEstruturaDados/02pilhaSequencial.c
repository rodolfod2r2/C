/**
 * Pilha Sequencial.
 *
 * Pilhas são listas onde a inserção de um novo item ou a remoção 
 * de um item já existente se dá em uma única extremidade, no topo.
 * 
 * Dada uma pilha P = ( a(1), a(2), ..., a(n) ), dizemos que a(1) 
 * é o elemento da base da pilha; a(n) é o elemento topo da pilha 
 * e a(i+1) está acima de a(i).
 *
 * Pilhas são também conhecidas como listas LIFO (last in first out).
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
#define MAX 10 /* tamanho máximo da pilha */

//Estruturas do Projeto
typedef int telem; 		/* tipo base dos elementos da pilha */
typedef struct {
	telem v[MAX]; 		/* vetor que contém a pilha */
	int topoPilhaSeq; 	/* posição do último elemento da pilha */
} tpilhaSeq; 			/* tipo pilha */



// Escopo do Projeto
void criarPilhaSeq (tpilhaSeq* PS);
int verificaPilhaSeqVazia (tpilhaSeq PS);
int verificaPilhaSeqTopo (tpilhaSeq PS, telem* valor);
int pushPilhaSeq (tpilhaSeq* PS, telem valor);
int popPilhaSeq (tpilhaSeq* PS, telem valor);
int limparpopPilhaSeq (tpilhaSeq* PS, telem valor);
int imprimirPilhaSEQ (tpilhaSeq* PS);
void menu();


// Função Principal
int main(void){
	
	tpilhaSeq pilhaSeq;
	
	int opcao = 0;
	int x = 0;
	int posicao = 0;
	int valor = 0;
	
	criarPilhaSeq(&pilhaSeq);
	
	do {
		system("cls");
		puts("|***************************************************|");
		puts("|DESENVOLVIDO POR: RODOLFO GONCALVES DE LUNA FREIRE |");
		puts("|DISCIPLINA: ESTRUTURA DE DADOS I                   |");
		puts("|***************************************************|");
		puts("|*********** EDITOR DE PILHA SEQUENCIAL ************|");
		puts("|***************************************************|");
		puts("|                                                   |");
		puts("| 1 - (PILHA SEQUENCIAL) - EXIBIR                   |");
		puts("| 2 - (PILHA SEQUENCIAL) - INSERIR                  |");
		puts("| 3 - (PILHA SEQUENCIAL) - REMOVER                  |");
		puts("| 4 - (PILHA SEQUENCIAL) - ESVAZIAR PILHA           |");
		puts("| 0 - (PILHA SEQUENCIAL) - SAIR                     |");
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
							puts("|*********** EDITOR DE PILHA SEQUENCIAL ************|");
							puts("|***************************************************|");
							puts("|                                                   |");
							imprimirPilhaSEQ(&pilhaSeq);
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
							puts("|*********** EDITOR DE PILHA SEQUENCIAL ************|");
							puts("|***************************************************|");
							if (verificaPilhaSeqCheia(pilhaSeq) == 1) {
								puts("|                                                   |");
								puts("| PILHA CHEIA                                       |");
								puts("|                                                   |");
								puts("|************************************************** |\n");
							} else {
								printf(" DIGITE UM VALOR: ");
								scanf("%d", &valor);
								pushPilhaSeq(&pilhaSeq, valor);
							}
							system("pause");
							break;
						}
			case 3 :	{	
							system("cls");
							puts("|***************************************************|");
							puts("|DESENVOLVIDO POR: RODOLFO GONCALVES DE LUNA FREIRE |");
							puts("|DISCIPLINA: ESTRUTURA DE DADOS I                   |");
							puts("|***************************************************|");
							puts("|*********** EDITOR DE PILHA SEQUENCIAL ************|");
							puts("|***************************************************|");
							puts("|                                                   |");
							puts("| TOPO REMOVIDO                                     |");
							puts("|                                                   |");
							puts("|************************************************** |\n");
							popPilhaSeq(&pilhaSeq, *pilhaSeq.v);
							system("pause");
							break;
						} 	
			case 4 : 	{	
							system("cls");
							puts("|***************************************************|");
							puts("|DESENVOLVIDO POR: RODOLFO GONCALVES DE LUNA FREIRE |");
							puts("|DISCIPLINA: ESTRUTURA DE DADOS I                   |");
							puts("|***************************************************|");
							puts("|*********** EDITOR DE PILHA SEQUENCIAL ************|");
							puts("|***************************************************|");
							puts("|                                                   |");
							limparpopPilhaSeq (&pilhaSeq, *pilhaSeq.v);
							imprimirPilhaSEQ(&pilhaSeq);
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

// Função Criar Pilha Sequencial
void criarPilhaSeq (tpilhaSeq* PS) {
	PS->topoPilhaSeq = 0;
}

// Função Verifica Pilha Sequencial Vazia
int verificaPilhaSeqVazia (tpilhaSeq PS) {
	return (PS.topoPilhaSeq == 0);
	
}

// Função Verifica Pilha Sequencial Cheia
int verificaPilhaSeqCheia (tpilhaSeq PS) {
	return (PS.topoPilhaSeq == MAX);
	
}

/**
 *
 * Função Verifica Tamanho Pilha
 *
 * O parâmetro dado irá receber o elemento encontrado
 * Retorna o tamanho da Lista 
 *
 */
int tamanhoPilhaSeq (tpilhaSeq PS) {
	return (PS.topoPilhaSeq);
}

// Função Verifica Pilha Sequencial Topo
int verificaPilhaSeqTopo (tpilhaSeq PS, telem* valor) {
	if ( verificaPilhaSeqVazia(PS) ) return 0;
	*valor = PS.v[PS.topoPilhaSeq];
	return 1;
}

// Função Inserir na Pilha Sequencial
int pushPilhaSeq (tpilhaSeq* PS, telem valor){
	if (PS->topoPilhaSeq == MAX-1) return 0;
	PS->v[PS->topoPilhaSeq++] = valor;
	return 1;
}

// Função Remover na Pilha Sequencial
int popPilhaSeq (tpilhaSeq* PS, telem valor){
	if ( verificaPilhaSeqVazia(*PS) ) return 0;
	valor = PS->v[PS->topoPilhaSeq--];
	return 1;
}

// Função Limpar na Pilha Sequencial
int limparpopPilhaSeq (tpilhaSeq* PS, telem valor) {
	int i = 0;
	int x = -1;
	if ( verificaPilhaSeqVazia(*PS) ) return 0;
	i = tamanhoPilhaSeq(*PS);
	i = i - 1;
	for (i; i>x; i--) {
		valor = PS->v[PS->topoPilhaSeq--];
	}
	return 1;
}

// Função Imprimir na Pilha Sequencial
int imprimirPilhaSEQ (tpilhaSeq* PS) {
	int i = 0;
	int x = -1;
	i = tamanhoPilhaSeq(*PS);
	i = i - 1;
	if (verificaPilhaSeqVazia(*PS) == 1) {
		puts("| PILHA VAZIA                                       |");
	} else {
		puts("| IMPRIMINDO PILHA");
		puts("|                 ");
		printf("| TOPO ", PS->v[i]);
		for (i; i>x; i--) {
			printf("|-> ITEM: %d \n", PS->v[i]);
		}
		if (verificaPilhaSeqCheia(*PS) == 1) {
			puts("|                                                   |");
			puts("| PILHA CHEIA                                       |");
			puts("|                                                   |");
		}	
	}
}
