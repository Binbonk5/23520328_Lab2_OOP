#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l;
    int ct; //chi thi
    while (true) {
        cin >> ct;
        if (ct == -1) {
            cout << "[";
            for (auto itr = l.begin(); itr != l.end();) {
                cout << *itr;
                if (++itr!=l.end()) {
                    cout << ",";
                }
            }
            cout << "]" << endl;
            break;
        } else if (ct == 0) {
            int x;
            cin >> x;
            l.push_back(x);
        } else if (ct == 1) {
            int x;
            cin >> x;
            for (auto itr = l.begin(); itr != l.end(); itr++) {
                if (*itr == x) {
                    l.erase(itr);
                    break;
                }
            }
        } else if (ct == 2) {
            int x;
            cin >> x;
            l.remove(x);
        } else if (ct == 3) {
            int x, y;
            cin >> x >> y;
            auto itr = l.begin();
            advance(itr, x);
            *itr = y;
        }
     }
     return 0;
}
