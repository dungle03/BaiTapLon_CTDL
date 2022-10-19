#include "Student.h"
#include <iostream>
#include <string>

using namespace std;

// Default Constructor

Student::Student()
{
    Id = 0;
    d = 0;
    m = 0;
    y = 0;

    Name = "";
    Sex = "";
    Class = "";
}

// Overload Constructor

Student::Student(int new_Id, int new_d, int new_m, int new_y, string new_Name, string new_Sex, string new_Class)
{
    Id = new_Id;
    d = new_d;
    m = new_m;
    y = new_y;
    Name = new_Name;
    Sex = new_Sex;
    Class = new_Class;
}

// Destructor

Student::~Student()
{
}

// Accessor Functions

int Student::get_Id()
{
    return Id;
}

int Student::get_d()
{
    return d;
}

int Student::get_m()
{
    return m;
}

int Student::get_y()
{
    return y;
}

string Student::get_Name()
{
    return Name;
}

string Student::get_Sex()
{
    return Sex;
}

string Student::get_Class()
{
    return Class;
}

// Mutator Constructor

void Student::set_Id(int new_Id)
{
    Id = new_Id;
}

void Student::set_d(int new_d)
{
    d = new_d;
}

void Student::set_m(int new_m)
{
    m = new_m;
}

void Student::set_y(int new_y)
{
    y = new_y;
}

void Student::set_Name(string new_Name)
{
    Name = new_Name;
}

void Student::set_Sex(string new_Sex)
{
    Sex = new_Sex;
}

void Student::set_Class(string new_Class)
{
    Class = new_Class;
}