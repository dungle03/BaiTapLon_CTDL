#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
#include <stdlib.h>

#include "Student.cpp"

using namespace std;

void InputStudent(vector<Student> &);
void UpdateStudent(vector<Student> &);
void DeleteStudent(vector<Student> &);
void FindStudent(vector<Student> &);
void SortStudent(vector<Student> &);
void PrintStudent(vector<Student> &);

void pressAnyKey();

int main()
{
    vector<Student> myClass;
    int key;
    char check = 'c';

    bool is_quit = false;

    while (!is_quit)
    {
        cout << "           CHUONG TRINH QUAN LY SINH VIEN\n";
        cout << "*************************MENU**************************\n";
        cout << "**  1. Them sinh vien.                               **\n";
        cout << "**  2. Cap nhat thong tin sinh vien boi MSV.         **\n";
        cout << "**  3. Xoa sinh vien boi MSV.                        **\n";
        cout << "**  4. Tim kiem sinh vien theo ten.                  **\n";
        cout << "**  5. Sap xep sinh vien theo ten.                   **\n";
        cout << "**  6. Hien thi danh sach sinh vien.                 **\n";
        cout << "**  0. Thoat                                         **\n";
        cout << "*******************************************************\n";
        cout << "Nhap tuy chon: ";
        cin >> key;
        system("cls");

        switch (key)
        {
        case 1:
            do
            {
                cout << "1. Them sinh vien: " << endl;
                InputStudent(myClass);
                cout << "Ban co muon nhap them sinh vien khong ? (c/k): ";
                cin >> check;
            } while (check == 'c');

            break;

        case 2:
            cout << "2. Cap nhat thong tin sinh vien boi MSV : " << endl;
            int MSV;
            cin >> MSV;

            break;

        case 3:
            cout << "3. Xoa sinh vien boi MSV: " << endl;
            break;

        case 4:
            cout << "4. Tim kiem sinh vien theo ten: " << endl;
            break;

        case 5:
            cout << "5. Sap xep sinh vien theo ten: " << endl;
            break;

        case 6:
            cout << "6. Hien thi danh sach sinh vien: " << endl;
            if (myClass.empty())
            {
                cout << "Danh sach khong co sinh vien nao !!" << endl;
            }

            PrintStudent(myClass);
            break;
        case 0:
            system("cls");
            is_quit = true;
            cout << "Cam on ban da su dung chuong trinh <3" << endl;
            system("pause");
            break;

        default:
            cout << "\nKhong co chuc nang nay!";
            cout << "\nHay chon chuc nang trong hop menu.";
            break;

            if (key != 0)
            {
                pressAnyKey();
            }
        }
    }
    return 0;
}

void InputStudent(vector<Student> &newMyClass)
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
    newMyClass.push_back(newStudent);
    cout << endl;
}

void PrintStudent(vector<Student> &newMyClass)
{
    unsigned int n = newMyClass.size();

    for (unsigned int i = 0; i < n; i++)
    {
        cout << newMyClass[i].get_Id() << " | ";
        cout << newMyClass[i].get_Name() << " | ";
        cout << newMyClass[i].get_d() << "/";
        cout << newMyClass[i].get_m() << "/";
        cout << newMyClass[i].get_y() << " | ";
        cout << newMyClass[i].get_Sex() << " | ";
        cout << newMyClass[i].get_Class() << endl;

        cout << endl;
    }
}

void pressAnyKey()
{
    cout << "Nhap phim bat ki de tiep tuc !" << endl;
    fflush(stdin);
    getchar();
    system("cls");
}