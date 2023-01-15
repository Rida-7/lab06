#include <iostream>
using namespace std;
float lowestPrice(int kms, string period);
main()
{
    int kms;
    string period;
    float price;

    cout << "Enter number of kilometers: ";
    cin >> kms;
    cout << "Travelling during: ";
    cin >> period;

    price = lowestPrice(kms, period);
    cout << "Lowest price will be: " << price;


}

float lowestPrice(int kms, string period)
{
    float result;
    if (kms < 20 && period == "day" )
    {
        result = (kms*0.79)+0.70;
    }
    else if (kms < 20 && period == "night")
    {
        result = (kms*0.90)+0.70;
    }
    else if (kms > 20 && kms < 100)
    {
        result = kms*0.09;
    }
    else
    {
        result = kms*0.06;
    }
    return result;
}