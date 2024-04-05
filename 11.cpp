#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n, m, k; cin >> n >> m >> k;
        vector<vector<int> adjacency_list;
        map<int, int> museums;
        vector<int> sorted_museums;
        for(int j = 0; j <= n; j++){
            vector<int> v;
            adjacency_list.push_back(v);
        }
        for(j = 0; j < m; j++){
            int a, b; cin >> a >> b;
            adjacency_list[a].push_back(b);
        }
        for(j = 1; j <= n; j++){
            sorted_museums.push_back(x);
        }
        for(int i = 1; i <= n; i++){
            for(int j = 0; j < adjacency_list[i]; j++){
                sorted_museums[i] += adjacency_list[i][j];
            }
            museums[sorted_museums[i]] = i;
        }
        sort(sorted_museums.begin(), sorted_museums.end());
        int count = 0;
        int c = 0;
        int s = 0;
        int e = sorted_museums.size() - 1;
        while(c <= k){
            if(c % 2 == 0){
                count += sorted_museums[e];
                e--;
            }else{
                count += sorted_museums[s];
                s++;
            }
        }
        cout << count << "\n";
    }
}
