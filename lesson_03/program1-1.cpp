// This program calculates the user's pay.
// De que está hecho un programa:
// Palabras clave/reservadas: using, namespace, int, double, return, etc.
// Identificadores definidos por el programador (variables, funciones, clases, etc.)
// Operadores
// Puntuación
// Sintaxis: reglas para escribir código correcto
#include <iostream> // Include es una palabra reservada
using namespace std; // Using es otra palabra reservada

int main()
{
    // double hours, rate, pay;
    double hours; // nombre tiene que tener relaviancia para el programador entienda que guarda la variable
    double rate;
    double pay;

    // Tipo de dato
    int age; // numero entero para la edad, puede ser positivo o negativo
    char letra; // un solo caracter, letra, numero o simbolo
    bool booleano; // true o false, 1 o 0
    string nombre; // cadena de texto, puede contener espacios, numeros, simbolos, etc.

    // Ejemplos
    age = 25;
    letra = 'A'; // Las variables tipo char utilizan ' ' 
    booleano = true;
    booleano = false;
    booleano = 1; // true
    booleano = 0; // false
    cout << "Enter your age: ";
    cin >> age; 

    string firstName;
    cout << "Enter your first name: ";
    cin >> firstName; // cin solo lee hasta el primer espacio, para leer una cadena completa con espacios se puede usar getline(cin, nombre);
    cout << "Hello, " << firstName << "!" << endl;

    // Get the number of hours worked.
    cout << "How many hours did you work? \n"; // \n es un salto de linea
    cout << "Input work hours: ";
    cin >> hours;

    // Get the hourly pay rate.
    cout << "How much do you get paid per hour? ";
    cin >> rate;

    // Calculate the pay.
    pay = hours * rate;

    // Display the pay.
    cout << "You worked " << hours  << endl;
    cout << "Your hourly rate is $" << rate << endl;
    cout << "You have earned $" << pay << endl; // endl es una linea en blanco
    return 0;
}

// Both main memory and secondary storage are types of memory. Describe the difference between the two.
// What is the difference between a syntax error and a logical error?
// Explain the difference between an object file and an executable file

// The difference between an object file and an executable file is that an object file is the output 
// of the compilation process, containing machine code that is not yet linked, while an executable file
// is the final output after linking, which can be run directly by the operating system.
