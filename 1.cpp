#include <bits/stdc++.h>
using namespace std;

vector<int> dijkstra(vector<vector<pair<int, int>>> adjacency_list, int s) {
    vector<int> visited(adjacency_list.size(), 0);
    vector<int> distances(adjacency_list.size(), INT_MAX);
    distances[s] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq; // min-heap
    pq.push(make_pair(0, s)); // pushing pair of (distance, vertex)
    while(!pq.empty()) {
        pair<int, int> p = pq.top();
        pq.pop();
        int a = p.second; // vertex
        int b = p.first; // distance
        visited[a] = 1;
        if(distances[a] < b) {
            continue;
        }
        for(int i = 0; i < adjacency_list[a].size(); i++) {
            int x = adjacency_list[a][i].first; // adjacent vertex
            int y = adjacency_list[a][i].second; // edge weight
            if(visited[x]) {
                continue;
            }
            int newDistance = distances[a] + y;
            if(newDistance < distances[x]) {
                distances[x] = newDistance;
                pq.push(make_pair(newDistance, x));
            }
        }
    }
    return distances;
}

int main() {
    int n, e; cin >> n >> e;
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
        for(int j = 0; j < d.size(); j++){
            if(d[j] != INT_MAX && d[j] > m){
                m = d[j];
            }
        }
    }
    cout << m << "\n";
}
