#include <iostream>
using namespace std;

string reverseString(string s){

    int sz = s.size();
    char* reverseS;
    reverseS= new char[sz];
    for (int i = 0; i<sz;i++){
        reverseS[sz-i-1]= s[i];
    }
    reverseS[sz] = '\0';
    return reverseS;
}
int main() {
    string s,reverseS;
    cout<<"Enter a String: ";
    cin>>s;
    cout<<endl;
    reverseS = reverseString(s);
    cout<<"reverse : "<<reverseS;
    return 0;
}
