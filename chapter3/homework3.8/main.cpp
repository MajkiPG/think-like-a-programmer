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
    return s1->grade-s2->grade;
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

    qsort(students, ARRAY_SIZE, sizeof(student), sort_grade);

    cout << "25% percentile: ";
    cout << students[3*(ARRAY_SIZE/4)].grade << endl;

    cout << "50% percentile: ";
    cout << students[2*(ARRAY_SIZE/4)].grade << endl;

    cout << "75% percentile: ";
    cout << students[(ARRAY_SIZE/4)].grade << endl;

    return 0;
}
