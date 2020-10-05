#include <iostream>

#define ARRAY_SIZE 12
#define MAX_RESPONSE 10

using namespace std;

int compare_func(const void* voidA, const void* voidB)
{
    int* intA = (int*)voidA;
    int* intB = (int*)voidB;
    return *intA-*intB;
}


int main()
{
    int survey_data[ARRAY_SIZE] = {4, 7, 3, 8, 9, 7, 3, 9, 9, 3, 3, 10};
    int mostFrequent;
    int highestFrequency = 0;
    int currentFrequency = 0;

    qsort(survey_data, ARRAY_SIZE, sizeof(int), compare_func);
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        currentFrequency++;
        if (i == ARRAY_SIZE-1 || survey_data[i] != survey_data[i+1])
        {
            if (currentFrequency > highestFrequency)
            {
                highestFrequency = currentFrequency;
                mostFrequent = survey_data[i];
            }
            currentFrequency = 0;
        }
    }

    cout << mostFrequent << endl;

    int histogram[MAX_RESPONSE];

    for (int i = 0; i < MAX_RESPONSE; ++i)
        histogram[i] = 0;
    for (int i = 0; i < ARRAY_SIZE; ++i)
        histogram[survey_data[i]-1]++;
    mostFrequent = 0;
    for (int i = 0; i < MAX_RESPONSE; ++i)
    {
        if (histogram[i] > histogram[mostFrequent])
            mostFrequent = i;
    }
    mostFrequent++;

    cout << mostFrequent << endl;

    return 0;
}
