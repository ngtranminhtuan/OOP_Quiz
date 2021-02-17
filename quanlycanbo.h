#ifndef QUANLYCANBO_H
#define QUANLYCANBO_H
#include "vector"
#include "canbo.h"
#include "giangvien.h"
#include "nhanvienhanhchinh.h"
#include "fstream"
#include "typeinfo"
#include <memory>

using namespace std;

class QuanLyCanBo
{
private:
    //Dung vector de them bot xoa sua dc de dang
    vector<shared_ptr<CanBo>> dsCanBo;
public:
    void NhapDanhSach();
    //Nen su dung istream de co the xuat ra console hoac
    //xuat ra man hinh
    void InDanhSach(ostream& os);
    unsigned int TinhTongLuong();
    void TimCanBoLuongCao();
    QuanLyCanBo();
};

#endif // QUANLYCANBO_H
