#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
#include <conio.h>

#include "Student.cpp"

using namespace std;

void inputStudent(vector<Student> &newMyClass);
// void printStudent(vector<Student> &);

int main()
{
    Student A;
    
    return 0;
}

void inputStudent(vector<Student> &newMyClass)
{

    int Id, d, m, y;
    string Name, Sex, Class;

    cout << "MSV: " << endl;
    cin >> Id;
    cout << "Ngay thang nam sinh (VD: 1/1/1990 dien 1 1 1990): " << endl;
    cin >> d >> m >> y;
    cout << "Ho va ten: " << endl;
    cin >> Name;
    cout << "Gioi tinh: " << endl;
    cin >> Sex;
    cout << "Lop (VD: CNTT3): " << endl;
    cin >> Class;

    Student newStudent(Id, d, m, y, Name, Sex, Class);
    newMyClass.push_back(newStudent);
    cout << endl;
}