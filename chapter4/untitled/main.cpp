#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> &A)
{
    int vecLen = A.size();
    sort(A.begin(), A.end());

    if(A[vecLen-1] <= 0)
    {
        return 1;
    }

    for(int i = 0; i < vecLen-1; i++)
    {
        if(A[i]+1 < A[i+1])
        {
            return (A[i]+1);
        }
    }

    return (A[vecLen-1]+1);
}
int main()
{
    vector<int> v1 = {1, 3, 6, 4, 1, 2};
    vector<int> v2 = {1, 2, 3};
    vector<int> v3 = {-1, -3};

    cout << solution(v1) << endl;
    cout << solution(v2) << endl;
    cout << solution(v3) << endl;

    return 0;
}
