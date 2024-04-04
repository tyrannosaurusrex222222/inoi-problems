#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    set<int> president;
    vector<set<int>> v;
    int n, s; cin >> n >> s;
    int xxx; cin >> xxx;
    for(int i = 0; i < xxx; i++){
        int x; cin >> x;
        president.push(x);
    }
    v.push_back(president);
    for(int i = 0; i < n - 1; i++){
        int x; cin >> x;
        set<int> dude;
        for(int j = 0; j < x; j++){
            int y; cin >> y;
            dude.push_back(y);
        }
        for(int i = 0; i < v.size(); i++){        
            std::set<int> unionSet
            set_union(dude.begin(), dude.end(), v[i].begin(), v[i].end(), std::inserter(unionSet, unionSet.begin()));
            if(unionSet.size() >= k){
                v.push_back(unionSet);
                break;
            }
        }
    }
    cout << v.size() - 1 << "\n";
}
