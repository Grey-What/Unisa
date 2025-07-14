/*Problem Statement
Write a program to gauge the rate of inflation for the past year. The program asks for the price of an
item (such as a hot dog or a 1-carat diamond) both one year ago and today. It estimates the
inflation rate as the difference in price divided by the year-ago price. Your program should allow the
user to repeat this calculation as often as the user wishes. Define a function to compute the rate of
inflation. The inflation rate should be a value of type double giving the rate as a percent, for
example 5.3 for 5.3 percent.
*/
#include <iostream>
#include <iomanip>
using namespace std;

double rateOfInflation(double pastPrice, double currentPrice)
{
  return (currentPrice - pastPrice) / pastPrice;
}

int main()
{
  double pastPrice;
  double currentPrice;
  double inflationRate;

  while (true)
  {
    cout << fixed << setprecision(2);
    cout << "Enter the historic Price of an item a year ago(0 to quit): " << endl;
    cin >> pastPrice;
    if (pastPrice == 0)
      break;
    cout << "Enter the current Price of a item: " << endl;
    cin >> currentPrice;
    inflationRate = rateOfInflation(pastPrice, currentPrice);
    cout << "The estimate inflation rate of the item(%): " << inflationRate * 100 << endl;
  }
  return 0;
}
