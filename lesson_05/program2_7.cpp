/*

    Write assignment statements that perform the following operations with the variables
    a, b, and c:
    A) Adds 2 to a and stores the result in b.
    B) Multiplies b by 4 and stores the result in a.
    C) Divides a by 3.14 and stores the result in b.
    D) Subtracts 8 from b and stores the result in a.
    E) Stores the value 27 in a.
    F) Stores the character ‘K’ in c.

*/

#include <iostream>
using namespace std;

int main()
{
    int a;
    float b;
    char c;

    // A) Adds 2 to a and stores the result in b.
    a = 5; // Example value for a
    b = a + 2;

    // B) Multiplies b by 4 and stores the result in a.
    a = b * 4;

    // C) Divides a by 3.14 and stores the result in b.
    b = a / 3.14; // Using static_cast to convert to int

    // D) Subtracts 8 from b and stores the result in a.
    a = b - 8;

    // E) Stores the value 27 in a.
    a = 27;

    // F) Stores the character ‘K’ in c.
    c = 'K';

    // Displaying the results
    cout << "Value of a: " << a << endl;
    cout << "Value of b: " << b << endl;
    cout << "Value of c: " << c << endl;

    return 0;
}