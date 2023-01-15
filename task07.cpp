#include <iostream>
using namespace std;
float checkCost(string city , string product, int quantity);

main()
{
    int quantity;
    string city;
    string product;
    float result;
    cout << "Enter the city: ";
    cin >> city;
    cout << "Enter the product: ";
    cin >> product;
    cout << "Enter quantity of product: ";
    cin >> quantity;

    result =checkCost(city , product, quantity);
    cout << result;
}

float checkCost(string city , string product, int quantity)
{
    float price = 0;
    if (city == "sofia" && product == "coffee"){price = quantity*0.50;}
    else if (city == "sofia" && product == "water"){price = quantity*0.80;}
    else if (city == "sofia" && product == "beer"){price = quantity*1.20;}
    else if (city == "sofia" && product == "sweets"){price = quantity*1.45;}
    else if (city == "sofia" && product == "peanuts"){price = quantity*1.60;}

    else if (city == "piovdiv" && product == "coffee"){price = quantity*0.40;}
    else if (city == "piovdiv" && product == "water"){price = quantity*0.70;}
    else if (city == "piovdiv" && product == "beer"){price = quantity*1.15;}
    else if (city == "piovdiv" && product == "sweets"){price = quantity*1.30;}
    else if (city == "piovdiv" && product == "peanuts"){price = quantity*1.50;}

    else if (city == "varna" && product == "coffee"){price = quantity*0.45;}
    else if (city == "varna" && product == "water"){price = quantity*0.70;}
    else if (city == "varna" && product == "beer"){price = quantity*1.10;}
    else if  (city == "varna" && product == "sweets"){price = quantity*1.35;}
    else if (city == "varna" && product == "peanuts"){price = quantity*1.55;}
    return price;
}