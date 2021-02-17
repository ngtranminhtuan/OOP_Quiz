#include "nhanvienhanhchinh.h"

NhanVienHanhChinh::NhanVienHanhChinh()
{
    soNgayCong = 0;
    phongBan = "Chua Co";
    chucVu = "Chua xac dinh";
}

void NhanVienHanhChinh::Nhap(){
    CanBo::Nhap();
    cin.ignore();
    cout << "Nhap ten phong: " << endl;
    getline(cin, this->phongBan);
    cout << "Chon trinh do: " << endl;
    int chon;
    do{
        cout << "1. Truong Phong" << endl;
        cout << "2. Pho Phong" << endl;
        cout << "3. Nhan Vien" << endl;
        cout << "Moi ban chon chuc vu" << endl;
        cin >> chon;
        switch (chon) {
        case 1:
            chucVu = "Truong Phong"; this->phuCap = 2000;
            break;
        case 2:
            chucVu = "Pho Phong"; this->phuCap = 1000;
            break;
        case 3:
            chucVu = "Nhan Vien"; this->phuCap = 500;
            break;
        default:
            cout << "Chon sinh, vui long chon tu 1-3" << endl;
            system("pause");
            cout << endl;
            break;
        }
    }while(chon < 1 || chon >3);
    // Dieu kien de chay lai vong lap nay la khi chon sai, thi se chon lai
    cout << "Nhap so so ngay cong: " << endl;
    cin >> this->soNgayCong;
}

void NhanVienHanhChinh::Xuat(ostream& os)
{
    CanBo::Xuat(os);
    os << endl << "Ten Phong Ban: " << this->phongBan << " - Chuc Vu: " << this->chucVu << " - So ngay cong: " << this->soNgayCong << endl;
}

unsigned int NhanVienHanhChinh::TinhLuong() {
    return this->heSoLuong * 730 + phuCap + soNgayCong * 200;
}

