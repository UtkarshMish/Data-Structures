#include "iostream"
using namespace std;
template <class T>
class items{
public:
     T x;
     T y;
     T value;
};
class sparse{
private:
    int m,n,size;
    items<int>  *Elements;
public:
    sparse(int i,int j, int size){
        this->m = i;
        this->n = j;
        this->size = size;
        Elements = new items<int> [size];

    }
    void getElements(){
        for (int i=0;i<size;i++) {
            cout <<i+1<< ") Enter i, j : ";
            cin >> Elements[i].x >> Elements[i].y;
            cout<<endl<<"Enter Value:" ;
            cin>> Elements[i].value;
            cout<<endl;
        }


    }
    void show(){
        cout<<m<<"      "<<n<<"      "<<size<<endl;
            for(int i=0;i<size;i++){
                cout<<Elements[i].x<<"      "<<Elements[i].y<<"      "<<Elements[i].value;
                cout<< endl;
        }
    }
    ~sparse(){
        free(Elements);
    }

};
int main()
{   int i,j,size;
    cout<<"Enter dimensions i and j: ";
    cin>>i>>j;
    cout<<endl;
    cout<<"Enter total number of element: ";
    cin>>size;
    cout<<endl;
    if( i*j < size){
        cout<<"Matrix not valid !!!"<<endl;
    }
    else {
        auto matrix = new sparse(i, j, size);
        matrix->getElements();
        matrix->show();
        free(matrix);
    }
    return 0;
}