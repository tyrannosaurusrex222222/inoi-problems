#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n; cin >> n;
	vector<int> a;
	vector<int> b;
	for(int i = 0; i < n; i++){
	    int x; cin >> x;
	    a.push_back(x);
	}
	for(int i = 0; i < n; i++){
	    int x; cin >> x;
	    b.push_back(x);
	}
	int maximus = INT_MIN;
    for(int i = 0; i < a.size(); i++){
        for(int j = 0; j < a.size(); j++){
            vector<int> temp;
            if(i == j{
                if(a[i] > maximus){
                    maximus = a[i];
                }
                continue;
            }else if(i < j){
                for(int k = i; k <= j; k++){
                    temp.push_back(k);
                }
            }else{
                for(int k = i; k < a.size(); k++){
                    temp.push_back(k);
                }
                for(int k = 0; k < j; k++){
                    temp.push_back(k);
                }
            }
            int sum = 0;
            sum += a[temp[0]];
            sum += a[temp[temp.size() - 1]];
            for(int k = 1; k < temp.size() - 1; k++){
                sum += b[temp[k]];
            }
            if(sum > maximus){
                maximus = sum;
            }
        }
    }
    return maximus;
}
