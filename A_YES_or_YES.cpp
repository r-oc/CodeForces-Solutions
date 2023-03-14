// Author: Ryan O'Callaghan
// Problem: 
// Date: 

#include <bits/stdc++.h>
using namespace std;

#define sz(x) (int) (x).size()
#define yes cout << "YES\n"
#define no cout << "NO\n"

using ll = long long;

void solve() {
    string s; cin >> s;
    if(tolower(s[0]) == 'y' && tolower(s[1]) == 'e' && tolower(s[2]) == 's') yes;
    else no;
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int TC = 1;
    cin >> TC;
    while(TC--) solve();
}