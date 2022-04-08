#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

/*
     Dada uma pilha que armazena caracteres, crie uma funcaoo que verifique se uma palavra  ́e um
palindromo.

*/
int main(){
    Pilha *pali;
    char aux = ' ';
    int tam, i;
    i = 0;
    pali = cria();

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



    return 0;
}

