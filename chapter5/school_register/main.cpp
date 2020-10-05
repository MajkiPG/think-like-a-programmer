#include <iostream>

using namespace std;

class studentRecord
{
public:
    studentRecord();
    studentRecord(int newGrade, int newID, string newName);
    int grade();
    bool isValidGrade(int grade);
    void setGrade(int newGrade);
    string letterGrade();
    int studentID();
    void setStudentID(int newID);
    string name();
    void setName(string newName);

private:
    int _grade;
    int _studentID;
    string _name;
};

int studentRecord::grade()
{
    return _grade;
}

bool studentRecord::isValidGrade(int grade)
{
    return (grade >= -1 && grade <= 100);
}

void studentRecord::setGrade(int newGrade)
{
    if (isValidGrade(newGrade))
        _grade = newGrade;
}

string studentRecord::letterGrade()
{
    if (!isValidGrade(_grade)) return "ERROR";
    const int NUMBER_CATEGORIES = 9;
    const string GRADE_LETTER[] = {"2", "3-", "3", "3+", "4-", "4", "4+", "5-", "5"};
    const int LOWEST_GRADE_SCORE[] = {0, 61, 66, 71, 76, 81, 86, 91, 96};
    int category = 0;
    while (category < NUMBER_CATEGORIES && LOWEST_GRADE_SCORE[category] <= _grade)
        category++;
    return GRADE_LETTER[category-1];
}

int studentRecord::studentID()
{
    return _studentID;
}

void studentRecord::setStudentID(int newID)
{
    _studentID = newID;
}

string studentRecord::name()
{
    return _name;
}

void studentRecord::setName(string newName)
{
    _name = newName;
}

studentRecord::studentRecord()
{
    setGrade(0);
    setStudentID(-1);
    setName("");
}

studentRecord::studentRecord(int newGrade, int newID, string newName)
{
    setGrade(newGrade);
    setStudentID(newID);
    setName(newName);
}

int main()
{
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
