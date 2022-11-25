// Header

#ifndef MANAGESTUDENT_H
#define MANAGESTUDENT_H

#include "Student.h"
#include <string>

class ManageStudent
{
private:
    vector<Student> myClass;

public:
    ManageStudent();
    ManageStudent(vector<Student>);
    int ClassSize();
    int isEmpty();
    void InputStudent();
    void UpdateStudent();
    void DeleteStudent(int msv);
    void FindStudent(string ht);
    void SortStudent(int left, int right);
    void PrintStudent();
};

#endif
