## 3) O que é um compilador? É possível utilizar um mesmo compilador para diferentes computadores?

Compilador é o programa que traduz código-fonte (C++, por exemplo) para código de máquina executável.

Exemplo:

```cpp
int main() {
    return 0;
}
```

vira instruções que o processador entende.

Sim, o mesmo compilador pode ser usado em computadores diferentes, desde que exista uma versão compatível para aquele sistema e arquitetura. Exemplo: GCC para Windows, Linux e macOS.

---

## 4) O que é um montador?

Montador (*assembler*) é o programa que traduz código Assembly para linguagem de máquina.

Exemplo:

```asm
MOV AX, 10
```

vira os bytes correspondentes que a CPU executa.

Fluxo:

```text
Assembly -> Montador -> Código de máquina
```

---

## 5) O que é um ligador?

Ligador (*linker*) é o programa que junta vários arquivos objeto e bibliotecas para gerar o executável final.

Exemplo:

```text
main.cpp
soma.cpp
```

Compilam separadamente:

```text
main.o
soma.o
```

O linker junta tudo:

```text
programa.exe
```

Também resolve chamadas de funções entre arquivos.

---

## 6) Qual é a diferença entre linguagem assembly, linguagem de alto nível e linguagem de máquina?

| Tipo | Exemplo | Quem entende |
|--------|----------|--------------|
| Linguagem de máquina | 10110010... | CPU |
| Assembly | MOV AX,10 | Montador |
| Alto nível | C++, Java, Python | Compilador/Interpretador |

**Máquina:** binário puro.

**Assembly:** quase uma representação textual das instruções da CPU.

**Alto nível:** mais próximo da linguagem humana e mais independente do hardware.

---

## 7) O que é uma toolchain?

É o conjunto de ferramentas usadas para transformar código-fonte em executável.

Normalmente:

```text
Editor
↓
Compilador
↓
Montador
↓
Ligador
↓
Executável
```

Exemplo de toolchain C++:

- GCC (compilador)
- Assembler (montador)
- Linker (ligador)
- GDB (depurador)

---

## 8) Qual é a diferença entre um arquivo .cpp e um arquivo .hpp/.h?

### Arquivo .cpp

Contém a implementação das funções e o código executável.

Exemplo:

```cpp
int soma(int a, int b) {
    return a + b;
}
```

### Arquivo .h ou .hpp

Contém declarações, protótipos e definições compartilhadas.

Exemplo:

```cpp
int soma(int a, int b);
```

Regra prática:

```text
.h/.hpp → o que existe
.cpp    → como funciona
```

---

## 9) O que é o protótipo de uma função? Por que declarar o protótipo?

Protótipo é a declaração da função antes de sua utilização.

Exemplo:

```cpp
int soma(int, int);
```

Depois:

```cpp
int main() {
    soma(1, 2);
}

int soma(int a, int b) {
    return a + b;
}
```

Serve para informar ao compilador:

- Nome da função;
- Tipo de retorno;
- Quantidade e tipos dos parâmetros.

Sem o protótipo, o compilador pode não saber que a função existe quando ela for chamada.

---

## 10) Qual é o ponto de entrada de um programa em C++?

É a função `main()`.

Exemplo:

```cpp
int main() {
    return 0;
}
```

ou

```cpp
int main(int argc, char* argv[]) {
    return 0;
}
```

A execução do programa sempre começa pela função `main()`.

Fluxo:

```text
Sistema Operacional
        ↓
      main()
        ↓
 restante do programa
```