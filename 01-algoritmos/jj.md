## 00-algoritmos - respostas

1. Como fazer um omelete de três ovos? Coloque as instruções abaixo em ordem. Note que existem dois tipos de omeletes, normal e com queijo (Livro: Quebre a cabeça! Aprenda a programar):

    k. Quebre 3 ovos em uma vasilha

    c. enquanto os ovos não estão bem batidos:
            j. Bata os ovos.
    
    i. Aqueça a frigideira.

    a. Se o cliente pedir com queijo:
            b. Adicionar queijo

    l. Coloque os ovos na frigideira.

    e. Enquanto os ovos não estão prontos:
            g. Mexa os ovos.

    f. Remova a frigideira do fogo.

    d. Transfira os ovos para o prato.
    
    h. Sirva.

---

2. Elabore um conjunto de instruções/receita (como o exemplo da pesca) para trocar uma lâmpada.

    - Se disjuntor estiver ligado
        - Desligar disjuntor
    - Suba na cadeira ou escada
    - Desenrosque a lambada queimada e segure-a firmemente
    - Desça da cadeira ou escada
    - Reserve a lampada queimada (para descarte)
    - Pegue a nova lampada
    - Suba na cadeira ou escada
    - Enrosque a nova lampada 
    - Desça da cadeira ou escada
    - Se disjuntor estiver desligado
        - Ligue o disjuntor
    - Ligue o interruptor (teste a nova lampada)



3. Elabore um conjunto de instruções para trocar um pneu.

4. João tem três barris. No barril A, que está vazio, cabem 8 litros. No barril B, 5. No Barril C, 3 litros. Que deve ele fazer para deixar os barris A e B com 4 litros cada e o C vazio?

A = capacidade = 8L = estado: vazio -> +3L -> +1L =Res=> 4L
B = capacidade = 5L = estado: 5L -> 4L
C = capacidade = 3L = estado: 3L -> 0L

Esvaziar o barril C, que possui menor capacidade.
Armazenando o conteudo de 3L em barril A, de maior capacidade.
Retirar 1L do barril B, com 5L de conteúdo.
Armazenando 1L do conteúdo em barril A, finalizando os 4L do barril A e finalizando os 4L do barril B. 


5. Considere que uma calculadora comum, de quatro operações, está com as teclas de divisão e multiplicação inoperantes. Escreva soluções que resolvam as expressões matemáticas a seguir usando apenas as operações de adição e subtração.

    a. 12 x 4 =(12+12+12+12)


    b. 23 x 11 = (23+23+23+23+23+23+23+23+23+23+23)

    c. 10 / 2 = 
        (10-2)=8 1º (quociente)
        (8-2)=6  2º (quociente)
        (6-2)=4 3º (quociente)
        (4-2)=2 4º (quociente)
        (2-2)=0 5º (quociente) teste-(0<2) para.
        quociente = 5, resto = 0;
    d. 175 / 7
        


    e. 2^8 = 2*2*2*2*2*2*2*2 

    2^n = 2^n-1 + 2^n-1 (potência nada mais é do que soma repetida em cascata.)

    (2+2) (4+4) (8+8) (16+16) (32+32) (64+64) (128+128)
        2+2 = 4
        4+4 = 8
        8+8 = 16
        16+16 = 32
        32+32 = 64
        64+64 = 128
        128+128 = 256
    ```cpp
    int main() {
        int n = 8; // expo[ent
        int acc = 2; // base - bin

        for (int i = 1; i < n; i++) {
            acc = acc + acc; // SOMA APENAS
            cout <<  i << ": " << acc << endl;
        }

        cout <<  acc << endl;
        return 0;
    }
    // bit shift
    int main() {
        int n = 8;
        int result = 1 << n; // 256
        cout << result  << endl;
    }
    // Desloca 1, 8 vezes;
    // Isso porque deslocar 1 para a esquerda 𝑛 vezes equivale a multiplicar por 2^n.
    ```

notes:
```py
def multiplicar(x, y):
    resultado = x
    for _ in range(y-1):
        resultado += x
    return resultado

def exponenciar(x, y):
    resultado = x
    for _ in range(y-1):
        resultado = multiplicar(resultado, x)
    return resultado

print(f"Seu resultado é: {multiplicar(2, 5)}") # 10
print(f"Seu resultado é: {exponenciar(2, 5)}") # 32
#  obs.: a0 = 1 , ac+1 = ac + ac, entao an= 2n
# google.ia: Essa abordagem pode ser aplicada a qualquer potência. 
# No entanto, para potências com expoentes maiores, este método pode se tornar muito trabalhoso. 
```

---

## 01-algoritmos

1. Construa o pseudocódigo para:

- Dado um número real qualquer, informe qual é o seu dobro.

<pre>
-inicializa numero
-inicializa resultado
-recebe input numerico do numero
-multiplicar numero por 2
-armazena o resultado da multiplicacao de numero por 2
-exibir em tela
</pre>


2. Dadas as medidas de uma sala em metros (comprimento e largura), informe a sua área em metros quadrados.
<pre>
-inicializa comprimento, largura, area
-recebe inputs (numerico) do comprimento e largura
-multiplicar comprimento * largura
-armazena o resultado da multiplicacao na variavel area
-exibir em tela variavel area
</pre>


3. Dados um salário e um percentual de reajuste, calcule o salário reajustado. Considere que o percentual de reajuste é dado por um número real entre 0 e 1. Por exemplo, se o reajuste for de 15%, o usuário deve digitar o número 0.15.

<pre>
-inicializa salario, reajuste percentual(de 0 a 1), salario novo
-recebe inputs (numerico) do salario e do percentual de reajuste (float) 
-(calcular reajuste em valores monetário) => salario + salario*reajuste = novoSalario 
-armazena o resultado na variavel salario novo
-exibir em tela variavel do novo salario
</pre>


4. Dados o valor da compra e o percentual de desconto, calcule o valor a ser pago. Considere que o percentual de desconto é um número real entre 0 e 1.
<pre>
-inicializa valorInicial, percentual Desconto(de 0 a 1), valorFinal
-recebe inputs (numerico) do valorInicial e do percentual de Desconto (float) 
-calcular reajuste em valores monetário - valorInicial - salario*reajuste = novoSalario 
-armazena o resultado na variavel salario novo
-exibir em tela variavel do novo salario.6
</pre>

---

5. Construa o fluxograma (yEd) para:

Leia a cotação do dólar
Leia um valor em dólares
Converta esse valor para Real
Mostre o resultado

---

6. Construa o fluxograma (yEd) para:

Leia 4 (quatro) números
Calcule o quadrado para cada um
Somem todos
Mostre o resultado

---

7. Construa um algoritmo para pagamento de comissão de vendedores de peças. <br>Considere que a comissão será de 5% do total da venda e que você tem seguintes dados:
- Preço unitário da peça
- Quantidade vendida

---
inputs:
Preço unitário da peça (float)
Quantidade vendida (int)
comissao const 5% (0.05) do total da venda;
pagar x a fulano

```cpp
using namespace std; // ou usar como std::cout
void comissao() {
	float unPeca = 2.5;
    int quantidadeVendida = 4;
	
    float comissao = 0;
    
    cout << "Valor unitário da peça=" << unPeca;
  	
    cout << "Quantidade Peças Vendidas=" << quantidadeVendida;
    
    comissao = (unPeca * quantidadeVendida) * 0.05;
   
    return comissao;
}
int main () {
    float resultado = comissao();
    cout << "Comissão=" << resultado << "$";

    return 0;
}
```
