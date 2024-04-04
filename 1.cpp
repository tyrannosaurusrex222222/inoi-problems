#include <bits/stdc++.h>
using namespace std;

vector<int> dijkstra(vector<vector<pair<int, int>>> adjacency_list, int s) {
    vector<int> visited(adjacency_list.size(), 0);
    vector<int> distances(adjacency_list.size(), INT_MAX);
    distances[s] = 0;
    priority_queue<pair<int, int>> pq;
    pq.push(make_pair(s, 0));
    while(pq.size() != 0){
        pair<int, int> p = pq.top();
        auto [a, b] = p;
        visited[a] = 1;
        if(distances[a] < b){
            continue;
        }
        for(int i = 0; i < adjacency_list[a].size(); i++){
            auto [x, y] = adjacency_list[a][i];
            if(visited[x]){
                continue;
            }
            int newDistance = distances[a] + y;
            if(newDistance < distances[x]){
                distances[x] = newDistance;
                pq.push(make_pair(x, newDistance));
            }
        }
    }
    return distances;
}

int main() {
    int n, e;
    int m = -1;
    vector<vector<pair<int, int>>> adjacency_list;
    for(int i = 0; i <= n; i++){
        vector<pair<int, int>> v;
        adjacency_list.push_back(v);
    }
    for(int i = 0; i < e; i++){
        int a,b,w; cin >> a >> b >> w;
        auto p = make_pair(b, w);
        adjacency_list[a].push_back(p);
    }
    for(int i = 1; i <= n; i++){
        vector<int> d = dijkstra(adjacency_list, i);
        m = max(*max_element(d.begin(), d.end()), m);
    }
    cout << m << "\n";
}
