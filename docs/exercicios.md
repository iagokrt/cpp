# Guia rápido dos exercícios

Este documento resume, de forma breve, o objetivo de cada exercício do repositório e traz observações de estudo/manutenção.

## 01-algoritmos

| Arquivo | Descrição breve | Observações |
|---|---|---|
| `1.cpp` | Calcula o dobro de um número real. | Bom para revisar entrada/saída e tipos reais. |
| `2.cpp` | Calcula área de uma sala a partir de comprimento e largura. | Exercício introdutório de multiplicação e variáveis. |
| `3.cpp` | Calcula salário reajustado por percentual (0 a 1). | Reforça regra de três/percentual com `float`/`double`. |
| `4.cpp` | Calcula valor final após desconto percentual. | Similar ao exercício 3, focado em desconto. |
| `5.cpp` | Conversão de moeda (cotação do dólar e valores). | Útil para reforçar formatação e operações monetárias. |
| `6.cpp` | Lê 4 números e calcula quadrado de cada um. | Pode evoluir para uso de vetores/funções. |
| `7.cpp` | Calcula comissão de vendedor (5% do total). | Bom caso de negócio simples com múltiplas entradas. |

## 02-atividade-variaveis

| Arquivo | Descrição breve | Observações |
|---|---|---|
| `basic-calculator.cpp` | Calculadora básica com operações por modo. | Excelente para treinar `switch`/fluxo condicional. |
| `operators.cpp` | Testes com operadores e variáveis. | Pode ser usado como laboratório rápido de sintaxe. |
| `solution.cpp` | Lista de exercícios com variáveis/expressões. | Arquivo mais “misto”; vale quebrar em funções no futuro. |
| `teste.cpp` | Hello World simples. | Arquivo de teste/validação de ambiente. |

## 03-lista-desvio-fluxo

| Arquivo | Descrição breve | Observações |
|---|---|---|
| `001.cpp` | Informa se número é par/ímpar e positivo/negativo. | Boa prática de condicionais compostas. |
| `002.cpp` | Análise de renda x prestação (aprovação/reprovação). | Regra clássica de crédito simples. |
| `003.cpp` | Verifica se um ano é bissexto. | Pode ser comparado com `009.cpp` (função dedicada). |
| `004.cpp` | Calcula IMC e classifica faixa. | Ideal para revisar cadeias de `if/else if`. |
| `005.cpp` | Verifica divisibilidade por 3 ou 5, mas não por ambos. | Exercício ótimo para lógica booleana (XOR). |
| `006.cpp` | Classificação de triângulo com base em lados. | Reforça validação de condição de existência. |
| `007.cpp` | Cálculo de raízes de equação de 2º grau. | Validação de delta e possíveis raízes. |
| `008.cpp` | (arquivo vazio/no estado atual). | Pendência: implementar enunciado. |
| `009.cpp` | Função que verifica ano bissexto. | Versão funcional/reutilizável do tema de `003.cpp`. |
| `010.cpp` | Verifica se bola cabe em caixa (dimensões). | Problema de comparação geométrica simples. |
| `011.cpp` | Problema de latas/copos quebrados. | Bom para revisar função com retorno. |
| `4_raizes.cpp` | Variação de Bhaskara/raízes. | Similar a `007.cpp`; pode consolidar para evitar duplicação. |
| `exercicio_p1.cpp` | Desconto em combustível por tipo/litros. | Simula problema de prova com regras de negócio. |

## 04-loops

| Arquivo | Descrição breve | Observações |
|---|---|---|
| `44-a-47.cpp` | Divisão com validação de divisor não zero (repetição). | Reforça entrada válida com laços. |
| `48-a-49.cpp` | Média de notas com validação e opção de novo cálculo. | Bom treino de loop com controle por resposta do usuário. |
| `divisao-metodo-sucetivas.cpp` | Divisão sem `/` usando subtrações sucessivas. | Exercício clássico de laços e aritmética inteira. |
| `fatorial.cpp` | Cálculo de fatorial com validação de entrada. | Base para comparar versão iterativa vs recursiva. |

## 05-vetores

| Arquivo | Descrição breve | Observações |
|---|---|---|
| `8vetores.cpp` | Leitura de 10 valores e cálculos sobre o vetor. | Comentário indica exercício incompleto; revisar. |
| `9rect.cpp` | Imprime retângulo de asteriscos por altura/largura. | Mistura laço com “desenho” textual. |
| `10mediaHarmonica.cpp` | Calcula média harmônica de 10 números. | Atenção para divisão por zero nos dados. |
| `11desvioPadrao.cpp` | Calcula desvio padrão de 10 números. | Reforça média, potência e raiz quadrada. |

## 06-nova-lista

| Arquivo | Descrição breve | Observações |
|---|---|---|
| `12-num-impares.cpp` | Função que imprime ímpares até limite informado. | Ótimo para praticar função com parâmetro simples. |
| `13-associacao-resistores.cpp` | Resistência equivalente em série/paralelo. | Inclui regra física útil em forma de função. |
| `14-desvio-padrao.cpp` | Nova versão do cálculo de desvio padrão. | Pode compartilhar lógica com `05-vetores/11desvioPadrao.cpp`. |
| `15-fibo.cpp` | Preenche vetor com sequência de Fibonacci até N. | Boa base para discutir complexidade e limites de tipo. |

## Revisão e arquivos utilitários

| Arquivo | Descrição breve | Observações |
|---|---|---|
| `revisao-loops/5.cpp` | Soma números até o usuário digitar 0. | Loop sentinela clássico. |
| `revisao-loops/6.cpp` | Divisão por subtrações sucessivas (revisão). | Tema repetido para fixação. |
| `revisao-loops/7.cpp` | Fatorial com função recursiva. | Excelente para comparar com versão iterativa. |
| `revisao-loops/8.cpp` | Arquivo vazio/no estado atual. | Pendência de implementação. |
| `revisao-loops/9.cpp` | Arquivo vazio/no estado atual. | Pendência de implementação. |
| `revisao-loops/10.cpp` | Arquivo vazio/no estado atual. | Pendência de implementação. |
| `revisao-loops/11.cpp` | Arquivo vazio/no estado atual. | Pendência de implementação. |
| `revisao-loops/exponential.cpp` | Potência por recursão (`base^exp`). | Bom exercício de recursividade básica. |
| `revisao-loops/teste1.cpp` | Conversão de Celsius para Fahrenheit. | Função simples para praticar assinatura e retorno. |
| `revisao-loops/teste2.cpp` | Cálculo de média com vetor fixo. | Útil para revisar arrays e acumuladores. |
| `hello.cpp` e `main.cpp` | Exemplo inicial/entrada do projeto. | Marca início do repositório e testes iniciais. |

---

## Sugestões rápidas de melhoria futura

1. Criar padrão único de nomes (`snake_case` ou `kebab-case`) para arquivos.
2. Separar exercícios por tema e por nível (iniciante/intermediário).
3. Adicionar um enunciado curto no topo de **todo** arquivo `.cpp`.
4. Padronizar saída e mensagens para facilitar correção automática.
