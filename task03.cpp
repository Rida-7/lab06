#include <iostream>
using namespace std;

string checkTitle(char gender, int age);
main()
{
    char gender;
    int age;
    string result;
    cout << "Enter age: ";
    cin >> age ;
    cout << "Enter gender: ";
    cin >> gender;

    result = checkTitle(gender, age);
    cout << result;

}

string checkTitle(char gender, int age)
{
    string result;
    if (gender == 'm' && age >= 16)
    {
        result = "Mr.";
    }
    else if (gender == 'm' && age < 16)
    {
        result = "Master";
    }
    else if (gender == 'f' && age >= 16)
    {
        result = "Ms.";
    }
    else if (gender == 'f' && age < 16)
    {
        result = "Miss";
    }
    else 
    {
        result = "Invalid input";
    }
    return result;
}