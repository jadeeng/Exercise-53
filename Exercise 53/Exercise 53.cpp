// Exercise 53.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
double totalCost(int, double);

int main()
{
    int quantity;
    double unitPrice, totalPrice;

    cout << "Enter the number you want to purchase.";
    cin >> quantity;
    cout << "Enter the value of the item you want to purchase.";
    cin >> unitPrice;
    totalPrice = totalCost(quantity, unitPrice);
    cout << "Total cost is " << totalPrice << ".\n";



    return 0;
}

double totalCost(int q, double uP)
{
    double totalPrice;
    totalPrice = q * uP;
    return totalPrice;

}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
