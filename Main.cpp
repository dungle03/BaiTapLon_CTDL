#include <bits/stdc++.h>
#include <conio.h>

#include "Student.cpp"
#include "ManageStudent.cpp"
using namespace std;

void pressAnyKey();

int main()
{
    ManageStudent myClass;
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

        switch (key)
        {
        case 1:
        {
            do
            {
                cout << "1. Them sinh vien: " << endl;
                myClass.InputStudent();
                cout << "Ban co muon nhap them sinh vien khong ? (c/k): ";
                cin >> check;
            } while (check == 'c');

            pressAnyKey();
            break;
        }
        case 2:
        {
            cout << "2. Cap nhat thong tin sinh vien boi MSV : " << endl;
            myClass.UpdateStudent();
            pressAnyKey();
            break;
        }

        case 3:
        {
            cout << "3. Xoa sinh vien boi MSV: " << endl;
            if (myClass.ClassSize() == 0)
            {
                cout << "Danh sach khong co sinh vien nao !!" << endl;
            }
            else
            {
                int msv;
                cout << "Nhap ma sinh vien can xoa: ";
                cin >> msv;
                myClass.DeleteStudent(msv);
            }
            pressAnyKey();
            break;
        }

        case 4:
        {
            cout << "4. Tim kiem sinh vien theo ten (BinarySearch): " << endl;
            myClass.SortStudent(0, myClass.ClassSize() - 1);

            string x;
            cout << "Nhap ten sinh vien can tim: ";
            fflush(stdin);
            getline(cin, x);
            myClass.FindStudent(x);
            pressAnyKey();
            break;
        }

        case 5:
        {
            cout << "5. Sap xep sinh vien theo ten: " << endl;
            myClass.SortStudent(0, myClass.ClassSize() - 1);
            cout << "Sap xep danh sach sinh vien thanh cong (QuickSort) !!!" << endl;
            myClass.PrintStudent();
            pressAnyKey();
            break;
        }
        case 6:
        {
            cout << "6. Hien thi danh sach sinh vien: " << endl;
            if (myClass.ClassSize() == 0)
            {
                cout << "Danh sach khong co sinh vien nao !!" << endl;
            }
            myClass.PrintStudent();
            pressAnyKey();
            break;
        }

        case 0:
        {
            system("cls");
            is_quit = true;
            cout << "Cam on ban da su dung chuong trinh <3" << endl;
            getch();
            system("cls");
            break;
        }

        default:
        {
            cout << "\nKhong co chuc nang nay!";
            cout << "\nHay chon dung chuc nang trong menu.";
            pressAnyKey();
            break;
        }
        }
    }
    return 0;
}

void pressAnyKey()
{
    cout << "\nBam phim bat ky de tiep tuc...";
    getch();
    system("cls");
}
