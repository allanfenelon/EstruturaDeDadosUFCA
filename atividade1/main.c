#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "conjunto.h"

int main(){
    /*

    C�DIGO PARA TESTAR AS FUN��ES (TEMPOR�RIO)


    */
    Conj *con;
    int x;
    con = cria();
    conj_imprimir(con);
    x = tam(con);
    printf("\no tamanho �: %d\n", x);
    insere_final(con, 3);
    insere_final(con, 2);
    insere_final(con, 1);
    x = tam(con);
    printf("o tamanho �: %d\n", x);
    printf("\n-----\n");
    conj_imprimir(con);
    ordenar(con);
    printf("\n------\n");
    conj_imprimir(con);

    remove_elemento(con, 1);
    printf("\n------\n");
    conj_imprimir(con);
    x = tam(con);
    printf("\n------\n");
    printf("o tamanho �: %d\n", x);
    printf("\n------\n");

    system("pause");
    return 0;
}
