# Questões Teóricas

**3) O que é um compilador? É possível utilizar um mesmo compilador para diferentes computadores?**

    R.: Um compilador é um programa que traduz código fonte escrito em uma linguagem de alto nível para linguagem de máquina. 
    Não, um mesmo compilador geralmente não pode ser usado para diferentes arquiteturas de computador sem modificações, pois cada arquitetura tem sua própria linguagem de máquina.

**4)  O que é um montador?**

    R.: Um montador (assembler) é um programa que converte código escrito em linguagem assembly (linguagem de baixo nível) para código de máquina executável.

**5)  O que é um ligador?**

    R.: Um ligador (linker) é um programa que combina vários arquivos objeto gerados pelo compilador em um único arquivo executável, resolvendo as referências.


**6)  Qual é a diferença entre linguagem assembly, linguagem de alto nível e linguagem de máquina?**

    R.: Linguagem de máquina é binário (0 e 1) executada diretamente pelo processador. 
        Linguagem assembly é uma representação simbólica da linguagem de máquina (usando mnemônicos, instruções da linguagem).
        Linguagens de alto nível (como C++, Python, Java) são mais próximas da linguagem humana, com estruturas condicionais, variáveis e abstrações.


**7)  O que é uma toolchain?**

    R.: Uma toolchain é um conjunto de ferramentas (cadeia de ferramentas) de desenvolvimento que trabalham em conjunto para transformar código fonte em um programa executável. 
    Inclui compilador, montador, ligador e outras ferramentas. 
    Compilação, bundle, linting e testes. Exemplo: run time (node.js, npm) + framework(React, Angular) + bundler(Parcel, Webpack) + linguagem(Ts, Js).


**8)  Qual é a diferença entre um arquivo no formato .cpp e um arquivo no formato .hpp/.h?**

    R.: Arquivos .cpp contêm as funções e código executável. 
    Arquivos .h são arquivos de cabeçalho que contêm declarações das funções, classes, constantes, protótipos, etc.
    A ideia do uso em grandes projetos é para permitir compartilhamento de interfaces entre múltiplos arquivos .cpp e melhorar a organização.


**9)  O que é o protótipo de uma função? Porque declarar o protótipo de uma função?** 

    R.: O protótipo de uma função é sua declaração (assinatura), incluindo nome, tipagem dos parâmetros e tipo de retorno.
    É declarado em arquivos de cabeçalho (.h) para que o compilador conheça a função antes de ser definida e chamada.


**10)  Qual é o ponto de entrada de um programa em C++?**

    R.: O ponto de entrada é a função main(). Todo programa C++ começa a executar por ela. 
    Ela geralmente retorna um int, que representa o código de saída, (semanticamente: se o programa funcionou ou não). 
    Geralmente ela não recebe parâmetros, mas pode receber e passar os: 'argc' e 'argv'
    
    Exemplos: 
        int main() # programa sem argumento de entradas
        int main(int argc, char* argv[]) # programa que recebe argumentos da linha de comando
