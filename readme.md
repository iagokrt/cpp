# Estudos de Programação em C++

Repositório de estudo com exercícios, exemplos e materiais de apoio para prática de programação em C++. O conteúdo mistura trilhas antigas de lógica com uma organização mais recente na pasta `2026`, que hoje é a parte mais estruturada do projeto.

## Documentação

- Guia atualizado dos exercícios: [`docs/exercicios.md`](docs/exercicios.md)

## Visão geral da estrutura

```text
cpp/
├── 01-algoritmos/
├── 02-atividade-variaveis/
├── 03-lista-desvio-fluxo/
├── 04-loops/
├── 05-vetores/
├── 06-nova-lista/
├── 2026/
├── docs/
├── revisao-loops/
├── samples/
├── hello.cpp
├── main.cpp
└── readme.md
```

## Destaque: pasta `2026`

A pasta `2026` concentra uma trilha mais organizada de estudo, separada por assunto e acompanhada de listas em PDF e arquivos utilitários.

### Organização interna

- `2026/01-introducao/`
  Arquivo inicial com prática básica de compilação e execução.
- `2026/02-variaveis/`
  Série numerada de exercícios (`001.cpp` a `009.cpp`) voltados a entrada, saída, operações, argumentos de linha de comando e manipulação de valores.
- `2026/03-funcoes/`
  Série numerada de exercícios (`001.cpp` a `010.cpp`) com foco em criação de funções, decomposição de problemas e reaproveitamento de lógica.
- `2026/04-classes-objetos/`
  Material de orientação a objetos, incluindo o tutorial [`2026/04-classes-objetos/tutorial.md`](2026/04-classes-objetos/tutorial.md) e um exemplo completo em `_12345/` com `Point`, `Rectangle`, headers e implementações separadas.
- `2026/LISTAS/`
  PDFs das listas da trilha:
  `01_LISTA_INTRO.pdf`, `02_LISTA_EXP_VARIAVEIS.pdf`, `03_LISTA_FUNCOES.pdf` e `04_LISTA_CLASSES_OBJETOS.pdf`.
- `2026/utils/`
  Exemplos auxiliares e anotações de apoio sobre entrada padrão, ponteiros, argumentos de `main`, ordenação, fatorial, juros compostos e teoria geral.

### O que a trilha 2026 cobre

- Introdução à linguagem e ao fluxo básico de compilação.
- Variáveis, expressões e argumentos por linha de comando.
- Funções com parâmetros e retorno.
- Classes, objetos, separação entre interface e implementação.
- Material complementar para consulta rápida durante os estudos.

## Trilhas anteriores

As demais pastas do repositório preservam exercícios de fases anteriores do estudo:

- `01-algoritmos/` e `02-atividade-variaveis/`: primeiros exercícios de entrada, saída e operadores.
- `03-lista-desvio-fluxo/`: problemas com condicionais.
- `04-loops/` e `revisao-loops/`: laços, validação e repetição.
- `05-vetores/` e `06-nova-lista/`: arrays, estatística básica e funções.
- `samples/`: materiais de referência e exemplos mais conceituais.

## Como compilar e executar

### Linux / macOS

```bash
g++ caminho/arquivo.cpp -o programa
./programa
```

### Windows (MinGW)

```bash
g++ caminho\\arquivo.cpp -o programa.exe
./programa.exe
```

Para validar o ambiente, rode:

```bash
g++ --version
```

## Objetivo do repositório

- Manter exercícios curtos e progressivos para praticar C++.
- Organizar melhor os estudos por tema e por etapa.
- Usar a pasta `2026` como trilha principal de evolução do conteúdo.
