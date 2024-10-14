#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class HinhChuNhat {
public:
    int X, Y, W, H;
    HinhChuNhat(int x, int y, int w, int h) : X(x), Y(y), W(w), H(h) {}
};

class MaTran {
private:
    int M, N;
    vector<vector<int>> DuLieu;
    vector<HinhChuNhat> DanhSachHinhChuNhat;

public:
    MaTran(int m, int n, const vector<vector<int>>& duLieu) : M(m), N(n), DuLieu(duLieu) {}

    void TimHinhChuNhat() {
        vector<vector<bool>> DaKiemTra(M, vector<bool>(N, false));
        for (int i = 0; i < M; ++i) {
            for (int j = 0; j < N; ++j) {
                if (DuLieu[i][j] == 1 && !DaKiemTra[i][j]) {
                    int ChieuRong = 0, ChieuCao = 0;
                    while (j + ChieuRong < N && DuLieu[i][j + ChieuRong] == 1) {
                        ++ChieuRong;
                    }
                    while (i + ChieuCao < M && DuLieu[i + ChieuCao][j] == 1) {
                        ++ChieuCao;
                    }
                    if (ChieuRong >= 2 && ChieuCao >= 2) {
                        DanhSachHinhChuNhat.push_back(HinhChuNhat(j, i, ChieuRong, ChieuCao));
                        for (int x = i; x < i + ChieuCao; ++x) {
                            for (int y = j; y < j + ChieuRong; ++y) {
                                DaKiemTra[x][y] = true;
                            }
                        }
                    }
                }
            }
        }
    }

    bool cmp (HinhChuNhat a, HinhChuNhat b){
         if (a.Y == b.Y) return a.X < b.X;
            return a.Y < b.Y;
    }

    void InDanhSachHinhChuNhat() {
        // sort(DanhSachHinhChuNhat.begin(), DanhSachHinhChuNhat.end(), cmp);
        for (const auto& hcn : DanhSachHinhChuNhat) {
            cout << "[" << hcn.X << ", " << hcn.Y << ", " << hcn.W << ", " << hcn.H << "]" << endl;
        }
    }
};

int main() {
    int M, N;
    // cout << "Nhap kich thuoc ma tran (M N): ";
    cin >> M >> N;

    vector<vector<int>> DuLieu(M, vector<int>(N));
    // cout << "Nhap du lieu ma tran (0 hoac 1):" << endl;
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> DuLieu[i][j];
        }
    }

    MaTran MaTran(M, N, DuLieu);
    MaTran.TimHinhChuNhat();
    // cout << "Danh sach cac hinh chu nhat:" << endl;
    MaTran.InDanhSachHinhChuNhat();

    return 0;
}
/*
10 10
0 0 1 0 0 0 0 0 0 1
0 0 1 0 1 0 0 1 1 0
0 0 0 0 0 0 0 1 1 0
1 1 1 0 0 0 0 0 1 0
1 1 1 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0 
0 0 0 0 0 1 1 0 0 0
0 0 0 0 0 1 1 0 0 0

*/