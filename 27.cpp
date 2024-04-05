#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n, m; cin >> n >> m;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v.push_back(x);
    }
    for(int i = 0; i < m; i++){
        int a, b, c; cin >> a >> b >> c;
        if(a == 1){
            v[b - 1] = c;
        }else{
            int count = 0;
            for(int j = b - 1; j <= c - 1; j++){
                for(int k = j; k <= c - 1; j++){
                    if(v[j] > v[k]){
                        count++;
                    }
                }
            }
            cout << count << "\n";
        }
    }
}
