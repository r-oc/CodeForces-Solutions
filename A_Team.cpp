// Author: Ryan O'Callaghan
// Problem: (A. Team) https://codeforces.com/problemset/problem/231/A
// Date: 2023-03-12

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    
    int n, bit, sum, cnt = 0; cin >> n;

    for(int i = 0; i < n; i++) {
        sum = 0;
        for(int j = 0; j < 3; j++) {
            cin >> bit;
            sum += bit; 
        }
        if(sum > 1) {
            cnt++;
        }
    }
    cout << cnt;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int TC = 1;
    //cin >> TC;
    while(TC--) solve();
}