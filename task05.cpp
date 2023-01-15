#include <iostream>
using namespace std;

float totalIncome(string screen, int rows, int coulumns);
main()
{
    string screen;
    int rows, coulumns;
    float total;


    cout << "Enter the type of screening: ";
    cin >> screen;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of coulumns: ";
    cin >> coulumns;

    total = totalIncome(screen, rows, coulumns);
    cout << "Total income is: " << total << endl;

}

float totalIncome(string screen, int rows, int coulumns)
{
    float result;
    if (screen == "premiere")
    {
        result = rows*coulumns*12.00;
    }
    else if (screen == "normal")
    {
        result = rows*coulumns*7.5;
    }
    else if (screen == "discount")
    {
        result = rows*coulumns*5.00;
    }
    return result;
}