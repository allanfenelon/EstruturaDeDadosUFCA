#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "conjunto.h"

struct conjunto{
    int *vet;
    int qtd;
};

Conj* cria(){
    Conj *con = (Conj*) malloc(sizeof(Conj));

    if(con==NULL){
        printf("Memória não foi alocada![1.cria]\n");
        return -1;
    }
    con->vet = (int*) malloc(MAX*sizeof(int));
    if(con->vet==NULL){
        printf("Memória não foi alocada![2.cria]\n");
        return -1;
    }
    con->qtd=0;
    return con;
}

int tam(Conj* con){
    if(con==NULL){
        return -1;
    }
    return con->qtd;

}

int conj_vazio(Conj* con){
    if(con==NULL){
        return -1;
    }
    return (con->qtd == 0);
}

int conj_cheio(Conj* con){
    if(con==NULL){
        return -1;
    }
    return (con->qtd == MAX);

}

int limpa(Conj* con){
    if(con==NULL){
        return -1;
    }

    for(int i=0; i<con->qtd; i++){
        free(con->vet[i]);
    }
    free(con->vet);
    free(con);
}

int insere_final(Conj* con, int item){
    if(con == NULL)
        return -1;
    if(conj_cheio(con))
        return -1;
    con->vet[con->qtd]=item;
    con->qtd++;
}

int conj_imprimir(Conj* con){
    if(con==NULL)
        return -1;
    if(conj_vazio(con)){
        printf("{0}");
        return 1;
    }else{
        for(int i=0;i<con->qtd; i++)
            printf("%d,", con->vet[i]);
        return 1;
    }

}

int ordenar(Conj* con){

    int i, j, aux;
    if(con==NULL)
        return -1;
    if(conj_vazio(con))
        return -1;
    //insertion sort
    for(i = 0; i < con->qtd; i++){
        aux = con->vet[i];
        j=i-1;
        while(j>=0 && con->vet[j]>aux){
            con->vet[j+1]=con->vet[j];
            j--;

        }
        con->vet[j+1]=aux;
    }
    return 1;

}

int buscar_elemento(Conj* con, int item){
    int i=0;
    if(con==NULL)
        return -1;
    if(conj_vazio(con))
        return -1;
    while(i<con->qtd && con->vet[i]!= item)
        i++;
    if(i==con->qtd)
        return 0;
    return i;
}

int remove_elemento(Conj* con, int item){
    int pos;
    if(con==NULL)
        return -1;
    if(conj_vazio(con))
        return -1;

    pos = buscar_elemento(con, item);

    for(int k=pos; k<con->qtd-1;k++){
        con->vet[k] = con->vet[k+1];
    }
    con->qtd--;
    return 1;
}
