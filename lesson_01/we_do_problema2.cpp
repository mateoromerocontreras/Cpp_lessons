#include <iostream>

int main() {
    int opcion = 0;

    do {
        std::cout << "\n--- MENU ---\n";
        std::cout << "1) Sumar\n";
        std::cout << "2) Dividir\n";
        std::cout << "3) Salir\n";
        std::cout << "Elige una opcion: ";
        std::cin >> opcion;

        if (opcion == 1) {
            double a, b;
            std::cout << "Ingresa dos numeros: ";
            std::cin >> a >> b;
            std::cout << "Resultado suma: " << (a + b) << '\n';
        } else if (opcion == 2) {
            double a, b;
            std::cout << "Ingresa numerador y divisor: ";
            std::cin >> a >> b;

            if (b == 0.0) {
                std::cout << "Error: no se puede dividir entre cero.\n";
            } else {
                double resultado = a / b; // division decimal correcta
                std::cout << "Resultado division: " << resultado << '\n';
            }
        } else if (opcion == 3) {
            std::cout << "Saliendo del programa.\n";
        } else {
            std::cout << "Opcion invalida.\n";
        }

    } while (opcion != 3);

    return 0;
}
