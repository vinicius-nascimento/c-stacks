#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

Pilha *criaPilha(){
    Pilha *nova = (Pilha *) malloc (sizeof (Pilha));
	if (nova == NULL){
		printf ("Erro.\n");
		exit (1);
	}
	nova->topo = NULL;
	nova->tamanho = 0;
	return nova;
}

Pilha *empilha(Pilha *p, int chave){
    No *novo = (No *) malloc (sizeof (No));
	novo->chave = chave;
	novo->prox = p->topo;
	p->topo = novo;
	p->tamanho++;
	return p;
}

int desempilha(Pilha *p){
    No *aux;
	int chave;
	if (p->tamanho == 0) {
		printf("Pilha vazia.\n");
		exit(1);
	}
	aux = p->topo;
	chave = aux->chave;
    p->topo = p->topo->prox;
	free(aux);
	return chave;
}

int topo(Pilha *p){
    return p->topo->chave;
}

void imprimePilha (Pilha *p){
    No *aux = p->topo;
	while (aux != NULL){
		printf ("%d\n", aux->chave);
		aux = aux->prox;
	}
}