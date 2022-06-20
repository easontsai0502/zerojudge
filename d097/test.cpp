#include <iostream>
using namespace std;
int main() {
    int n;
    while (cin>>n){
        int pre,now;
        int d[n]; // initial value not guanranteed to be zero
        for (int i = 0; i < n; i++) {
            d[i] = 0;
        }
        cin>>pre;
        for (int i = 1; i < n; i++){
            cin >> now;
            d[abs(now - pre)]++;
            pre = now;

        }
        bool flag = true;
        for (int i = 1; i < n; i++) {
            if (d[i] != 1) {
                flag = false;
                break;
            }

        }
        if (flag) cout << "Jolly\n";
        else cout << "Not jolly\n";
    }
    return 0;
}
