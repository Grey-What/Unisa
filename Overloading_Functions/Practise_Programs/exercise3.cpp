/*Problem Statement
The price of stocks is sometimes given to the nearest eighth of a dollar; for example, 297/8 or
891/2. Write a program that computes the value of the user’s holding of one stock. The program
asks for the number of shares of stock owned, the whole-dollar portion of the price, and the fraction
portion. The fraction portion is to be input as two int values, one for the numerator and one for the
denominator. The program then outputs the value of the user’s holdings. Your program should allow
the user to repeat this calculation as often as the user wishes and will include a function definition
that has three int arguments consisting of the whole-dollar portion of the price and the two
integers that make up the fraction part. The function returns the price of one share of stock as a
single number of type double .
*/
#include <iostream>
#include <iomanip>
using namespace std;

double stockValue(int wholeDollar, int numerator, int denominator)
{
  double pricePerStock = wholeDollar + static_cast<double>(numerator)/denominator;
  return pricePerStock;
}

int main()
{
  int sharesOwned;
  int wholeDollar;
  int numerator;
  int denominator;
  double totalValue;

  while (true)
  {
    cout << fixed << setprecision(2);
    cout << "Enter number of shares owned(0 to quit): ";
    cin >> sharesOwned;
    if (sharesOwned == 0)
      break;
    cout << "Enter the whole-dollar portion of the price: ";
    cin >> wholeDollar;
    cout << "Enter the numerator of the fraction portion of the price: ";
    cin >> numerator;
    cout << "Enter the denominator of the fraction portion of the price: ";
    cin >> denominator;
    totalValue = sharesOwned * stockValue(wholeDollar, numerator, denominator);
    cout << "THe value of the holdings are: " << totalValue << endl;
  }
  return 0;
}
