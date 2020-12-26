#include "iostream"
#include <cmath>
using namespace std;
bool checkPrime(long num)
{
    if (num == 0 || num == 1)
        return false;
    else if (num == 2)
        return true;
    else if (num % 2 == 0)
        return false;
    else
    {
        float n = sqrt(num);
        if ((int)ceil(n) == (int)n)
            return false;
        else
        {
            n = ceil(n);
            for (long i = 3; i < n; i += 2)
            {
                if (num % i == 0)
                    return false;
            }
            return true;
        }
    }
}
int main()
{
    long num;
    cout << "Enter a number to check if prime: ";
    cin >> num;
    cout << (checkPrime(num) ? "Prime" : "Not Prime");
}