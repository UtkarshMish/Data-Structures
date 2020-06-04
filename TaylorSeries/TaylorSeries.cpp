#include "iostream"
using namespace std;
// The Long method using the formula::-->
// double calculate(double &x, double &m)
// {
//   double solution = 0, prevSum = 1, prevX = x;
//   for (int index = 0; index < m; index++)
//   {
//     if (index == 0)
//     {
//       solution += 1;
//     }
//     else
//     {
//       prevSum *= index;
//       solution = solution + (x / prevSum);
//       x = x * prevX;
//     }
//   }
//   return solution;
// }

double calculate(double &x, double &y)
{
  double solution = 1;
  while (y >= 1)
  {
    solution = (1 + solution * (x / y));
    y = y - 1;
  }
  return solution;
}
int main()
{
  double x, m;
  cout << "Enter x and m value --> ";
  cin >> x >> m;
  cout << endl;
  double result = calculate(x, m);
  cout << result;
  return 0;
}