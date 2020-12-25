#include "iostream"

using namespace std;
void shellSort(int item[], int n)
{
    int gap,i,j,temp;
    for(gap=n/2;gap>=1;gap/=2)
    {
        for(i=gap;i<n;i++)
        {
            temp=item[i];
            j=i-gap;
            while(j>=0 && item[j] > temp)
            {
                item[j + gap]=item[j];
                j=j-gap;
            }
            item[j + gap]=temp;
        }
    }
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