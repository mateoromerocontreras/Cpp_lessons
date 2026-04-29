#include <iostream>

int main() {
    double saldo;
    std::cout << "Saldo inicial: ";
    std::cin >> saldo;

    double sumaRetiros = 0.0;
    int retirosValidos = 0;

    for (int intento = 1; intento <= 3; ++intento) {
        double monto;
        std::cout << "Retiro #" << intento << ": ";
        std::cin >> monto;

        if (monto > 0.0 && monto <= saldo) {
            saldo -= monto;
            sumaRetiros += monto;
            ++retirosValidos;
            std::cout << "Retiro aprobado.\n";
        } else {
            std::cout << "Retiro rechazado.\n";
        }
    }

    double promedio = 0.0;
    if (retirosValidos > 0) {
        promedio = sumaRetiros / static_cast<double>(retirosValidos);
    }

    std::cout << "Saldo final: " << saldo << '\n';
    std::cout << "Retiros validos: " << retirosValidos << '\n';
    std::cout << "Promedio de retiros validos: " << promedio << '\n';

    return 0;
}
