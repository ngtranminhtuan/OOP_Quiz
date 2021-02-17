#include "giangvien.h"

void GiangVien::Nhap(){
    CanBo::Nhap(); // ke thua phuong thuc nhap cua lop can bo
    cin.ignore();
    cout << "Nhap ten khoa: " ;
    getline(cin, this->Khoa);
    cout << "Chon trinh do: " << endl;
    int chon;
    do{
        cout << "1. Cu Nhan" << endl;
        cout << "2. Thac Si" << endl;
        cout << "3. Tien Si" << endl;
        cout << "Moi ban chon trinh do" << endl;
        cin >> chon;
        switch (chon) {
        case 1:
            TrinhDo = "Cu nhan";break;
        case 2:
            TrinhDo = "Thac Si";break;
        case 3:
            TrinhDo = "Tien Si";break;
        default:{
            cout << "Chon sinh, vui long chon tu 1-3" << endl;
            system("pause");
            cout << endl;
            break;
        }
        }
    }while(chon < 1 || chon >3);
    // Dieu kien de chay lai vong lap nay la khi chon sai, thi se chon lai
    cout << "Nhap so tiet day: " << endl;
    cin >> this->SoTietDay;
}

void GiangVien::Xuat(ostream& os){
    CanBo::Xuat(os);
    os << endl << "Ten Khoa: "<< this->Khoa << " - Trinh Do: " << this->TrinhDo << " - So Tiet Day: " << this->SoTietDay <<endl;
}

unsigned int GiangVien::TinhLuong(){
    return this->heSoLuong * 730 + this->phuCap + SoTietDay * 45;
}

GiangVien::GiangVien()
{
    Khoa = "CNTT";
    TrinhDo = "Cu nhan";
    SoTietDay = 0;
}
