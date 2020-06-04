#include <iostream>
using namespace std;
template <class T>
bool checkPalindrome(T value,int size){
    int half = size/2;
    for(int i=0;i<half;i++){
        if(value[i] != value[size-i-1]){
            return false;
        }

    }
    return true;
}
int main() {
    string s;
    cout<<"enter a string: ";
    cin>>s;
    cout<<endl;
    if(checkPalindrome(s,s.size())){
        cout<<s<<" is a Palindrome";
    }
    else {
        cout << s << " is not a Palindrome !!";

    }
    return 0;
}
