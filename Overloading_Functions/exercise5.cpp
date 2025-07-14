/*Problem Statement
Enhance your program from the previous Practice Program by having it also print out the estimated
price of the item in one and in two years from the time of the calculation. The increase in cost over
one year is estimated as the inflation rate times the price at the start of the year. Define a second
function to determine the estimated cost of an item in one year, given the current price of the item
and the inflation rate as arguments.
*/
#include <iostream>
#include <iomanip>
using namespace std;

double futurePrice(double currentPrice, double inflationRate)
{
  return currentPrice * (1 + inflationRate);
}

double rateOfInflation(double pastPrice, double currentPrice)
{
  return (currentPrice - pastPrice) / pastPrice;
}

int main()
{
  double pastPrice;
  double currentPrice;
  double inflationRate;
  double newPrice;

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
    newPrice = futurePrice(currentPrice, inflationRate);
    cout << "Estimate cost of item in 1 year: " << newPrice << endl;
    cout << "Estimate cost of item in 2 years: " << futurePrice(newPrice, inflationRate) << endl;
  }
  return 0;
}
