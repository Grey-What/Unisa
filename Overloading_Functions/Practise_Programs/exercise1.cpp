/* Problem Statement
A liter is 0.264179 gallons. Write a program that will read in the number of liters of gasoline
consumed by the user’s car and the number of miles traveled by the car and will then output the
number of miles per gallon the car delivered. Your program should allow the user to repeat this
calculation as often as the user wishes. Define a function to compute the number of miles per
gallon. Your program should use a globally defined constant for the number of liters per gallon.
*/

#include <iostream>
using namespace std;

const double LITERS_PER_GALLON = 0.264179;

double milesPergallon(double litersConsumed, double milesTraveled)
{
  return (milesTraveled / litersConsumed) * LITERS_PER_GALLON;
}

int main()
{
  double litersConsumed;
  double milesTraveled;
  double mpg;

  while (true)
  {
    cout << "Enter the liters of gasoline consumed by the car(0 to quit): ";
    cin >> litersConsumed;
    cout << "Enter the miles traveled by the car(0 to quit): ";
    cin >> milesTraveled;

    if (litersConsumed == 0 && milesTraveled == 0)
    {
      break;
    }
    mpg = milesPergallon(litersConsumed, milesTraveled);
    cout << "Miles per galllon: " << mpg << endl;
  }
  return 0;
}
