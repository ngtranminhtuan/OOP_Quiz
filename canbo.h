#ifndef CANBO_H
#define CANBO_H
#include <iostream>
#include <string>
using namespace std;

class CanBo
{
protected:
    string hoTen;
    unsigned int phuCap;
    unsigned short heSoLuong;

public:
    virtual void Nhap();
    virtual void Xuat(ostream& os);
    virtual unsigned int TinhLuong() = 0;
    CanBo();
};

#endif // CANBO_H
