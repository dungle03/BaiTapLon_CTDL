#include "ManageStudent.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

ManageStudent ::ManageStudent()
{
    myClass = vector<Student>();
}

ManageStudent ::ManageStudent(vector<Student> myClass)
{
    myClass = myClass;
}

int ManageStudent ::ClassSize()
{
    return myClass.size();
}

void ManageStudent ::InputStudent()
{
    int Id, d, m, y;
    string Name, Sex, Class;

    cout << "MSV: " << endl;
    cin >> Id;
    cout << "Ngay thang nam sinh (VD: 1/1/1990 dien 01 01 1990): " << endl;
    cin >> d >> m >> y;
    cout << "Ho va ten: " << endl;
    fflush(stdin);
    getline(cin, Name);
    cout << "Gioi tinh: " << endl;
    getline(cin, Sex);
    cout << "Lop (VD: CNTT3): " << endl;
    getline(cin, Class);

    Student newStudent(Id, d, m, y, Name, Sex, Class);
    myClass.push_back(newStudent);
    cout << endl;
}

void ManageStudent ::UpdateStudent()
{
    cout << "\nNhap MSV can cap nhat: ";
    int MSV;
    cin >> MSV;
    unsigned int n = myClass.size();
    int vt, check = 0;
    for (int i = 0; i < n; i++)
    {
        int v = myClass[i].get_Id();
        if (v == MSV)
        {
            vt = i;
            check = 1;
            break;
        }
    }
    if (!check)
        cout << "\nKhong ton tai ma sinh vien!\n";
    else
    {
        int n_Id, n_d, n_m, n_y;
        string n_Name, n_Sex, n_Class;

        cout << "MSV: " << endl;
        cin >> n_Id;
        cout << "Ngay thang nam sinh (VD: 1/1/1990 dien 01 01 1990): " << endl;
        cin >> n_d >> n_m >> n_y;
        cout << "Ho va ten: " << endl;
        fflush(stdin);
        getline(cin, n_Name);
        cout << "Gioi tinh: " << endl;
        getline(cin, n_Sex);
        cout << "Lop (VD: CNTT3): " << endl;
        getline(cin, n_Class);

        myClass[vt].set_Id(n_Id);
        myClass[vt].set_d(n_d);
        myClass[vt].set_m(n_m);
        myClass[vt].set_y(n_y);
        myClass[vt].set_Name(n_Name);
        myClass[vt].set_Sex(n_Sex);
        myClass[vt].set_Class(n_Class);
    }
}

void ManageStudent ::DeleteStudent()
{
    int msv;
    cout << "Nhap ma sinh vien can xoa: ";
    cin >> msv;

    unsigned int n = myClass.size();

    for (int i = 0; i < n; i++)
    {
        if (msv == myClass[i].get_Id())
        {
            myClass.erase(myClass.begin() + i);
            return;
        }
    }

    cout << "Khong tim thay sinh vien can xoa !" << endl;
}

Student &FindStudent(int Id);
void SortStudent()
{
    
}


void ManageStudent ::PrintStudent()
{
    unsigned int n = myClass.size();

    for (unsigned int i = 0; i < n; i++)
    {
        cout << myClass[i].get_Id() << " | ";
        cout << myClass[i].get_Name() << " | ";
        cout << myClass[i].get_d() << "/";
        cout << myClass[i].get_m() << "/";
        cout << myClass[i].get_y() << " | ";
        cout << myClass[i].get_Sex() << " | ";
        cout << myClass[i].get_Class() << endl;

        cout << endl;
    }
}

