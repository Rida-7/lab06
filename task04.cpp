#include <iostream>
using namespace std;
string checkSpeed(float speed);

main()
{
    float speed;
    string result;
    cout << "Enter speed: ";
    cin >> speed;

    result = checkSpeed(speed);
    cout << result;
}

string checkSpeed(float speed)
{
    string result;
    if (speed <= 10)
    {
        result = "SLOW";
    }
    else if (speed > 10 && speed <=50)
    {
        result = "AVERAGE";
    }
    else if (speed > 50 && speed <= 150)
    {
        result = "FAST";
    }
    else if (speed > 150 && speed <= 1000)
    {
        result = "ULTRA FAST";
    }
    else 
    {
      result = "EXTREMELY FAST";
    }
    return result;
}