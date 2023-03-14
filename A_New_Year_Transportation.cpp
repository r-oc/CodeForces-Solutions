// Author: Ryan O'Callaghan
// Problem: 
// Date: 

#include <bits/stdc++.h>
using namespace std;

#define yes cout << "YES\n"
#define no cout << "NO\n"
using ll = long long;

void solve() {

    int n, gt, index = 1, cn; cin >> n >> gt;

    vector<int> in(n-1);

    for(int i = 0; i < n-1; i++) {
        cin >> in[i];
    }

    while(index <= gt) {
        if(index == gt) { yes; return; }
        index += in[index-1];
    }
    no;

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int TC = 1;
    //cin >> TC;
    while(TC--) solve();
}