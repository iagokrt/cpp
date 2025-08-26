# Exercícios

- Defina uma nova estrutura, chamada pessoa, que contenha uma string nome e um inteiro idade:

  <i>Estruturas em C são variáveis que agrupam dados de diferentes tipos. As estruturas são utilizadas para a criação de objetos e classes para formar novos tipos de dados customizados.</i>

```c
#include <stdio.h>

/* Defina a estrutura pessoa aqui */


int main() {
    struct pessoa john;

    /* testando o código */
    scanf("%s %d", john.nome, &john.idade)

    printf("%s tem %d anos.", john.nome, john.idade);
}
```

- Assumindo a declaração typedef e o vetor de estruturas, complete a função "imprime_dados":
```c
#include <stdio.h>

/* Criação da estrutura utilizando o alias typedef */
typedef struct dados {
     char nome[20];
     float altura;
     float peso;
} pessoa_t;


/* Passagem de parâmetros por vetor para n pessoas */
void entrar_dados(pessoa_t *vetor_dados, int n){
    int i;

    for (i=0; i < n; i++){
        puts("Entre com nome (string), altura (float) e peso(float) separados por espaços");
        scanf("%20s %f %f", vetor_dados[i].nome, &vetor_dados[i].altura, &vetor_dados[i].peso);
    }
}

void imprime_dados(pessoa_t *vetor_dados, int n){

    int i;

    //for (i=0; ...)

}


int main() {
    pessoa_t dados_de_pessoas[10];

    /* Entra com os dados manualmente */
    entrar_dados(dados_de_pessoas, 10);

    imprime_dados(dados_de_pessoas, 10);

    return 0;
}
```