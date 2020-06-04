#include <iostream>
using namespace std;

class customMatrix{
private:
    int *matrix;
public:
    int size;
    explicit customMatrix(int sz = 0){
        size = sz;
        matrix = new int [sz];
        memset(matrix,0,sizeof(*matrix));
    }

    ~customMatrix(){
        free(matrix);
    }
};
int main() {
    int n;
    cout << "Enter Size of Matrix: " << endl;
    cin>>n;
    customMatrix item =  customMatrix(n);
    cout<<item.size;
    return 0;
}
