#include <iostream>
using namespace std;
char grade(int num);

main()
{
    int num;
    char result;

    cout << "Enter number: ";
    cin >> num;

    result = grade(num);
    cout << result ;

}

char grade(int num)
{
    char grade;
    if (num < 50 )
    {
        grade = 'F';
    }
    else if (num > 51 && num <= 60)
    {
        grade = 'E';
    }
    else if (num >= 61 && num <= 70)
    {
        grade = 'D';
    }
    else if (num >= 71 && num <= 80)
    {
        grade = 'C';
    }
    else if (num >= 81 && num <= 85)
    {
        grade = 'B';
    }
    else
    {
        grade = 'A';
    }
    return grade;
}