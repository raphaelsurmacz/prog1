#ifndef FUNC_CONJUNTO
#define FUNC_CONJUNTO

// Verificar se um dado conjunto é vazio
int verificaConjuntoVazio(int *);


// Devolver o tamanho de um conjunto
int devolveTamanhoConjunto(int *, int);


// Preencher um conjunto de tamanho N passado pelo usuário (N <=100)
int preencherVetor(int *, int);


/* Criar um conjunto com elementos (inteiros positivos) aleatórios,
obedecendo o limite detamanho máximo do conjunto */
int criaConjuntoAleatorio(int *);


// Retornar um novo conjunto que seja a união de 2 conjuntos
int retornaConjuntoUniao(int *, int *, int *, int);


//Retornar um novo conjunto que seja a intersecção de 2 conjuntos
int retornaConjuntoInterseccao(int *, int *, int *, int);


#endif