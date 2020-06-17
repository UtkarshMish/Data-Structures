#include "iostream"
#include <vector>
#include "stack"
using namespace std;
int main()
{

    stack<string> items;
    string element;
    cout << "Enter names: +++> ";
    for (int i = 0; i < 5; i++)
    {

        cin >> element;
        items.push(element);
    }
    cout << endl
         << "reversed order is ::" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << items.top() << endl;
        items.pop();
    }
    return 0;
}
