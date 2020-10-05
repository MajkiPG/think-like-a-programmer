#include <iostream>

#define NUM_AGENTS 3
#define MONTHS 12

using namespace std;

int compare_func(const void* voidA, const void* voidB)
{
    int* intA = (int*)voidA;
    int* intB = (int*)voidB;
    return *intA-*intB;
}

int main()
{
    int sales[NUM_AGENTS][MONTHS] = {
            {1865, 498, 30924, 87478, 328, 2653, 387, 3754, 387587, 2873, 276, 32},
            {5865, 5456, 3983, 6464, 9957, 4785, 3875, 3838, 4959, 1122, 7766, 2534},
            {23, 55, 67 ,99, 256, 376, 232, 223, 4546, 564, 4544, 3434}
    };
    int* sales_copy = new int[NUM_AGENTS*MONTHS];
    int agent = -1;
    int currentMedian = 0;
    int maxMedian = 0;

    for (int i = 0; i < NUM_AGENTS*MONTHS; ++i)
        sales_copy[i] = sales[i/MONTHS][i%MONTHS];

    for (int i = 0; i < NUM_AGENTS; ++i)
    {
        qsort((sales_copy+(i*12)), MONTHS, sizeof(int), compare_func);
        currentMedian = (sales_copy[i*12+MONTHS/2] + sales_copy[(i*12+MONTHS/2)+1])/2;
        if (currentMedian > maxMedian)
        {
            maxMedian = currentMedian;
            agent = i;
        }
    }

    cout << agent << endl;

    return 0;
}
