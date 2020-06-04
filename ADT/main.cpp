#include <iostream>
#include <cstring>
using namespace std;
template <class t>
class Array
{
private:
    t *element;

public:
    int size{};
    int length;
    explicit Array(int size)
    {
        element = new t[size];
        memset(element, 0, size * sizeof(*element));
        length = 0;
        this->size = size;
    }
    void display()
    {
        for (int index = 0; index < size; ++index)
        {
            cout << element[index] << "  ";
        }
        cout << endl;
    }
    void insert(int pos, t item)
    {
        if (pos >= size)
        {
            cout << "INDEX out of size !!!" << endl;
        }
        else if (length < size - 1)
        {
            for (int index = pos; index < size -1; index++)
            {   if (index +1 == 0)
                element[index] = element[index + 1];
            }
            element[pos] = item;
            length ++;
        }
        else
        {
            cout << "Couldn't insert , Overflow !!!" << endl;
        }
    }
    void Delete (int index){
        if (length == 0){
            cout << "Under Flow !!!";
        }
        else {
            element[--length] = 0;

        }
    }
    // void remove (t element);
    // void push(t element);
    // void set(int index, t element);
    // void shift(int pos);
    // void rotate(int pos);

    ~Array()
    {
        delete[] element;
    }
};

int main()
{
    int n;
    cout << "Enter size for the array: ==>";
    cin >> n;
    auto x = Array<long>(n);
    cout << "BEFORE" << endl;
    x.insert(3, 1);
    x.insert(1, 3);
    x.display();
    x.Delete( 1);
    cout << "AFTER" << endl;
    x.display();
    cout<<"length ::"<<x.length;
    return 0;
}