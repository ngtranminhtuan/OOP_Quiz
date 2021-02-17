#ifndef NHANVIENHANHCHINH_H
#define NHANVIENHANHCHINH_H
#include "canbo.h"

class NhanVienHanhChinh : public CanBo
{
private:
    string phongBan, chucVu;
    unsigned short soNgayCong;

public:
    void Nhap();
    void Xuat(ostream& os);
    unsigned int TinhLuong();
    NhanVienHanhChinh();
};

#endif // NHANVIENHANHCHINH_H
