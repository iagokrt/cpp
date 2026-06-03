## main.c

```c
/*
 ============================================================================
 Name        : ordenacao.c
 Author      : Renan Augusto Starke
 Version     :
 Copyright   : Instituto Federal de Santa Catarina
 Description : Exemplo de projeto para benchmark das ordenações
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

/* Funções auxiliares */
#include "utils.h"

/* Include das ordencações */
#include "bubble_sort.h"

/* Tamanho do vetor */
#define TAM_VETOR 10


int main(void) {

	int *vet;

	/* Muda a semente do gerador de número aleatórios */
	srand(getpid()^time(NULL));

	/* Aloca memória do vetor */
	vet = (int *)malloc(sizeof(int) * TAM_VETOR);

	/* Preenche vetor com números aleatórios */
	completar_vetor(vet, TAM_VETOR);

	/* Exibe dados */
	exibir_vetor(vet,TAM_VETOR);

	/* Ordena utilizando Bubble Sort*/
	bubble_sort(vet, TAM_VETOR);

	/* Exibe dados */
	exibir_vetor(vet,TAM_VETOR);

	free(vet);

	return EXIT_SUCCESS;
}
```

### utils.c

```c
/*
 * utils.c
 *
 *  Created on: Aug 5, 2020
 *      Author: Renan Augusto Starke
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Exibe dados de um vetor de inteiros
 * 
 * @param vetor Vetor de inteiros
 * @param tam Tamanho do vetor
 */
void exibir_vetor(int *vetor, int tam){

	int i;

	for (i=0; i < tam; i++)
		printf("[%d] \t %d\n", i, vetor[i]);

	puts("---------------------------");

}

/**
 * @brief Gera números inteiros aleatórios em um vetor
 * 
 * @param vetor Vetor de inteiros
 * @param tam Tamanho do vetor
 */
void completar_vetor(int *vetor, int tam){

	int i;

	for (i=0; i < tam; i++)
		vetor[i] = random();
}
```

### utils.h

```c
/*
 * utils.h
 *
 *  Created on: Aug 5, 2020
 *      Author: Renan Augusto Starke
 */

#ifndef UTILS_H_
#define UTILS_H_

/**
  * @brief  Exibe todos os valores de um vetor de inteiros
  * @param	vetor: referência de um vetor
  *         tam: tamanho do vetor
  *
  * @retval Nenhum
  */
void exibir_vetor(int *vetor, int tam);

/**
  * @brief  Completa com números aleatórios um vetor
  * @param	vetor: referência de um vetor
  *         tam: tamanho do vetor
  *
  * @retval Nenhum
  */
void completar_vetor(int *vetor, int tam);

#endif /* UTILS_H_ */
```

### bubble_sort.c

```c
/*
 * bubble_sort.c
 *
 *  Created on: Aug 5, 2020
 *      Author: Renan Augusto Starke
 */


#include <stdio.h>
#include <stdlib.h>

#include "bubble_sort.h"

/**
 * @brief Ordena um vetor utilizando o algoritmo Bubble Sort
 * 
 * @param vetor Vetor de inteiros
 * @param tam Tamanho do vetor
 */
void bubble_sort(int *vetor, int tam)
{
    int i, j, aux;

    for (i = tam; i > 1; i--) {
        for (j=0; j<i-1; j++) {
            if (vetor[j]>vetor[j+1]) {
                aux = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = aux;
            }
        }
    }
}
```

### bubble_sort.h

```c
/*
 * bubble_sort.c
 *
 *  Created on: Aug 5, 2020
 *      Author: Renan Augusto Starke
 */


#ifndef BUBBLE_SORT_H_INCLUDED
#define BUBBLE_SORT_H_INCLUDED

void bubble_sort(int *vetor, int tam);

#endif // BUBBLE_SORT_H_INCLUDED
```
