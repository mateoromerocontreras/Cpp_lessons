#include <iostream>

int main() {
    int opcion = 0;

    // Se ejecuta al menos una vez, luego valida
    do {
        std::cout << "Ingrese una opcion entre 1 y 3: ";
        std::cin >> opcion;
    } while (opcion < 1 || opcion > 3);

    std::cout << "Opcion valida: " << opcion << '\n';
    return 0;
}
