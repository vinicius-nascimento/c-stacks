#ifndef PILHA_H
#define PILHA_H

typedef struct no {
	int chave;
	struct no *prox;
} No;

typedef struct pilha {
    unsigned int tamanho;
    No *topo;
} Pilha;

Pilha *criaPilha();

Pilha *empilha(Pilha *p, int chave);

int desempilha(Pilha *p);

int topo(Pilha *p);

void imprimePilha (Pilha *p);

#endif