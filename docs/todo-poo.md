# TODO — Exercícios de Orientação a Objetos (C++)

Checklist sugerido para evolução do repositório em POO.

## Nível 1 — Fundamentos

- [ ] **Classe `Pessoa`**: atributos privados (`nome`, `idade`), construtor e método `apresentar()`.
- [ ] **Classe `Retangulo`**: métodos `area()` e `perimetro()`, com encapsulamento.
- [ ] **Classe `ContaBancaria`**: `depositar`, `sacar`, `consultarSaldo` com validações.
- [ ] **Classe `Produto`**: cálculo de preço final com desconto e imposto.
- [ ] **Classe `Aluno`**: armazenar notas e calcular média/situação.

## Nível 2 — Pilares da POO

- [ ] **Herança simples**: `Funcionario` -> `Gerente` e `Desenvolvedor`.
- [ ] **Polimorfismo**: método virtual `calcularBonus()` para diferentes cargos.
- [ ] **Abstração**: classe abstrata `Forma` com `area()` e `perimetro()`.
- [ ] **Encapsulamento forte**: uso consistente de `private` + getters/setters com validação.
- [ ] **Sobrecarga**: construtores e métodos sobrecarregados em uma classe utilitária.

## Nível 3 — Prática aplicada

- [ ] **Sistema de biblioteca** (`Livro`, `Usuario`, `Emprestimo`).
- [ ] **Sistema de estoque** com classes de domínio e movimentações.
- [ ] **Jogo simples de RPG** com `Personagem`, `Inimigo`, `Item` e combate.
- [ ] **Agenda de contatos** orientada a objetos com persistência em arquivo.
- [ ] **Simulador de carrinho de compras** com composição (`Carrinho` contém `Item`).

## Nível 4 — C++ moderno aplicado à POO

- [ ] Usar `std::vector` e `std::string` em todas as entidades.
- [ ] Aplicar `const correctness` em métodos que não alteram estado.
- [ ] Introduzir `smart pointers` (`std::unique_ptr` / `std::shared_ptr`) em cenários adequados.
- [ ] Separar em `.h` e `.cpp` (interface/implementação).
- [ ] Criar mini suíte de testes (ex.: `doctest` ou `Catch2`) para ao menos 1 projeto OO.

## Critérios de pronto (Definition of Done)

- [ ] Cada exercício possui enunciado no topo do arquivo.
- [ ] Cada exercício compila com `g++` sem warnings críticos.
- [ ] Pelo menos 2 casos de teste manuais documentados por exercício.
- [ ] Código formatado e com nomes consistentes.
