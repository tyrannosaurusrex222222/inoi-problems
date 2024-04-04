#include <bits/stdc++.h>
using namespace std;

vector<int> v;

int dp(int s, int k) {
    if(s < k){
        return 0;
    }
    if(s == k){
        return v[k];
    }
    return max(dp(s - 1, k) + v[s], dp(s - 2, k) + v[s]);
}

int main() {
	// your code goes here
	int n, k; cin >> n >> k;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v.push_back(x);
    }
   
    cout << dp(v[v.size() - 1], k - 1) + dp(v[v.size()], 0)<< "\n";
}
