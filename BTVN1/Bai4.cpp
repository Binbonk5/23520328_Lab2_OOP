#include <iostream>
#include <vector>
using namespace std;

class MaTran {
private:
    int KichThuoc;
    vector<vector<int>> DuLieu;
    vector<vector<int>> BanDau;

public:
    MaTran(int m, const vector<vector<int>>& DuLieuBanDau) : KichThuoc(m), DuLieu(DuLieuBanDau), BanDau(DuLieuBanDau) {}

    void BienDoi() {
        vector<vector<int>> MaTranMoi(KichThuoc, vector<int>(KichThuoc));
        for (int i = 0; i < KichThuoc; ++i) {
            for (int j = 0; j < KichThuoc; ++j) {
                int x = (2 * i + j) % KichThuoc;
                int y = (i + j) % KichThuoc;
                MaTranMoi[x][y] = DuLieu[i][j];
            }
        }
        DuLieu = MaTranMoi;
    }

    bool KiemTraBanDau() {
        return DuLieu == BanDau;
    }

    int TinhHeSoChuKy() {
        int ChuKy = 0;
        do {
            BienDoi();
            ++ChuKy;
        } while (!KiemTraBanDau());
        return ChuKy;
    }
};

int main() {
    int m;
    cout << "Nhap kich thuoc ma tran: ";
    cin >> m;

    vector<vector<int>> DuLieuBanDau(m, vector<int>(m));
    cout << "Nhap du lieu ma tran:" << endl;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> DuLieuBanDau[i][j];
        }
    }

    MaTran maTran(m, DuLieuBanDau);
    int heSoChuKy = maTran.TinhHeSoChuKy();
    cout << "He so chu ky cua phep bien doi Arnold's Cat Map la: " << heSoChuKy << endl;

    return 0;
}
