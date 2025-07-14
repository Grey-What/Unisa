/*Problem Statement
Write a function declaration for a function that computes interest on a credit card account balance.
The function takes arguments for the initial balance, the monthly interest rate, and the number of
months for which interest must be paid. The value returned is the interest due. Do not forget to
compound the interest—that is, to charge interest on the interest due. The interest due is added into
the balance due, and the interest for the next month is computed using this larger balance.
Embed the function in a program that reads the values for the interest rate, initial account balance,
and number of months, then outputs the interest due. Embed your function definition in a program
that lets the user compute interest due on a credit account balance. The program should allow the
user to repeat the calculation until the user says he or she wants to end the program.
*/
#include <iostream>
#include <iomanip>
using namespace std;

double interestCalculation(double balance, double interestRate, int months)
{
  double newbalance = balance;
  for (int i = 0; i < months; i++)
  {
    newbalance += newbalance * interestRate;
  }
  return newbalance - balance;
}

int main()
{
  double currentBalance;
  double interestRate;
  double interestDue;
  int months;

  cout << fixed << setprecision(2);
  while (true)
  {
    cout << "Enter the current Balance of the credit card account(0 to quit): " << endl;
    cin >> currentBalance;
    if (currentBalance == 0)
      break;
    cout << "Enter the Interest Rate on the account: " << endl;
    cin >> interestRate;
    cout << "Enter the number of months for which interest must be paid: " << endl;
    cin >> months;
    interestDue = interestCalculation(currentBalance, interestRate, months);
    cout << "Interest Ammount due after " << months << " Months: " << interestDue << endl;
  }
  return 0;
}
