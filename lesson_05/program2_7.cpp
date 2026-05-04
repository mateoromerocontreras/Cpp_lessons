/*
    Write assignment statements that perform the following operations with the variables
    a, b, and c:
    A) Adds 2 to a and stores the result in b.
    int a, b;
    b = a + 2;
    B) Multiplies b by 4 and stores the result in a.
    a = b * 4;
    OPERADORES
    + - * /
    % operador módulo, guarda el resto de la división
    a = 4 * b;
    C) Divides a by 3.14 and stores the result in b.
    D) Subtracts 8 from b and stores the result in a.
    E) Stores the value 27 in a.
    F) Stores the character ‘K’ in c.
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    float a;
    float b;
    string c;

    // A) Adds 2 to a and stores the result in b.
    a = 5; // Example value for a
    b = a + 2;
    cout << "After A) b = a + 2: " << b << endl;
    cout << "Value of a: " << a << endl;

    // B) Multiplies b by 4 and stores the result in a.
    a = b * 4;
    cout << "After B) a = b * 4: " << a << endl;

    // C) Divides a by 3.14 and stores the result in b.
    b = a / 3.14; 
    cout << "After C) b = a / 3.14: " << b << endl;

    // D) Subtracts 8 from b and stores the result in a.
    a = b - 6;
    cout << "After D) a = b - 6: " << a << endl;

    // E) Stores the value 27 in a.
    a = 27.1;
    cout << "After E) a = 27: " << a << endl;

    // F) Stores the character ‘K’ in c.
    c = "K";
    // string = "K /0"; ocupa cantidad de bytes de la cadena + 1
    // char c = 'K'; ocupa un solo byte 

    // Displaying the results
    cout << "Value of a: " << a << endl;
    cout << "Value of b: " << b << endl;
    cout << "Value of c: " << c << endl;

    return 0;
}