#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int a, b; cin >> a >> b;
    vector<int> options;
    vector<int> x;
    vector<int> y;
    int size;
    while(b > 0){
        x.push_back(a % 10);
        y.push_back(b % 10);
        b -= b % 10;
        a -= a % 10;
        b /= 10;
        a /= 10;
        size++;
    }
    vector<int> vvv;
    for(int i = 0; i < size(); i++){
        int counter = i;
        int c = 0;
        int max = -1;
        while(c < size){
            if(x[counter] + y[counter] > max){
                max = x[counter] + y[counter];
            }
            if(counter >= size){
                counter = 0;
            }
            c++;
        }
        vvv.push_back(max);
    }
    for(int i = 0; i < vvv.size() - 1; i++){
        cout << vvv[i] << " ";
    }
    cout << vvv[vvv.size() - 1] << "\n";
}
