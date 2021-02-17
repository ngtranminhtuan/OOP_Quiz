#ifndef GIANGVIEN_H
#define GIANGVIEN_H
#include "canbo.h"

class GiangVien : public CanBo
{
protected:
    string Khoa, TrinhDo;
    unsigned int SoTietDay;
public:
    void Nhap();
    void Xuat(ostream& os);
    unsigned int TinhLuong();
    GiangVien();
};

#endif // GIANGVIEN_H
