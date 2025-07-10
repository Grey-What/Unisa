/*Problem Statement
If computing the statement: x = (x * y / z); how can you use the assert macro to avoid
division by zero?
*/
#include <iostream>
#include <cassert>
using namespace std;

double div(double x, double y, double z)
{
  assert(z != 0);
  x = (x * y / z);

  return x;
}