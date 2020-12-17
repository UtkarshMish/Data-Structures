#include<iostream>
using namespace std;
struct Node{
    int value;
    Node* node;
};
int countDigits(int value){
    int count =0;
    while(value != 0){
        count++;
        value /=10;
    }
    return count;
}
void insertItem(Node* item,int value){
    Node pNode = *item;
    Node* newNode = new Node;
    newNode->value = value;
    newNode->node = nullptr;
    while(pNode.node != nullptr) {
        pNode = *pNode.node;
    }
    pNode.node = newNode;
}
void radixSort(int item[],int n){
    Node** radix = new Node*[10];
    int digit =1,maxIterValue = item[0];
    for (int i = 0; i < n; ++i)
    {
        if(item[i]> maxIterValue)
            maxIterValue =item[i];
    }
    maxIterValue = countDigits(maxIterValue);
    int count=0;
    while(count < maxIterValue) {
        for (int i = 0; i < 10; ++i)
            radix[i] = nullptr;
        for (int i = 0; i < n; ++i) {
            int value = (item[i] / digit) % 10;
            if (radix[value] == nullptr) {
                radix[value] = new Node;
                radix[value]->value = item[i];
                radix[value]->node = nullptr;
            } else {
                insertItem(radix[value], item[i]);
            }
        }
        for (int i =0,k= 0; i < 10; ++i) {
            if(radix[i] == nullptr) continue;
            else{
                while(radix[i] != nullptr)
                {
                    item[k++] = radix[i]->value;
                    Node *temp =radix[i];
                    radix[i] = radix[i]->node;
                    free(temp);
                }
            }
        }
        count++;
        digit *=10;

    }
    free(radix);
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
    radixSort(item,size);
    for (int i = 0; i < size; ++i)
        cout<<item[i]<<"  ";
    return 0;
}

