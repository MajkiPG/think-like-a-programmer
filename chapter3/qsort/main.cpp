#include <iostream>

using namespace std;

#define ARRAY_SIZE 10

int compare_func(const void* voidA, const void* voidB)
{
    int* intA = (int*)voidA;
    int* intB = (int*)voidB;
    return *intA-*intB;
}

int main()
{
    int intArray[ARRAY_SIZE] = {87, 28, 100, 78, 84, 98, 75, 70, 81, 68};
    qsort(intArray, ARRAY_SIZE, sizeof(int), compare_func);

    for(int i=0; i<10; i++)
    {
        cout << intArray[i] << endl;
    }
    return 0;
}
