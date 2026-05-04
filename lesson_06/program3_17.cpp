// This program asks for sales amounts for 3 days. The total
// sales are calculated and displayed in a table.

#include <iostream>

#include <iomanip>

using namespace std;


int main()

{

    double day1, day2, day3, total;


    // Get the sales for each day.

    cout << "Enter the sales for day 1: ";

    cin >> day1;

    cout << "Enter the sales for day 2: ";

    cin >> day2;

    cout << "Enter the sales for day 3: ";

    cin >> day3;

    // Calculate the total sales.
    total = day1 + day2 + day3;

}