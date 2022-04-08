#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

/*
     Dada uma pilha que armazena caracteres, crie uma funcaoo que verifique se uma palavra  ́e um
palindromo.

*/
int main(){
    Pilha *pali, *invertida;
    char aux = ' ';
    int tam;
    int i = 0;
    pali = cria();
    invertida = cria();

    tam = tamanho(pali);

    printf("\nPara sair digite 0");
    printf("\nDigite caractere por caractere!\n");
    do{
        scanf(" %c", &aux);
        if(aux != '0'){
            empilha(pali, aux);
        }
    }while(aux != '0');


    if(palindromo(pali)){
        printf("\n \n Eh palindromo\n");
    }else{
        printf("\n\n Nao eh palindromo\n");
    }

    invertida = inverte_pilha(pali);
    tam =tamanho(invertida);
    /* Por definição a pilha tem acesso apenas aos elementos do topo, quando invertemos
    a pilha o elemento que está no inicio passa a está no topo!*/
    printf("\n Invertida:");
    while(i<tam){
        printf("\n %c",consulta(invertida));
        desempilha(invertida);
        i++;
    }
    printf("\n Pilha original:");
    tam =tamanho(pali);
    i = 0;
    while(i<tam){
        printf("\n %c",consulta(pali));
        desempilha(pali);
        i++;
    }


    return 0;
}

