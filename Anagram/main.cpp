#include <iostream>
using namespace std;
bool checkAnagram(string strA, string strB){
    int sizeA = strA.size(),sizeB = strB.size();
    if(sizeA == sizeB){
        int *hashA =new int [25];
        int *hashB =new int [25];
        for(int idx=0;idx<sizeA;idx++){
            hashA[(97 -tolower(strA[idx]))]++;
            hashB[(97 -tolower(strB[idx]))]++;
        }
        for(int idx=0;idx<25;idx++){
            if(hashA[idx]!=hashB[idx]) {
                return false; }
        }

        return true;
    }
    return false;

}
int main() {
    string s1,s2;
    cout<<"Enter Strings A and B: "<<endl;
    cin>>s1>>s2;
    if(checkAnagram(s1,s2)){
        cout<<"Both Strings are Anagrams. ";
    }
    else{
        cout<<"Both Strings are not Anagrams !!!";
    }
    return 0;
}
