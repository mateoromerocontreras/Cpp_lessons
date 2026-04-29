// CODIGO FUENTE DEL PROGRAMA DE C++
// i_do_if_else.cpp   .cpp ES LA TERMINACION DE LOS ARCHIVOS DE C++

#include <iostream>

int main() {

    // VARIABLES
    // HAY DISTINTOS TIPOS DE VARIABLES
    // int: entero
    // double: decimal
    // char: caracter
    // bool: booleano
    // string: cadena de texto
    int puntos1 = 11;
    int puntos2 = 111;


    int edad_alumno = 18;
    int x = 18; // Hay que tratar de ser descriptivos con los nombres de variables

    // TIPO DE DATO NOMBRE DE VARIABLE = VALOR;
    double peso_alumno = 70.5;
    // peso_alumno = 70.5; // Error de compilacion, peso_alumno no esta declarada

    string nombre_alumno; // Asigno tipo de variable

    nombre_alumno = "Mateo"; // Asigno valor a la variable

    // El simbolo = es para asignar valores a una variable

    // Operadores matemáticos + - * / % (division entera) 
    // Operadores de comparacion == != < > <= >=
    // "Mateo" == "Mateo"  -> True











    // Evitamos division entera usando double
    double promedio = (puntos1 + puntos2) / 2.0;
    
    if (puntos1 < 1 || puntos1 > 10 || puntos2 < 1 || puntos2 > 10) {
        std::cout << "Error: los puntos deben estar entre 1 y 10.\n";
    } else {
        if (puntos1 >= 1 && puntos1 <= 10 && puntos2 >=1 && puntos2 <= 10 && promedio >= 9.0) {
        std::cout << "Excelente. Promedio: " << promedio << '\n';
        } else if (puntos1 >= 1 && puntos1 <= 10 && puntos2 >=1 && puntos2 <= 10 && promedio >= 7.0) {
        std::cout << "Aprobado. Promedio: " << promedio << '\n';
        } else {
        std::cout << "Reprobado. Promedio: " << promedio << '\n';
        }
    }
    

    return 0;
}
