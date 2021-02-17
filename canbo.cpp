#include "canbo.h"

void CanBo::Nhap()
{
    cin.ignore();
    cout << "Nhap ho ten:" ;
    getline(cin, this->hoTen); cout << endl;
    cout << "Nhap he so luong: ";
    cin>>this->heSoLuong; cout << endl;
}

void CanBo::Xuat(ostream& os)
{
    os << "Ho ten: " << this->hoTen << " - He so luong: " << this->heSoLuong;
}

CanBo::CanBo()
{
    hoTen = "Chua co";
    heSoLuong = 0;
}
