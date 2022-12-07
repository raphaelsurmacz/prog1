#include <stdio.h>
#include <stdlib.h>
#include "libconjunto.h"

#define MAX 100
#define VAZIO -1

int imprimeVetor(int *vetor, int tam){
	int i=0;

	while(*(vetor + i) > VAZIO && i < (MAX + tam)){

		printf("%d ", *(vetor + i));
		i++;
	}
	
	return i;
}

int prencheVazio(int *vetor, int *vetorconj){

	for(int i=0; i<MAX; i++){
		*(vetor + i) = VAZIO;
		*(vetorconj + i) = VAZIO;
	}

	return 0;
}

int main(){
	int vetor[MAX], vetor2[MAX], vetorconj[2*MAX];
	int tam, op;

	prencheVazio(vetor, vetorconj);

	printf("Digite a operação:\n\nOperação 1 - União\nOperação 2 - Intersecção\n");
	scanf("%d", &op);

	printf("\nDigite o tamanho do seu vetor: ");
	scanf("%d", &tam);

	criaConjuntoAleatorio(vetor2);
	printf("Vetor aleatório:\n");
	imprimeVetor(vetor2, tam);

	printf("\n\nPreencha seu vetor: ");
	preencherVetor(vetor, tam);
	imprimeVetor(vetor, tam);

	switch (op){
		case 1:
			retornaConjuntoUniao(vetor, vetor2, vetorconj, tam);
			printf("Tamanho do conjuto: %d\n", devolveTamanhoConjunto(vetorconj, tam));
		break;

		case 2:
			retornaConjuntoInterseccao(vetor, vetor2, vetorconj, tam);
			printf("Tamanho do conjuto: %d\n", devolveTamanhoConjunto(vetorconj, tam));
		break;
	}
}