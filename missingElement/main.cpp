#include <iostream>
using namespace std;
template <class T>
class Elements{
private:
    T *item,low,high;
    int *Hashed;
    int size;
public:
    explicit Elements(int size){
        item = new T[size];
        Hashed =nullptr;
        Elements::size = size;
    }
    void getElements(){

        for (int i=0;i<size;i++){
            cout<<"Enter item "<<(i+1)<<endl;
            cin >>item[i];
            if(i == 0)
                low = high = item[i];
            if(item[i] > high)
                high = item[i];

            if(item[i] < low)
                low = item[i];

        }
        high++;
        Hashed = new int [high];
        memset(Hashed,0,high*sizeof(*Hashed));
        cout<<endl;
        for (int i =0;i < size; i++){
            ++Hashed[(int)item[i]];
        }
    }
    void findMissing(){
        int count = 0;
        cout<<"missing elements are: =>"<<endl;
        for(int i = low; i< high;i++){
            if(Hashed[i] == 0){
                cout<<i<<"  ";
                ++count;
            }

        }
        if(count == 0){
            cout<< "None";
        }
        cout<<endl;

    }
    void findDuplicate(){
        int count = 0;
        cout<<"duplicate elements are:=>"<<endl;
        for(int i = low; i< high;i++){
            if(Hashed[i] > 1){
                cout<<i<<" : "<<( Hashed[i]-1)<<" Duplicate"<<endl;
                ++count;
            }

        }
        if(count == 0){
            cout<<"None";
        }
        cout<<endl;
    }
    void findSum(int sum){
        cout<<" Elements are -"<<endl;
        for(int i=0;i<=size - 1;i++){
            int diff = sum - item[i];
            if(Hashed[diff] && (Hashed[diff]>0)){
                cout<<item[i]<< " and " << diff <<endl;
            }
        }
    }

    ~Elements(){
        delete [] item,Hashed;
    }
};
int main() {
    int n;
    cout << "Enter Size of Array :" << endl;
    cin >> n;
    auto itmArray = new Elements<float>(n);
    itmArray->getElements();
    itmArray->findMissing();
    itmArray->findDuplicate();
    cout<<"Enter Total Sum :->";
    cin >>n;
    itmArray->findSum(n);
    return 0;
}
/* Order of(n^2)
        for (int i=1;i<size;i++){
            int newDiff = item[i] - i;
            if(diff != newDiff){
                cout<<"missing elements:==>";
                while(diff<newDiff){
                    int itemMissing = i + diff;
                    ++diff;
                    cout<<itemMissing<<"  ";
                    ;
                }
                cout<<endl;
            }
        }
*/
