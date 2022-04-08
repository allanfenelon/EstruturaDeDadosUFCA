
#define MAX 23

typedef struct pilha Pilha;

Pilha* cria();

void libera_pilha(Pilha* p);

int tamanho(Pilha* p);

int pilha_cheia(Pilha* p);

int pilha_vazia(Pilha* p);

void empilha(Pilha* p, char i);

void desempilha(Pilha* p);

char consulta(Pilha* p);

int palindromo(Pilha* p);
Pilha* inverte_pilha(Pilha* p);


