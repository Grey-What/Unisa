/*Problem Statement
The gravitational attractive force between two bodies with masses m1 and m1 separated by a
distance d is given by:
F = (G*m1*m2)/d^2
where G is the universal gravitational constant:
G = 6.674 * 1e-8
Write a function definition that takes arguments for the masses of two bodies and the distance
between them and that returns the gravitational force. Since you will use the preceding formula, the
gravitational force will be in dynes. One dyne equals (gcm sec 2)
You should use a globally defined constant for the universal gravitational constant. Embed your
function definition in a complete program that computes the gravitational force between two objects
given suitable inputs. Your program should allow the user to repeat this calculation as often as the
user wishes.
*/
#include <iostream>
#include <iomanip>
using namespace std;

const double G = 6.674 * 1e-8;

double gravForce