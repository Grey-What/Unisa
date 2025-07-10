/*Problem Statement
That we are “blessed” with several absolute value functions is an accident of history. C libraries
were already available when C++ arrived; they could be easily used, so they were not rewritten
using function overloading. You are to find all the absolute value functions you can and rewrite all of
them overloading the abs function name. At a minimum, you should have the int , long , float ,
and double types represented.
*/

/*found absolute value functions:
abs(): This function, defined in <cstdlib>, is overloaded to handle different integer types:
int abs(int n);
long abs(long n);
long long abs(long long n);
labs(): Specifically for long int.
llabs(): Specifically for long long int.
imaxabs(): For intmax_t, which is the largest integer type supported by the system.

abs(): This function, defined in <cmath>, is overloaded for floating-point types:
double abs(double x);
float abs(float x);
long double abs(long double x);
fabs(): This function, also in <cmath>, is specifically for double and is often used interchangeably with abs() for floating-point values.
fabsf(): Specifically for float.
fabsl(): Specifically for long double

abs(): Defined in the <complex> header, this function calculates the magnitude (absolute value) of a complex number.
*/
#include <iostream>
using namespace std;

int myabs(int a)
{
  if (a < 0)
  return -a;

  return a;
}

long int myabs(long int a)
{
  if (a < 0)
  return -a;

  return a;
}

long long int myabs(long long int a)
{
  if (a < 0)
  return -a;

  return a;
}

float myabs(float a)
{
  if (a < 0)
  return -a;

  return a;
}

double myabs(double a)
{
  if (a < 0)
  return -a;

  return a;
}

long double myabs(long double a)
{
  if (a < 0)
  return -a;

  return a;
}


//Some tests on Overloaded myabs function
int main()
{
  int a = -10;
  long int b = -2147483648;
  long long int c = -922337203684775808;
  float d = -76.2345;
  double e = -123456765432.12345654321;
  long double f = -1234567654321123455432.2345676546765433456543;

  cout << "int: " << myabs(a) << endl;
  cout << "long int: " << myabs(b) << endl;
  cout << "long long int: " << myabs(c) << endl;
  cout << "float: " << myabs(d) << endl;
  cout << "double: " << myabs(e) << endl;
  cout << "long double: " << myabs(f) << endl;

  return 0;
}
