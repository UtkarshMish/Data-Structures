#include <iostream>
using namespace std;
int C(int n, int r)
{
  if (r == 0 || r == n)
  {
    return 1;
  }
  else
  {
    return C(n - 1, r - 1) + C(n - 1, r);
  }
}

main()
{
  int n, r;
  cout << "Enter N and R values ==>";
  cin >> n >> r;
  cout << endl;
  int result = C(n, r);
  cout << result;
  return 0;
}