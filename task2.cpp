#include <iostream>
using namespace std;

bool isSame(int num1 , int num2, int num3);
main()
{
    int num1;
    int num2;
    int num3;
    bool result;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter third number: ";
    cin >> num3;

    result = isSame(num1, num2, num3);
    
    if (result == true)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }

}

bool isSame(int num1, int num2, int num3)
{
    bool same;
    if (num1 == num2 && num2 == num3)
    {
        same = true;
    }
    else
    {
        same = false ;
    }
    return same;
}