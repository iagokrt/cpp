## main.c

```c
#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"


int main()
{
    int x = 0;
    pilha_t *pilha;

    //cria uma pilha
    pilha = cria_pilha();

    //empilha dados
    push(5,pilha);
    push(10,pilha);
    push(33,pilha);
    push(60,pilha);

    //desempilha
    x = pop(pilha);
    printf("main: pop() ---> %d\n", x);

    x = pop(pilha);
    printf("main: pop() ---> %d\n", x);
    x = pop(pilha);
    printf("main: pop() ---> %d\n", x);

    x = pop(pilha);
    printf("main: pop() ---> %d\n", x);

    //desempilha
    x = pop(pilha);
    x = pop(pilha);
    x = pop(pilha);

    free(pilha);

    return 0;
}

```

### pilha.h

```c
#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED

#define TAMANHO_DADOS_PILHA 100

typedef struct pilhas pilha_t;

/**
  * @brief  Cria uma nova pilha com TAMANHO_DADOS_PILHA inteiros
  * @param	Nenhum
  *
  * @retval pilha_t: ponteiro para uma nova pilha
  */
pilha_t * cria_pilha (void);

/**
  * @brief  Empilha um novo inteiro. 
  * @param dado: inteiro a ser adicionado no topo da pilha
  * @param pilha: pilha criada que receberá o dado.
  *
  * @retval Nenhum
  */
void push(int dado, pilha_t *pilha);

/**
  * @brief Desempilha um inteiro. 
  * @param pilha: pilha criada que retornará o dado.
  *
  * @retval int: valor inteiro do último dado empilhado.
  */ 
int pop(pilha_t *pilha);

#endif // PILHA_H_INCLUDED
```

### pilha.c

```c
#include <stdlib.h>
#include <stdio.h>

#include "pilha.h"

struct pilhas {
    int topo;                       /*!< Índice do vetor que representa o topo da fila */
    int data[TAMANHO_DADOS_PILHA]; /*!< Vetor que manterá os dados. */
};


/**
  * @brief  Cria uma nova pilha com TAMANHO_DADOS_PILHA inteiros
  * @param	Nenhum
  *
  * @retval pilha_t: ponteiro para uma nova pilha
  */
pilha_t * cria_pilha (void)
{
    pilha_t *pilha = (pilha_t*)malloc(sizeof(pilha_t));

    pilha->topo = 0;

    return pilha;
}


/**
  * @brief  Empilha um novo inteiro. 
  * @param dado: inteiro a ser adicionado no topo da pilha
  * @param pilha: pilha criada que receberá o dado.
  *
  * @retval Nenhum
  */
void push(int dado, pilha_t *pilha)
{
    int topo = pilha->topo;

    if (topo > TAMANHO_DADOS_PILHA) {
        fprintf(stderr, "Tamanho maximo da pilha atingido!\n");
        exit(EXIT_FAILURE);
    }

    pilha->data[topo] = dado;
    pilha->topo++;
}

/**
  * @brief Desempilha um inteiro. 
  * @param pilha: pilha criada que retornará o dado.
  *
  * @retval int: valor inteiro do último dado empilhado.
  */ 
int pop(pilha_t *pilha)
{
    int topo = pilha->topo;

    if (topo < 0 || topo > TAMANHO_DADOS_PILHA){
        fprintf(stderr, "Pilha corrompida!\n");
        exit(EXIT_FAILURE);
    }

    if (topo == 0) {
        fprintf(stderr, "pop() em pilha vazia!\n");
        return 0;
    }

    pilha->topo--;
    return pilha->data[topo - 1];
}
```