/*Problem Statement
Write an overloaded function max that takes either two or three parameters of type double and
returns the largest of them.
*/

double max(double a, double b)
{
  if (a > b)
    return a;
  return b;
}

double max(double a, double b, double c)
{
  double largest = a;
  if (b > largest)
    largest = b;
  if (c > largest)
    largest = c;
  return largest;
}
