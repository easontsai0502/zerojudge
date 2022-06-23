
#include <iostream>
#include <queue>
using namespace std;
  
struct node{
    int h; //每個塔的高度
    int id; //每個塔的編號
    //constructor
    node(int _h, int _id) {
        h = _h;
        id = _id;
    }
};
  
struct cmp{
    //priority_queue 由小排到大
    bool operator()(const node& lhs, const node& rhs){
        return lhs.h > rhs.h;
    }
};
  
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //第一個代表「飲料罐塔」數量 n (1 ≤ A ≤ 1,000,000)，
    //第二個代表「飲料罐」高度 jar (1 ≤ B ≤ 1,000,000)，
    //第三個代表最大高度差距 delta (1 ≤ C ≤ 1,000,000)。
    int n, jar, delta;
    while (cin >> n >> jar >> delta) {
        delta -= delta % jar;
        priority_queue <node, vector<node>, cmp> pq;
        int a[n]; //每個塔的高度
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            pq.push(node(a[i], i));
        }
        long long ans = 0;
        while (!pq.empty()) {
            node now = pq.top();
            pq.pop();
            if (now.id != 0) {
                //降低左邊飲料罐塔的高度
                if (a[now.id - 1] - now.h > delta) {
                    int num = a[now.id - 1] - now.h - delta;
                    a[now.id - 1] -= num;
                    ans += num / jar;
                    node add(0, 0);
                    add.h = a[now.id - 1];
                    add.id = now.id - 1;
                    pq.push(add);
                }
            }
            if (now.id != n-1) {
                //降低右邊飲料罐塔的高度
                if (a[now.id + 1] - now.h > delta) {
                    int num = a[now.id + 1] - now.h - delta;
                    a[now.id + 1] -= num;
                    ans += num / jar;
                    node add(0, 0);
                    add.h = a[now.id + 1];
                    add.id = now.id + 1;
                    pq.push(add);
                }
            }
        }
        cout << ans << "\n";
    }
}