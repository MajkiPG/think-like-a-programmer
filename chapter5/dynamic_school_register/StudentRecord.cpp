//
// Created by mikol on 08.10.2020.
//

#include "StudentRecord.h"

int StudentRecord::grade()
{
    return _grade;
}

bool StudentRecord::isValidGrade(int grade)
{
    return (grade >= -1 && grade <= 100);
}

void StudentRecord::setGrade(int newGrade)
{
    if (isValidGrade(newGrade))
        _grade = newGrade;
}

string StudentRecord::letterGrade()
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

int StudentRecord::studentID()
{
    return _studentID;
}

void StudentRecord::setStudentID(int newID)
{
    _studentID = newID;
}

string StudentRecord::name()
{
    return _name;
}

void StudentRecord::setName(string newName)
{
    _name = newName;
}

StudentRecord::StudentRecord()
{
    setGrade(0);
    setStudentID(-1);
    setName("");
}

StudentRecord::StudentRecord(int newGrade, int newID, string newName)
{
    setGrade(newGrade);
    setStudentID(newID);
    setName(newName);
}