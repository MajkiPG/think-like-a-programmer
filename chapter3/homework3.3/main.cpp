#include <iostream>

using namespace std;

bool is_sorted_my(int arr[], int len)
{
    bool ascending = true;
    bool descending = true;
    for (int i = 0; i < len-1; ++i)
    {
        if (arr[i] > arr[i+1])
            ascending = false;
        if (arr[i] < arr[i+1])
            descending = false;
    }
    if (ascending || descending)
        return true;
    else
        return false;
}

int main()
{
    int mix[] = {1, 6, 3, 1};
    int asc[] = {1, 3, 5, 7};
    int desc[] = {9, 5, 3, 1};

    cout << is_sorted_my(mix, 4) << endl;
    cout << is_sorted_my(asc, 4) << endl;
    cout << is_sorted_my(desc, 4) << endl;

    return 0;
}
