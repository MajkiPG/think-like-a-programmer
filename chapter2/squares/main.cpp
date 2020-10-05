#include <iostream>

using namespace std;

int main()
{
    for (int i = 0; i <7 ; ++i)
    {
        for (int j = 7-i; j > 0 ; j--)
        {
            cout << '#';
        }
        cout << endl;
    }

    cout << endl;
    cout << endl;

    for (int i = 0; i <8 ; ++i)
    {
        for (int j = 4-abs(4-i); j > 0 ; j--)
        {
            cout << '#';
        }
        cout << endl;
    }
    return 0;
}
