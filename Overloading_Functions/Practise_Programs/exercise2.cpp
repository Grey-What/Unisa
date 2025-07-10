/* Problem Statement
Modify your program from Practice Program 1 so that it will take input data for two cars and output
the number of miles per gallon delivered by each car. Your program will also announce which car
has the best fuel efficiency (highest number of miles per gallon).
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
  double litersConsumed1;
  double milesTraveled1;
  double litersConsumed2;
  double milesTraveled2;
  double mpg1;
  double mpg2;

  while (true)
  {
    cout << "Enter the liters of gasoline consumed by the car 1(0 to quit): ";
    cin >> litersConsumed1;
    cout << "Enter the miles traveled by the car(0 to quit): ";
    cin >> milesTraveled1;
    cout << "Enter the liters of gasoline consumed by the car 2(0 to quit): ";
    cin >> litersConsumed2;
    cout << "Enter the miles traveled by the car2(0 to quit): ";
    cin >> milesTraveled2;
    if (litersConsumed1 == 0 || milesTraveled1 == 0 || litersConsumed2 == 0 || milesTraveled2 == 0)
    {
      break;
    }
    mpg1 = milesPergallon(litersConsumed1, milesTraveled1);
    mpg2 = milesPergallon(litersConsumed2, milesTraveled2);
    cout << "Miles per galllon for car 1: " << mpg1 << endl;
    cout << "Miles per galllon for car 2: " << mpg2 << endl;
    if (mpg1 > mpg2)
      cout << "Car 1 has the best fuel effiecency" << endl;
    else
      cout << "Car 2 has the best fuel effiecency" << endl;
  }
  return 0;
}
