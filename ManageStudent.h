// Header

#ifndef MANAGESTUDENT_H
#define MANAGESTUDENT_H

#include <vector>
#include <string>
#include "Student.h"
using namespace std;

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
        void DeleteStudent();
        Student& FindStudent(int Id);
        void SortStudent();
        void PrintStudent();
};

#endif