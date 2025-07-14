# Overloading Functions
Overloading a function means having two or more functions with the same name but different definitions.
This is an optimal solution where the most natural name of a function is already in use
and another functions that does the same operation but with a variation in parameters
need to be declared

### Conditions for Overloading:
- The overloaded functions must do the same operation to avoid confusion
- There must be a difference in the number of parameter and/or types for the overloaded functions.
- Only to be used to improve readibility

### Example:
```c++
const double PI = 3.14159265358979323846;

double area(double width, double length)
{
  return length*width;
}

double area(double radius)
{
  return PI*(r*r);
}
```
---
