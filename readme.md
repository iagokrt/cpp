# Estudos de Lógica em C++  

Repositório criado para estudos de lógica de programação utilizando **C++**.  
Aqui estarão disponíveis programas simples, cada um resolvendo um problema específico.  

- O primeiro commit contém apenas o clássico **Hello World**.  
- Novos exercícios serão adicionados conforme avanço nos estudos.  
- Os arquivos `.exe` (binários compilados) **não estão versionados** (ignorados pelo `.gitignore`).  

---

## 🚀 Como rodar os exemplos

### 1. Instalar o compilador `g++`

#### Windows
1. Baixe o **MinGW-w64** em: [https://winlibs.com](https://winlibs.com)  
2. Extraia em uma pasta, ex: `C:\mingw64`  
3. Adicione no **PATH** do sistema:  
4. Abra o **Prompt de Comando** e verifique:
```bash
g++ --version
```
### 2. Compilar e rodar

Navegue até a pasta do repositório e compile qualquer arquivo .cpp:
```bash
g++ nome_do_arquivo.cpp -o program
./programa
```
No Windows, o comando para executar será:
```bash
./program.exe
```

## 📂 Estrutura do Repositório

Por enquanto, todos os arquivos .cpp ficam soltos no root da pasta cpp:
```plaintext
cpp/
├── hello.cpp        # primeiro commit
├── outro_exemplo.cpp
└── ...
```
## 📌 Próximos Passos

- Adicionar novas resoluções de problemas em C++.

- Possivelmente organizar em subpastas futuramente (ex: basico/, estruturas/, etc).