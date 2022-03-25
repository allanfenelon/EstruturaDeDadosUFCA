#define MAX 8

typedef struct conjunto Conj;

Conj* cria();

int tam(Conj* con);

int conj_vazio(Conj* con);

int conj_cheio(Conj* con);

int limpa(Conj* con);

int insere_final(Conj* con, int item);

int conj_imprimir(Conj* con);

int ordenar(Conj* con);

int buscar_elemento(Conj* con, int item);

int remove_elemento(Conj* con, int item);
