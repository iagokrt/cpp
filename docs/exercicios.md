# Guia dos exercícios

Este documento resume a organização do repositório e destaca, com mais detalhe, a trilha `2026`, que hoje é a parte mais consistente do material.

## Visão rápida das pastas

| Pasta | Foco principal |
|---|---|
| `01-algoritmos/` | Exercícios iniciais de lógica, entrada, saída e operações simples. |
| `02-atividade-variaveis/` | Operadores, expressões e testes básicos com variáveis. |
| `03-lista-desvio-fluxo/` | Condicionais, classificações e problemas de decisão. |
| `04-loops/` | Repetição, validação de entrada e cálculos iterativos. |
| `05-vetores/` | Vetores, média harmônica, desvio padrão e impressão formatada. |
| `06-nova-lista/` | Funções e exercícios numéricos complementares. |
| `revisao-loops/` | Revisões de laços, recursão e problemas curtos. |
| `2026/` | Trilha mais organizada de estudos por módulo, com listas e apoio teórico. |
| `samples/` | Materiais de referência sobre temas específicos de programação. |

## Trilha `2026`

### `2026/01-introducao`

| Arquivo | Descrição breve |
|---|---|
| `practical.cpp` | Arquivo de prática inicial para testar compilação, execução e estrutura básica de um programa C++. |

### `2026/02-variaveis`

Esta pasta reúne uma sequência numerada de 9 exercícios (`001.cpp` a `009.cpp`) focados em fundamentos.

| Grupo | Conteúdo |
|---|---|
| Entrada e saída | Leitura de dados pelo `cin` e exibição com `cout`. |
| Operações básicas | Soma, subtração, multiplicação, divisão e expressões aritméticas. |
| Argumentos de linha de comando | Exemplos com `argc` e `argv`, como em `001.cpp`. |
| Validação simples | Tratamento básico de parâmetros e uso de conversão com `stoi`. |

Observação: em alguns arquivos há enunciados diretamente no código, o que ajuda a usar a pasta como material de aula.

### `2026/03-funcoes`

Esta pasta contém 10 exercícios (`001.cpp` a `010.cpp`) dedicados ao uso de funções.

| Tema | Exemplos presentes |
|---|---|
| Parâmetros e retorno | Funções que recebem valores e devolvem resultados numéricos. |
| Decomposição de lógica | Separação entre leitura, processamento e saída. |
| Intervalos e médias | Problemas como o de `007.cpp`, que calcula média em um intervalo com regras específicas. |
| Reaproveitamento | Estrutura que já aponta para uma escrita mais modular do código. |

É uma boa pasta para revisar assinatura de função, retorno, precisão numérica e organização do `main`.

### `2026/04-classes-objetos`

Esta é a pasta de orientação a objetos da trilha.

| Item | Descrição |
|---|---|
| `tutorial.md` | Explica a diferença entre declaração de interface e implementação em classes. |
| `_12345/main.cpp` | Exemplo principal de uso de objetos `Point` e `Rectangle`. |
| `_12345/Point.h` e `_12345/Point.cpp` | Declaração e implementação da classe `Point`. |
| `_12345/Rectangle.h` e `_12345/Rectangle.cpp` | Declaração e implementação da classe `Rectangle`. |
| `_12345/hello_world.zip` | Arquivo compactado de apoio presente dentro do exemplo. |

Observação: as pastas `67/` e `89/` existem, mas no estado atual estão vazias.

### `2026/LISTAS`

Material de apoio em PDF para acompanhar a trilha:

| Arquivo | Tema |
|---|---|
| `01_LISTA_INTRO.pdf` | Introdução |
| `02_LISTA_EXP_VARIAVEIS.pdf` | Expressões e variáveis |
| `03_LISTA_FUNCOES.pdf` | Funções |
| `04_LISTA_CLASSES_OBJETOS.pdf` | Classes e objetos |

### `2026/utils`

Pasta com exemplos de apoio e anotações rápidas.

| Arquivo | Descrição breve |
|---|---|
| `argv_types.md` | Resumo sobre tipos e argumentos recebidos por `main`. |
| `entrada_padrao.cpp` | Exemplo de leitura pela entrada padrão. |
| `exemplo_basico.cpp` | Exemplo simples de estrutura de programa. |
| `factorial.cpp` | Implementação de fatorial. |
| `formula_juros_compostos.cpp` | Exemplo com fórmula matemática aplicada. |
| `media_desvioPadrao.cpp` | Estatística básica com média e desvio padrão. |
| `ordenacao_ponteiro.cpp` | Experimentos com ordenação e ponteiros. |
| `ponteiro_referencia.cpp` | Diferença prática entre ponteiro e referência. |
| `emule_robot_pt1.cpp` | Exemplo utilitário específico mantido como estudo. |
| `teoria.md` | Perguntas e respostas sobre compilador, montador, ligador, toolchain e headers. |

## Pastas anteriores

As pastas fora de `2026` continuam úteis como histórico de exercícios e revisão:

- `01-algoritmos/`: primeiros problemas numéricos e geométricos.
- `02-atividade-variaveis/`: testes com operadores e pequenas calculadoras.
- `03-lista-desvio-fluxo/`: decisões com `if`, `else` e problemas clássicos.
- `04-loops/` e `revisao-loops/`: repetição, sentinelas, recursão e validação.
- `05-vetores/` e `06-nova-lista/`: estatística básica, Fibonacci e funções auxiliares.

## Sugestões de melhoria futura

1. Padronizar nomes dos arquivos entre trilhas antigas e a trilha `2026`.
2. Adicionar um enunciado curto no topo de todos os exercícios que ainda não têm descrição.
3. Criar sub-readmes por pasta para facilitar navegação.
4. Indicar quais arquivos já estão prontos para aula, revisão ou refatoração.
