#include "iostream"
#include <cmath>
using namespace std;
string checkPrime(long num){
    const string result[] = {"Not Prime", "Prime"};
    if(num == 0 || num == 1)
        return result[1];
    else if(num%2 == 0)
        return result[0];
    float n = sqrt(num);
    if ((int)ceil(n) == (int)n)
        return result[0];
    else {
        n = ceil(n);
        for (long i = 3; i < n ; i+=2) {
            if (num % i == 0)
                return result[0];
        }
        return result[1];
    }
}
int main(){
    long num;
    cout<<"Enter a number to check if prime: ";
    cin>>num;
    cout<<checkPrime(num);
}