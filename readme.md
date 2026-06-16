# C++ studies

Repositorio de estudos e exercicios em C++.

## Estrutura

```text
cpp/
├── 2026/          # trilha principal
├── 2026_backup/   # copia historica, manter como esta
├── etc/           # exercicios antigos, exemplos e materiais soltos
├── run-cpp.cmd    # helper para compilar e executar pelo CMD
└── readme.md
```

## Trilha principal

A pasta `2026` concentra o material atual, organizado por tema:

- `01-introducao`
- `02-variaveis`
- `03-funcoes`
- `04-classes-objetos`
- `05-vetores-matrizes`
- `06-strings`
- `07-structs`
- `08-bitwise`
- `09-ponteiros`
- `10-alloc`
- `LISTAS`
- `L_slides`
- `PROVA`
- `utils`

## Executar um arquivo

Com o terminal dentro da pasta do `.cpp`, use:

```cmd
run-cpp 08.cpp
```

O helper compila com `g++` e executa o `.exe` gerado na mesma pasta.

Para esse comando funcionar de qualquer subpasta, adicione a raiz do projeto ao `PATH`:

```text
C:\Users\8128\Desktop\dev\tcesc-git\cpp
```

## Compilacao manual

```cmd
g++ -g 08.cpp -o 08.exe
08.exe
```

## Observacoes

- `2026` e a trilha ativa.
- `2026_backup` e historico e nao deve ser reorganizado.
- `etc` guarda material antigo e exemplos auxiliares.
