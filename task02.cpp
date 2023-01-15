#include <iostream>
using namespace std;
float discount (string day, string month, float amount);

main ()
{
    string day, month;
    float amount;
    float result;

    cout << "Enter day: ";
    cin >> day;
    cout << "Enter month: ";
    cin >> month;
    cout << "Enter the total amount: ";
    cin >> amount;

    result = discount(day, month, amount);
    cout << "Payable Amount is: " << result;

}

float discount(string day, string month, float amount)
{
    float disc;
    float payable = amount;
    if (day == "sunday" && ( month == "october" || month == "march" || month == "august"))
    {
        disc = 0.1*amount;
        payable = amount - disc;
    }
    else if (day == "monday" && (month == "november" || month =="december" ))
    {
        disc = 0.05*amount;
        payable = amount - disc;
    }
    else 
    {
        payable = amount;
    }
    return payable;
}