#include <iostream>
using namespace std;
#pragma clang diagnostic push
#pragma ide diagnostic ignored "hicpp-signed-bitwise"
void findDuplicates( const string& s){
    int Hashes =0, checkBit;
    cout<<"duplicates are : -"<<endl;
    for (char i : s){

        checkBit =1;
        checkBit = checkBit<<(i-97);
        if((Hashes & checkBit)>0){
            cout<<i<< "  ";
        }
        else{
            Hashes = Hashes | checkBit;
        }
    }

}
#pragma clang diagnostic pop
int main() {
    string str;
    cout<<"enter string: ";
    cin>>str;
    findDuplicates(str);

    return 0;
}
