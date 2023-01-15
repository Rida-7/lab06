#include <iostream>
#include <cmath>
using namespace std;

float football(string year, int holidays, int weekends);
main()
{
    string year;
    int holidays, weekends;
    float result;

    cout << "Enter the year normal or leap: ";
    cin >> year;
    cout << "Enter the number of holidays: ";
    cin >> holidays;
    cout << "Enter the number of weekend he goes home: ";
    cin >> weekends;

    result = football(year, holidays, weekends);
    result = floor(result);
    cout << result;



}

float football(string year, int holidays, int weekends)
{
        float playTime;
        float onWeekends;
        float total=0;
        onWeekends = 48 - weekends;
        playTime = ((3*onWeekends)/4) + ((2*holidays/3));
        total = weekends + playTime ;
        if (year == "leap")
        {
            total = (0.15*total)+total;
        }
        else 
        {
            total = weekends + playTime;
        }

    return total;
}