#include <iostream>

#define ARRAY_SIZE 10

using namespace std;

struct student
{
    int grade;
    int studentID;
    string name;
};

int sort_grade(const void* void1, const void* void2)
{
    student* s1 = (student*)void1;
    student* s2 = (student*)void2;
    return s2->grade-s1->grade;
}

int sort_ID(const void* void1, const void* void2)
{
    student* s1 = (student*)void1;
    student* s2 = (student*)void2;
    return s2->studentID-s1->studentID;
}

int main()
{
    student students[ARRAY_SIZE] = {
            {87, 100001, "Krzysztof"},
            {28, 100002, "Bernard"},
            {100, 100003, "Wojciech"},
            {78, 100004, "Robert"},
            {84, 100005, "Bogdan"},
            {98, 100006, "Bożena"},
            {75, 100007, "Edyta"},
            {70, 100008, "Beata"},
            {81, 100009, "Alicja"},
            {68, 100010, "Joanna"}
    };

    for (int i = 0; i < ARRAY_SIZE; ++i)
    {
        cout << students[i].studentID << endl;
    }

    qsort(students, ARRAY_SIZE, sizeof(student), sort_ID);

    cout << endl;

    for (int i = 0; i < ARRAY_SIZE; ++i)
    {
        cout << students[i].studentID << endl;
    }
    return 0;
}
