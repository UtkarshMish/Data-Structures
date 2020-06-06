#include <iostream>
using namespace std;
int main()
{
  int **A;
  int n;
  cout << "Enter The size of 2D array ==>";
  cin >> n;
  cout << "Enter inner Elements" << endl;
  A = new int *[n];
  for (int index = 0; index < n; index++)
  {
    A[index] = new int[n];
  }
  for (int row = 0; row < n; row++)
  {
    for (int column = 0; column < n; column++)
    {
      cout << "enter element" << row << column << "  -->";
      cin >> A[row][column];
    }
    cout << endl;
  }
  cout << "Your Entered Matrix is as follows :==>" << endl;
  for (int row = 0; row < n; row++)
  {
    for (int column = 0; column < n; column++)
    {
      cout << A[row][column] << "  ";
    }
    cout << endl;
  }
  delete[] A;
}