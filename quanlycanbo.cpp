#include "quanlycanbo.h"

void QuanLyCanBo::NhapDanhSach()
{
//    CanBo* canBo;
    shared_ptr<CanBo> canBo;
    int chon;
    do
    {
        system("cls"); // Xoa man hinh
        cout << "1. Nhap giang vien" << endl;
        cout << "2. Nhap Nhan Vien Hanh Chinh" << endl;
        cout << "3. Tro Ve" << endl;
        cout << "Chon Menu" << endl;
        cin >> chon;
        switch (chon) {
        case 1:
            // trong mot lop co phuong thuc thuan ao
            // nghia la do la mot lop truu tuong
            // Do do khong duoc khai bao mot doi tuong cua lop do
            // Ma chi co the khoi tao doi tuong khong co thuan ao
            canBo = make_shared<GiangVien>(); canBo->Nhap();
            dsCanBo.push_back(canBo);
            break;
        case 2:
            canBo = make_shared<NhanVienHanhChinh>(); canBo->Nhap();
            dsCanBo.push_back(canBo);
            break;
        case 3: break;
        default:
            break;
        }
    } while(chon != 3);
}

void QuanLyCanBo::InDanhSach(ostream &os)
{
    for(unsigned int i = 0; i < dsCanBo.size(); i++){
        dsCanBo[i]->Xuat(os); // Xuat ra file
        cout << endl;
        // cout la con cua ostream
        // dsCanBo[i]->Xuat(cout); ->> Xuat ra man hinh
    }
}

unsigned int QuanLyCanBo::TinhTongLuong()
{
    unsigned Tong = 0;
    for(unsigned int i = 0; i < dsCanBo.size(); i++){
        Tong += dsCanBo[i]->TinhLuong();
    }
    return Tong;
}

void QuanLyCanBo::TimCanBoLuongCao()
{
    ofstream OutFile;
    OutFile.open("CanBoLuongCaoNhat.txt");
    shared_ptr<CanBo> canBoLuongCao = NULL;
    for(unsigned int i=0; i < dsCanBo.size(); i++){
        // neu khong them dau sao, no se ra con tro la canbo
        // Neu them dau * no se lay gia tri con tro dang tro den
        cout << typeid(*dsCanBo[i]).name() << endl;
        string className = typeid(*dsCanBo[i]).name();
        if(className.compare("class GiangVien") == 0){
            if(canBoLuongCao == NULL){
                canBoLuongCao = dsCanBo[i];
            }
            else{
                if(dsCanBo[i]->TinhLuong() > canBoLuongCao->TinhLuong()){
                    canBoLuongCao = dsCanBo[i];
                }
            }
        }
    }

    for(int i = 0; i < dsCanBo.size() ; i++){
        if(dsCanBo[i]->TinhLuong() == canBoLuongCao->TinhLuong()){
            dsCanBo[i]->Xuat(OutFile);
        }
    }
    OutFile.close();
}

QuanLyCanBo::QuanLyCanBo()
{

}
