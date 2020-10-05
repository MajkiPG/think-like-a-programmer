#include <iostream>
#include <vector>

#define MAX_RESPONSE 10

using namespace std;

int main()
{
    vector<int> surveyData;
    surveyData.reserve(30);
    int surveyResponse;
    int vectorSize;
    int histogram[MAX_RESPONSE];
    int mostFrequent = 0;

    cout << "Insert survey response, or -1 to stop:" << endl;

    cin >> surveyResponse;
    while (surveyResponse != -1)
    {
        surveyData.push_back(surveyResponse);
        cin >> surveyResponse;
    }
    vectorSize = surveyData.size();
    for (int i = 0; i < vectorSize; ++i)
        histogram[i] = 0;
    for (int i = 0; i < vectorSize; ++i)
        histogram[surveyData[i]-1]++;
    for (int i = 0; i < MAX_RESPONSE; ++i)
    {
        if (histogram[i] > histogram[mostFrequent])
            mostFrequent = i;
    }
    mostFrequent++;


    return 0;
}
