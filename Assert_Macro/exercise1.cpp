/*Problem Statement

Newton's method to calculate the square root of a number n:
sqrti+1=12[sqrti+sqrti]

Here sqrt0 = 1 and sqrti approaches the square root of n as i approaches infinity.
An implementation of this algorithm requires that n be a positive number and that number of
iterations the calculations will be repeated for will also be a positive number.

Guarantee this condition by adding assert statements inside the function of newton's Square root
*/
#include <iostream>
#include <cassert>
using namespace std;

double newtonSqroot(double n, int numIterations)
{
  double answer = 1;
  int i = 0;

  assert((n > 0) && (numIterations > 0));
  while (i < numIterations)
  {
    answer = 0.5 * (answer + n / answer);
    i++;
  }
  return answer;
}
