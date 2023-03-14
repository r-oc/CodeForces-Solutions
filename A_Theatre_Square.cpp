// Author: Ryan O'Callaghan
// Problem: (A. Theatre Square) https://codeforces.com/problemset/problem/1/A
// Date: 2023-03-09

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n, m, a; cin >> n >> m >> a;

    if(n % a == 0 && m % a == 0) cout << (n/a)*(m/a);
    else if(m % a == 0) cout << (n/a)*(m/a+1);
    else if(n % a == 0) cout << (n/a)*(m/a+1);
    else cout << (n/a+1)*(m/a+1);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int TC = 1;
    //cin >> TC;
    while(TC--) solve();
}