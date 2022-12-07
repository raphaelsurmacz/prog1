#include <stdio.h>
#include <stdlib.h>
#include "libconjunto.h"

#define MAX 100
#define VAZIO -1

int verificaConjuntoVazio(int *vetorconj){

	if (*vetorconj <= VAZIO)
		return 1;

	return 0;
}

int devolveTamanhoConjunto(int *vetorconj, int tam){
	int i=0;

	while(*(vetorconj + i) > VAZIO && i < (MAX + tam)){
		i++;
	}
	
	return i;
}

int preencherVetor(int *vetor, int tam){
	int aux;

	for(int i=0; i<tam; i++)
		scanf("%i", (vetor + i));
	
	for(int i=0; i<tam; i++){
		for(int j=i; j<tam; j++)

			if(*(vetor + i) > *(vetor + j)){
				aux = *(vetor + i);
				*(vetor + i) = *(vetor + j);
				*(vetor + j)  = aux;
			}
	}
	return 0;
}

int criaConjuntoAleatorio(int *vetor2){
	int aux;

	for(int i=0; i<MAX; i++){
		*(vetor2 + i) = rand() % 100;	/*gerando valores aleatorios para o vetor de 0 a 100*/
	}
	
	for(int i=0; i<MAX; i++){
		for(int j=i; j<MAX; j++)

			if(*(vetor2 + i) > *(vetor2 + j)){
				aux = *(vetor2 + i);
				*(vetor2 + i) = *(vetor2 + j);
				*(vetor2 + j)  = aux;
			}
	}

	return 0;
}

int retornaConjuntoUniao(int *vetor, int *vetor2, int *vetorconj, int tam){

	return 0;
}

int retornaConjuntoInterseccao(int *vetor, int *vetor2, int *vetorconj, int tam){
	int j=0;
	int cont=0;

	for(int i=0; i<tam; i++)
		for(int j=0; j<MAX; j++){

			if(*(vetor + i) == *(vetor2 + j)){
				*(vetorconj + cont) = *(vetor + i);
				cont++;
			}
		}
	
	return 0;
}