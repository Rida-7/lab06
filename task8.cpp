#include <iostream>
using namespace std;

float budget(int amount, int people);
float hg(int people, string category, int amount);
main()
{
    string category;
    int amount, people;
    float result, remain, price;

    cout << "Enter the Budget: ";
    cin >> amount;
    cout << "Enter the category: ";
    cin >> category;
    cout << "Enter the number of people: ";
    cin >> people;
    remain =budget(amount, people);
    result = hg(people, category, amount);
    if (remain < result)
    {
        price = result - remain;
        cout << "Not Enough Money! You need " << price << " QR" << endl;
    }
    else if (result < remain)
    {
        price = remain - result;
        cout << "Yes! You have " << price << " QR left" << endl;
    }


}

float budget(int amount, int people)
{ 
    float rupees, rem;
    if (people >= 1 && people <= 4 )
    {
        rupees = 0.75*amount;
        rem = amount - rupees;
    }
    else if (people >= 5 && people <= 9)
    {
         rupees = 0.6*amount;
         rem = amount - rupees;
    }
    else if (people >= 10 && people <= 24)
    {
        rupees = 0.5*amount;
        rem = amount - rupees;
    }
    else if (people >= 25 && people <= 49)
    {
        rupees = 0.4*amount;
        rem = amount - rupees;
    }
    else if (people > 49)
    {
        rupees = 0.25*amount;
        rem = amount - rupees;
    }
    return rem ;
}

float hg(int people, string category, int amount)
{

    float tkt;
    if (category == "VIP")
    {
        tkt = (499.99*people);
    }
    else if (category == "normal")
    {
        tkt = (249.99*people);
    }
    return tkt;

}