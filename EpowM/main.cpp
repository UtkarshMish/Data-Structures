#include <iostream>
#include "EpowM.h"
using namespace std;

int main()
{

  int m, n;
  cout << "Enter m and n";
  cin >> m >> n;
  cout << endl;
  int result = pow(m, n);
  cout << result;
  return 0;
}