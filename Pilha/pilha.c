#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

struct pilha{
    int qtd;
    char *vet;
};


Pilha* cria(){
    Pilha *p = (Pilha*) malloc(sizeof(Pilha));
    if(p==NULL){
        printf("\nErro 1");
        return -1;
    }
    p->vet = (char*) malloc(MAX*sizeof(char));

    if(p->vet==NULL){
        printf("\nErro 2");
        return -1;
    }
    p->qtd = 0;
    return p;
}

void libera_pilha(Pilha* p){
    if(p==NULL)
        return -1;

    for(int i=0; i<p->qtd; i++){
        free(p->vet[i]);
    }
    free(p->vet);
    free(p);
}

int tamanho(Pilha* p){
    if(p==NULL)
        return -1;
    return (p->qtd);
}

int pilha_cheia(Pilha* p){
    if(p==NULL)
        return -1;
    if(p->qtd == MAX)
        return 1;
}

int pilha_vazia(Pilha* p){
    if(p==NULL)
        return -1;
    if(p->qtd == 0)
        return 1;
}

void empilha(Pilha* p, char i){
    p->qtd++;
    p->vet[p->qtd] = i;

}

void desempilha(Pilha* p){
    p->qtd--;
}


char consulta(Pilha* p){
    return (p->vet[p->qtd]);
}

int palindromo(Pilha* p){
    Pilha *aux = cria();
    int qtdAUX = 0;
    int iguais = 0;
    if(aux == NULL || p == NULL)
        return -1;

    qtdAUX = p->qtd;
    while(qtdAUX > 0){
        aux->qtd++;
        aux->vet[aux->qtd] = p->vet[qtdAUX];
        qtdAUX--;
    }

    qtdAUX = p->qtd;
    while(qtdAUX >0){
        if(aux->vet[aux->qtd] == p->vet[qtdAUX]){
            iguais++;
        }
        aux->qtd--;
        qtdAUX--;
    }

    if(iguais == p->qtd){
        return 1;
    }else{
        return 0;
    }
}
