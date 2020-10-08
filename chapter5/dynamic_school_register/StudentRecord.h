//
// Created by mikol on 08.10.2020.
//
#include <iostream>

using namespace std;

#ifndef DYNAMIC_SCHOOL_REGISTER_STUDENTRECORD_H
#define DYNAMIC_SCHOOL_REGISTER_STUDENTRECORD_H

class StudentRecord
{
public:
    StudentRecord();
    StudentRecord(int newGrade, int newID, string newName);
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


#endif //DYNAMIC_SCHOOL_REGISTER_STUDENTRECORD_H
