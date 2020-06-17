#include "iostream"
using namespace std;

// Using loops :: ==>>>
// void fibonacci(int &n)
// {
//   double firstElement = 0, secondElement = 1, newElement;
//   if (n > 250)
//   {
//     cout << "Too long to Compute !!";
//     return;
//   }
//   for (int index = 0; index < n; index++)
//   {
//     if (index == 0)
//     {
//       cout << firstElement << "  ";
//     }
//     else if (index == 1)
//     {
//       cout << secondElement << "  ";
//     }
//     else
//     {
//       newElement = firstElement + secondElement;
//       cout << newElement << "  ";
//       firstElement = secondElement;
//       secondElement = newElement;
//     }
//   }
// }
int fibonacci(int n, int values[])
{

  if (n <= 1)
  {
    values[n] = n;
    return n;
  }
  else
  {
    if (values[n - 2] == -1)
    {
      values[n - 2] = fibonacci(n - 2, values);
    }
    if (values[n - 1] == -1)
    {
      values[n - 1] = fibonacci(n - 1, values);
    }

    values[n] = values[n - 2] + values[n - 1];
    return values[n];
  }
}
int main()
{
  int n;
  cout << "Enter the N for Fibonacci ==>";
  cin >> n;
  cout << endl;
  int *values;
  values= new int[n];
  for (int i = 0; i < n; i++)
  {
    values[i] = -1;
  }
  int result = fibonacci(n, values);
  cout << result << endl;
  for (int i = 0; i < n; i++)
  {
    cout << values[i] << "  ";
  }
  return 0;
}