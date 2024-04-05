#include <bits/stdc++.h>
using namespace std;

int dp(vector<int> loot, vector<int> path, int s, int e){
    if(s == e){
        return loot[path[s]];
    }
    if(s > e){
        return 0;
    }
    return max(dp(loot, path, s + 2, e) + loot[s], dp(loot, path, s + 1, e));
}

int main() {
	// your code goes here
    int n, q; cin >> n >> q;
    vector<int> loot;
    vector<vector<int>> adjacency_list;
    for(int i = 0; i <= n; i++){
        vector<int> v;
        adjacency_list.push_back(v);
    }
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        loot.push_back(x);
    }
    for(int i = 0; i < n - 1; i++){
        int a, b; cin >> a >> b;
        adjacency_list[a].push_back(b);
    }
    for(int i = 0; i < q; i++){
        int a, b; cin >> a >> b;
        vector<int> prev(n + 1, -1);
        vector<int> visited(n + 1, 0);
        queue<int> qw;
        qw.push(a);
        while(qw.size() != 0){
            if(qw.top() == b){
                break;
            }
            if(!visited[qw.top()]){
                visited[qw.top()] = 1;
                for(int j = 0; j < adjacency_list[qw.top()].size(); j++){
                    qw.push(adjacency_list[qw.top()][j]);
                    prev[adjacency_list[qw.top()][j]] = qw.top();
                }
            }
        }
        vector<int> path;
        int cur = b;
        while(cur != a){
            path.push_back(cur);
            cur = prev[cur];
        }
        reverse(path.begin(), path.end());
        cout << dp(loot, path, a, b) << "\n";
    }
}
