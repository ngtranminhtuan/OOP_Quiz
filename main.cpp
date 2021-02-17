#include <iostream>

using namespace std;
#include "quanlycanbo.h"

int main()
{
    QuanLyCanBo QLCB;
    int chon;
    do
    {
        system("cls");
        cout << "0. Thoat " << endl;
        cout << "1. Nhap Danh Sach" << endl;
        cout << "2. In danh sach ra man hinh" << endl;
        cout << "3. In danh sach ra file" << endl;
        cout << "4. Tinh tong luong" << endl;
        cout << "5. Tim giang vien luong cao" << endl;
        cout << "Moi ban chon menu" << endl;

        cin >> chon;
        switch (chon) {
        case 0:
            break;
        case 1:
            QLCB.NhapDanhSach();break;
        case 2:
            QLCB.InDanhSach(cout);system("pause");
            cout << endl;
            break;
        case 3:{
            ofstream outFile;
            outFile.open("DanhSach.txt");
            QLCB.InDanhSach(outFile);
            outFile.close(); break;
            break;
        }
        case 4:{
            unsigned TongLuong = QLCB.TinhTongLuong();
            cout << "Tong Luong = " << TongLuong;
            system("pause");
            cout << endl;
            break;
        }
        case 5:{
            QLCB.TimCanBoLuongCao(); break;
        }
        default:
            cout << "Chon Menu Sai!" ; system("pause");
            cout << endl;
            break;
        }
    }while(chon != 0);
    return 0;
}
