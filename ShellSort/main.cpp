#include "iostream"

void Swap(int item[], int eleA, int eleB);

using namespace std;
void shellSort(int item[],int n) {
    int gap = n/2;
    while(gap > 0) {
        for (int i = 0; i < n; i ++) {
            int prev =i-gap;
            int next = i+gap;
            while(next < n) {
                if (item[i] > item[next]) {
                    Swap(item, i, next);

                }
                next = next+gap;
            }

            while (prev >= 0) {
                if (item[i - gap] > item[i]) {
                    Swap(item, i - gap, i);
                }
                prev = prev-gap;
            }
        }
        gap = gap /= 2;
    }
}

void Swap(int item[], int eleA, int eleB) {
    int temp = item[eleA];
    item[eleA] = item[eleB];
    item[eleB] = temp;
}

int main(){
    int size=0;
    cout<<"Enter Size of an array: ";
    cin>>size;
    int item[size];
    for (int i = 0; i < size; ++i) {
        cout<<endl<<"Enter "<<i+1<<" Element: ";
        cin>>item[i];
    }
    shellSort(item,size);
    for (int i = 0; i < size; ++i)
        cout<<item[i]<<"  ";
    return 0;
}