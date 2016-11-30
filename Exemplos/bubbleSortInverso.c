#include <stdio.h>
#include <stdlib.h>

int main (int argsc, char * argv[]){
	int aux = 0;
	int i = 0;
	int j = 0;
	int e = 0;
	int tamVetor = 0;
	
	puts("programando bubble sort reverso com C");
	puts("digite o tamanho do vetor:");
	scanf("%i", &tamVetor);
	int vetor[tamVetor];
	
	for (i = 0; i < tamVetor; i++){
		aux = i + 1; 
		printf("insira o %i item: ", aux);
		scanf("%i", &vetor[i]);
	}
	puts("\n vetor inicial");
	for (e = 0; e < tamVetor; e++){
		printf(" %i ", vetor[e]);
	}
	for (i = 0; i < tamVetor; i++){
		for (j = 0; j < tamVetor - 1; j++){
			if (vetor[j] < vetor[j+1]) {
				aux = vetor[j];
				vetor[j] = vetor[j+1];
				vetor[j+1] = aux;
				printf("\n %i troca %i", vetor[j+1], vetor[j]);
				puts("");
				for (e = 0; e < tamVetor; e++){
					printf(" %i ", vetor[e]);
				}
			}
		}
	}
	puts("\n vetor ordenado inverso");
	for (i = 0; i < tamVetor; i++){
		printf(" %i ", vetor[i]);
	}
	
}
