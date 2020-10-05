#include <iostream>

using namespace std;

int main()
{
    int values[] = {1, 2, 3, 4, 5, 5, 6, 6, 6, 7};
    int maxValue = 0;
    int dominant = -1;
    int maxDominantValue = 0;

    for (int i = 0; i < (sizeof(values)/sizeof(int)) ; ++i)
        if (values[i] > maxValue)
            maxValue = values[i];

    int histogram[maxValue];
    for (int i = 0; i < maxValue; ++i)
        histogram[i] = 0;

    for (int i = 0; i < (sizeof(values)/sizeof(int)); ++i)
        histogram[values[i]]++;

    for (int i = 0; i < maxValue; ++i)
    {
        if (histogram[i] > maxDominantValue)
        {
            maxDominantValue = histogram[i];
            dominant = i;
        }
    }

    cout << dominant << endl;


    return 0;
}
