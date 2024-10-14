#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> // for gcd

using namespace std;

class PhanSo {
public:
    int Tu, Mau;

    PhanSo(int tu, int mau) : Tu(tu), Mau(mau) {}

    // Rút gọn phân số
    void RutGon() {
        int gcd_val = gcd(abs(Tu), abs(Mau));
        Tu /= gcd_val;
        Mau /= gcd_val;
        if (Mau < 0) { // Đưa mẫu về dương
            Tu = -Tu;
            Mau = -Mau;
        }
    }

    // Tính tích của hai phân số
    PhanSo operator*(const PhanSo& other) const {
        PhanSo result(Tu * other.Tu, Mau * other.Mau);
        result.RutGon();
        return result;
    }

    // So sánh hai phân số
    bool operator<(const PhanSo& other) const {
        return Tu * other.Mau < Mau * other.Tu;
    }

    // Kiểm tra phân số có bằng nhau không
    bool operator==(const PhanSo& other) const {
        return Tu * other.Mau == Mau * other.Tu;
    }

    // Xuất phân số
    void Xuat() const {
        cout << Tu << "/" << Mau;
    }
};

// Hàm tìm tập hợp con có tích bằng phân số đích
void TimTapHopCon(vector<PhanSo>& phanSos, PhanSo dich, vector<PhanSo>& KetQua) {
    int n = phanSos.size();
    int soPhanTuMin = n + 1; // Đặt giá trị lớn hơn số lượng phân số

    for (int i = 1; i < (1 << n); ++i) {
        PhanSo tich(1, 1);
        vector<PhanSo> tapHopCon;

        // Duyệt qua các phân số để tính tích của tập hợp con
        for (int j = 0; j < n; ++j) {
            if (i & (1 << j)) {
                tich = tich * phanSos[j];
                tapHopCon.push_back(phanSos[j]);
            }
        }

        // Kiểm tra nếu tích bằng phân số đích và có số lượng ít hơn
        if (tich == dich && tapHopCon.size() < soPhanTuMin) {
            KetQua = tapHopCon;
            soPhanTuMin = tapHopCon.size();
        }
    }

    // Sắp xếp kết quả theo thứ tự tăng dần
    sort(KetQua.begin(), KetQua.end());
}

int main() {
    int n;
    cout << "Nhap so luong phan so: ";
    cin >> n;
    cout << "Nhap tu so va mau so cua phan so dich: ";
    int tuDich, mauDich;
    cin >> tuDich >> mauDich;
    PhanSo PhanSoDich(tuDich, mauDich);

    vector<PhanSo> phanSos;
    for (int i = 0; i < n; ++i) {
        int tu, mau;
        cout << "Nhap tu so va mau so cua phan so thu " << i + 1 << ": ";
        cin >> tu >> mau;
        PhanSo phanSo(tu, mau);
        phanSos.push_back(phanSo); // Không rút gọn khi nhập vào
    }

   

    vector<PhanSo> KetQua;
    TimTapHopCon(phanSos, PhanSoDich, KetQua);

    if (!KetQua.empty()) {
        for (const auto& phanSo : KetQua) {
            phanSo.Xuat();
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}
