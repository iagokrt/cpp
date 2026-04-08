# Conversões string ↔ número em C++

## 1. C++ moderno (`<string>`)

| Função | Converte para |
|---|---|
| `stoi` | `int` |
| `stol` | `long` |
| `stoll` | `long long` |
| `stoul` | `unsigned long` |
| `stoull` | `unsigned long long` |
| `stof` | `float` |
| `stod` | `double` |
| `stold` | `long double` |

### Exemplo

```cpp
#include <string>
#include <iostream>

int main() {
    int a = std::stoi("42");
    double b = std::stod("3.14");
    float c = std::stof("2.5");

    std::cout << a << " " << b << " " << c << std::endl;
}
```
