#include <iostream>
using namespace std;

main()
{
   int price;
   string brand;

   cout << "Enter price: ";
   cin >> price;
   cout << "Enter brand of the dress: ";
   cin >> brand;

   if (price <= 1500 && brand == "breakout")
   {
    cout << "Buy the dress.";
   }
   else
   {
    cout << "Do not buy the dress.";
   }

}