// Author: Ryan O'Callaghan
// Problem: (A. Candies) https://codeforces.com/problemset/problem/1343/A
// Date: 2023-03-13

#include <bits/stdc++.h>
using namespace std;

#define sz(x) (int) (x).size()
#define yes cout << "YES\n"
#define no cout << "NO\n"

using ll = long long;

void solve() {
    ll n, k = 2; cin >> n;
    ll to = pow(2, k);
    
    while(n % (to-1) != 0) { 
        k++;
        to = pow(2, k);
    }
    cout << n / (to-1) << '\n';
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int TC = 1;
    cin >> TC;
    while(TC--) solve();
}