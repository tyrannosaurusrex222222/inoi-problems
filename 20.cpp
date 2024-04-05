#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;

#define speedup ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
const long long mod = 1e9+7;

int main() {
    speedup
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int total = 0;
        for (int i = 0; i < n; i++) {
            total += (s[i] == '1') ? 1 : -1;
        }
        if (total < 0) {
            for (int i = 0; i < n; i++) {
                s[i] = (s[i] == '1') ? '0' : '1';
            }
            total = -total;
        }
        //Low-Hanging Fruit
        if (total <= k){
            cout << 1;
            for (int i = 0; i < n-1; i++){
                cout << 0;
            }
            cout << '\n';
            continue;
        }
        int cnt = ((s[0] == '1') ? 1 : -1);
        cout << 1;
        for (int i = 1; i < n; i++) {
            cnt += (s[i] == '1') ? 1 : -1;
            if (cnt > k && total > k) {
                cnt -= k;
                total -= k;+-+
                cout << 1;
            } else {
                cout << 0;
            }
        }
        cout << '\n';
    }
    return 0;
}
