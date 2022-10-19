// Header

#ifndef STUDENT_H
#define STUDENT_H

//#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int Id, d, m, y;
    string Name, Sex, Class;

public:
    // Default Constructor
    Student();

    // Overload Constructor
    Student(int, int, int, int, string, string, string);

    // Destructor
    ~Student();

    // Accessor Functions

    int get_Id();
    int get_d();
    int get_m();
    int get_y();

    string get_Name();
    string get_Sex();
    string get_Class();

    // Mutator Constructor

    void set_Id(int);
    void set_d(int);
    void set_m(int);
    void set_y(int);

    void set_Name(string);
    void set_Sex(string);
    void set_Class(string);
};

#endif