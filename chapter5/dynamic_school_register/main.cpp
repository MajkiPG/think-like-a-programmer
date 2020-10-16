#include <iostream>
#include "StudentRecord.h"


using namespace std;

class StudentCollection
{
private:
    struct studentNode
    {
        StudentRecord studentData;
        studentNode *next;
    };

public:
    StudentCollection();
    ~StudentCollection();
    void addRecord(StudentRecord newStudent);
    StudentRecord recordWithNumber(int studentID);
    void removeRecord(int studentID);

private:
    typedef studentNode* studentList;
    studentList _listHead;
    void deleteList(studentList &listPtr);
    studentLit copiedList(const studentList original);
};

StudentCollection::StudentCollection()
{
    _listHead = NULL;
}

StudentCollection::~StudentCollection()
{
    deleteList(_listHead);
}

void StudentCollection::addRecord(StudentRecord newStudent)
{
    studentNode *newNode = new studentNode;
    newNode->studentData = newStudent;
    newNode->next = _listHead;
    _listHead = newNode;
}

StudentRecord StudentCollection::recordWithNumber(int studentID)
{
    studentNode *loopPtr = _listHead;
    while (loopPtr != NULL && loopPtr->studentData.studentID() != studentID)
        loopPtr = loopPtr->next;
    if (loopPtr == NULL)
    {
        StudentRecord dummyRecord = StudentRecord(-1, -1, "");
        return dummyRecord;
    }
    else
    {
        return loopPtr->studentData;
    }
}

void StudentCollection::removeRecord(int studentID)
{
    studentNode *loopPtr = _listHead;
    studentNode *trailing = NULL;
    while (loopPtr != NULL && loopPtr->studentData.studentID() != studentID)
    {
        trailing = loopPtr;
        loopPtr = loopPtr->next;
    }
    if (loopPtr == NULL) return;
    if (trailing == NULL)
        _listHead = _listHead->next;
    else
        trailing->next = loopPtr->next;
    delete loopPtr;
}

void StudentCollection::deleteList(studentList &listPtr)
{
    while (listPtr != NULL)
    {
        studentNode *tmp = listPtr;
        listPtr = listPtr->next;
        delete tmp;
    }
}

StudentCollection::studentList StudentCollection::copiedList(cons studentList original)
{
    if (original == NULL)
        return NULL;
    StudentList newList = new studentNode;
    newList->studentData = original->studentData;
    studentNode *oldLoopPtr = original->next;
}

int main()
{
    StudentCollection s;
    StudentRecord stu3(84, 1152, "Alicja");
    StudentRecord stu2(75, 4875, "Robert");
    StudentRecord stu1(98, 2938, "Tomasz");
    s.addRecord(stu3);
    s.addRecord(stu2);
    s.addRecord(stu1);
    s.removeRecord(4875);
    return 0;
}
