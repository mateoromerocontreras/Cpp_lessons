#include <iostream>

int main() {
    int numero = 1;

    // Repite mientras la condicion sea verdadera
    while (numero <= 5) {
        std::cout << "Numero: " << numero << '\n';
        ++numero; // actualizacion para evitar bucle infinito
    }

    return 0;
}
