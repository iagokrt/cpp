#include <iostream>

int main() {

    int vet[10];
    int index = 0;

    for (int i = 2; i <= 20; i++) {
        vet[index] = i;
        index++;
    }

    for (int n = 0; n < 10; n++) {
        std::cout << vet[n] << std::endl;
    }

    return 0;
}